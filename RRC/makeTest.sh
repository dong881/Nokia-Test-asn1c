#!/bin/bash

cp Src/test_RRC.c .
cp Src/testRRC.mk .
cp Src/rrc_15_3.asn1 .

echo "Nokia asn1c"
asn1c -h
echo "Mouse asn1c"
/opt/asn1c/bin/asn1c -h
/opt/asn1c/bin/asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice rrc_15_3.asn1

make -f testRRC.mk

for i in `ls XER`
do
    baseName=`echo $i | cut -d "." -f 1`
    typeName=`echo $i | cut -d "-" -f 1`
    ./test_RRC $typeName XER/${baseName}.xml APER/${baseName}.aper
done

echo "Making diff"
diff -r NokiaAPER APER
