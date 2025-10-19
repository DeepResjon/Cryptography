#include <stdio.h>
#include "../include/caesar.h"
#include "../include/vigenere.h"

const char *menu = "Usage: \ncode-prj/crypto/crypto MODE ALGORITHM TEXT [KEY]\n\nModes:\n  e, encrypt        Encrypt the input text\n  d, decrypt        Decrypt the input text\n\nAlgorithms:\n  c, caesar         Caesar cipher\n  v, vigenere       Vigenère cipher\n\nExamples:\n  code-prj/crypto/crypto e c HELLO\n  code-prj/crypto/crypto decrypt v LQVRRBOFTQJ UGLE\n";
int main(int argc, char *argv[]) {
  if (argc<2){
    printf("%s", menu);
  }
  else{
    if((argv[1][0]=='c') && (*argv[2]=='e')&& (argc==4)){
      caesar_encrypt(argv[3]);
    }
    else if ((argv[1][0]=='c')&&(argv[2][0]=='d')&& (argc==4)){
      caesar_decrypt(argv[3]);
    }
    else if ((argv[1][0]=='v')&&(argv[2][0]=='e')&& (argc==5)){
      viginere_encrypt(argv[3], argv[4]);
    }
    else if((argv[1][0]=='v')&&(argv[2][0]=='d')&& (argc==5)){
      viginere_decrypt(argv[3], argv[4]);
    }
  }
}
