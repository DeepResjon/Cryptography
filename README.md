Here is a program, which can encrypt or decrypt a certain input from the user.
The program can either decrypt or encrypt in caesar or vigenere.

$ code-prj/crypto/crypto

Usage:
  code-prj/crypto/crypto MODE ALGORITHM TEXT [KEY]

Modes:
  e, encrypt        Encrypt the input text
  d, decrypt        Decrypt the input text

Algorithms:
  c, caesar         Caesar cipher
  v, vigenere       Vigenère cipher

Examples:
  code-prj/crypto/crypto e c HELLO
  code-prj/crypto/crypto decrypt v LQVRRBOFTQJ UGLE
