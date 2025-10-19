#include <stdio.h>

void viginere_decrypt(char *input, char *key){
  int j=0;
  for (int i=0; input[i]!='\0';i++){
    int shift = (key[j]-65);
    j++;
    if (key[j]=='\0'){
      j=0;
    }
    char c = (input[i]-65 - shift);
    if (c<0){
      c=c+26;
    }
    printf("%c",c+65);
  }

}

void viginere_encrypt(char *input, char *key){
  int j=0;
  for (int i=0; input[i]!='\0';i++){
    int shift = (key[j]-65);
    j++;
    if (key[j]=='\0'){
      j=0;
    }
    char c = (input[i]-65 + shift);
    if(c>25){
      c=c-26;
    }
    printf("%c",c+65);
  }

}