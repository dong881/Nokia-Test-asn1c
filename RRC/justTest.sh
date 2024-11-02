#!/bin/bash

rm *.o
make -f testRRC.mk

for i in `ls XER`
do
    baseName=`echo $i | cut -d "." -f 1`
    typeName=`echo $i | cut -d "-" -f 1`
    ./test_RRC $typeName XER/${baseName}.xml APER/${baseName}.aper
done

echo "Making diff"
diff -r NokiaAPER APER
