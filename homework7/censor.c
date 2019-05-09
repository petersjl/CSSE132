#include <stdio.h>
#include <string.h>
#include "problems.c"

//Made by: Joe Peters

int main(int argc, char** argv){
  FILE* f = fopen(argv[1], "r");
  if(f == NULL){
    printf("ERROR: Could not find file.");
    return 0;
  }
  int cursor = -1;
  char buf[512];
  char buf2[512];
  cursor = fread(buf, sizeof(char), 511, f) / sizeof(char);
  while(cursor != 0){
    buf[511]='\0';
    for(int i = 0; i < cursor; i++){
      if(!isWordChar(buf[i]))
        printf("%c", buf[i]);
      else{
        int j = 0;
        while(isWordChar(buf[i]) && i < cursor){
          buf2[j] = buf[i];
          i++;
          j++;
        }
        buf2[j] = '\0';
        if(strlen(buf2) == 4){
          buf2[1] = '*';
          buf2[2] = '*';
        }
        printf("%s", buf2);
        printf("%c", buf[i]);
      }
    }
    cursor = fread(buf, sizeof(char), 511, f) / sizeof(char);
  }
  fclose(f);
  return 0;
}
