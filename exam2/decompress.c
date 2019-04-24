//File: decompress.c
//Name: Joe

#include "support/part1.h"
#include <stdio.h>

int main(int argc, char** argv){
  if(argc == 1){
    printf("Usage: ./decompress compressed-str [compressed-str2 ...]\n");
    return 0;
  }
  for(int i = 1; i < argc; i++){
    if(!isCompressed(argv[i])){
      printf("ERROR: UNABLE TO DECOMPRESS: %s\n", argv[i]);
      return 0;
    }
  }
  for(int i = 1; i < argc; i++){
    printf("%s -> %s\n", argv[i], decompress(argv[i]));
  }
  return 0;
}
