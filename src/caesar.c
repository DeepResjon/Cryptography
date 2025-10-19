#include <stdio.h>




void caesar_decrypt(char *input){
  for (int i=0; input[i]!='\0';i++){
     char c = (input[i]-65 - 3);
    if (c<0){
      c=c+26;
    }
    printf("%c",c+65);
  }
}

void caesar_encrypt(char *input){

  for (int i=0; input[i]!='\0';i++){
   char c = (input[i]-65 +3);
    if(c>25){
      c=c-26;
    }
    printf("%c",c+65);
  }
}