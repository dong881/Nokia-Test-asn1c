#!/bin/bash

cp Src/test_RRC.c .
cp Src/testRRC.mk .
cp Src/rrc_15_3.asn1 .

asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER rrc_15_3.asn1

make -f testRRC.mk

for i in `ls XER`
do
    baseName=`echo $i | cut -d "." -f 1`
    typeName=`echo $i | cut -d "-" -f 1`
    ./test_RRC $typeName XER/${baseName}.xml APER/${baseName}.aper
done

diff -r NokiaAPER APER
