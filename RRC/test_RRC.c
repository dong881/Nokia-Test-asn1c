

#include "SearchSpace.h"
#include "SearchSpaceId.h"
#include "PDCCH-ConfigCommon.h"
#include "BWP.h"
#include "BWP-DownlinkCommon.h"
#include "DownlinkConfigCommon.h"

#include <stdio.h>
#include <string.h>


#define DEFAULT_BUFFER_SIZE 65535


//     searchSpaceSIB1                     SearchSpaceId
//     searchSpaceOtherSystemInformation   SearchSpaceId                        
//     pagingSearchSpace                   SearchSpaceId   

char* typeNameArray[] = {
  "SearchSpace",
  "SearchSpaceId",
  "PDCCH_ConfigCommon",
  "BWP",
  "BWP_DownlinkCommon",
  "DownlinkConfigCommon",
  NULL
};

asn_TYPE_descriptor_t* typeDescArray[] = {
  &asn_DEF_SearchSpace,
  &asn_DEF_SearchSpaceId,
  &asn_DEF_PDCCH_ConfigCommon,
  &asn_DEF_BWP,
  &asn_DEF_BWP_DownlinkCommon,
  &asn_DEF_DownlinkConfigCommon,
  NULL
};

void* getValueFromXERFile(asn_TYPE_descriptor_t* desc, const char* path) {
  char* xerBuffer;
  char* aperBuffer;
  char* startPtr;
  char* endPtr;
  void* result = NULL;

  xerBuffer = malloc(DEFAULT_BUFFER_SIZE);
  aperBuffer = malloc(DEFAULT_BUFFER_SIZE);

  // Allocate the buffers.
  startPtr = xerBuffer;
  endPtr =   xerBuffer + DEFAULT_BUFFER_SIZE;

  FILE* inputFile = fopen(path, "r");

  if (inputFile != NULL) {
    size_t length = fread(startPtr, 1, DEFAULT_BUFFER_SIZE, inputFile);

    if (length < 0) {
      fprintf(stderr, "Error: Cannot read the %s file\n", path);
    } else if (feof(inputFile)) {
      asn_dec_rval_t decodeStatus = xer_decode(NULL, desc, (void**)&result, startPtr, length);

      if (decodeStatus.code != RC_OK) {
	fprintf(stderr, "Error: Cannot decode xer file %s Reason: %s\n",
		path,
		(decodeStatus.code == RC_WMORE)? "More data expected":"Fail to decode data");
	result = NULL;
      }
    } else {
      fprintf(stderr, "Error: Cannot read the %s file\n", path);
    }
  }
  
  return result;
}

void usage() {
  fprintf(stderr, "test_RRC <type name> <XER file>\n");
}

void saveAPERFile(const char* oFileName, const char* buffer, size_t length) {
  FILE* file = fopen(oFileName, "w");
  if (file != NULL) {
    size_t size = fwrite(buffer, 1, length, file);
    fclose(file);
  }
}

int testAPER(void* value, asn_TYPE_descriptor_t* typeDesc, const char* typeName, const char* oFileName) {
   char buffer[DEFAULT_BUFFER_SIZE];
   size_t length = sizeof(buffer);
   void* newValue = NULL;

   asn_enc_rval_t encodeStatus = aper_encode_to_buffer(typeDesc, NULL, value, buffer, length);
   if (encodeStatus.encoded >= 0) {
 #ifdef VERBOSE_ON      
     printf("Encoding APER %s value: OK %ld\n", typeName, encodeStatus.encoded);
#endif
     size_t aperLength = (encodeStatus.encoded+7)/8;
     saveAPERFile(oFileName, buffer, aperLength);
     asn_dec_rval_t decodeStatus = aper_decode_complete(NULL,
							typeDesc,
							&newValue,
							buffer,
							encodeStatus.encoded);
     if (decodeStatus.code != RC_OK) {
       fprintf(stderr, "Error: Cannot APER decode %s value\n", typeName);
     } else {
 #ifdef VERBOSE_ON      
       printf("Decode APER %s value: OK\n", typeName);
       xer_fprint(stdout, typeDesc, value);
       printf("=========================================\n");
       xer_fprint(stdout, typeDesc, newValue);
#endif
     }
   } else {
     fprintf(stderr, "Error: Cannot APER encode %s value\n", typeName);
   }

}

int main(int argc, char** argv) {
  if (argc == 4) {
    const char* typeName = argv[1];
    const char* iFileName = argv[2];
    const char* oFileName = argv[3];
    int index = 0;
     
    while (typeNameArray[index] != NULL) {
      const char* currentTypeName = typeNameArray[index];
      if (strcmp(currentTypeName, typeName) == 0) {
	asn_TYPE_descriptor_t* desc = typeDescArray[index];
	void* ptr = getValueFromXERFile(desc, iFileName);

	if (ptr == NULL) {
	  fprintf(stderr, "Cannot decode type %s from file %s\n", currentTypeName, iFileName);
	  break;
	}

	// By type.
	// Do an APER encode,
	// then an APER decode, (check the APER encoding/decoding)
	// and finally encode the result into XER
	// and compare it to the original file given as argument.
	testAPER(ptr, desc, typeName, oFileName);

	break;
      }

      index++;
    }
    
  } else {
    usage();
  }

  return 0;
}

