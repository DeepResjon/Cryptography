#include <stdio.h>




void caesar_decrypt(char *input){
  for (int i=0; input[i]!='\0';i++){
    printf("%c",input[i]-3);
  }
}

void caesar_encrypt(char *input){

  for (int i=0; input[i]!='\0';i++){
    printf("%c",input[i]+3);
  }
}