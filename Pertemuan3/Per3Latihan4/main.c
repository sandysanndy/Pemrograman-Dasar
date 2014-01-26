#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nama[31];
  char nim[9];
  char kelas[5];
  
  printf("Masukkan nama = ");
  fflush(stdin);
  gets(nama);
  
  printf("Masukkan nim = ");
  scanf("%s", nim);
  
  printf("Masukkan kelas = ");
  fflush(stdin);
  gets(kelas);
  
  printf("\nHalo %s\n", nama);
  printf("NIM   : %s\n", nim);
  printf("Kelas : %s\n\n", kelas);
  
  system("PAUSE");	
  return 0;
}
