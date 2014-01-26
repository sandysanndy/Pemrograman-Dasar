#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int umur;
    printf("Masukkan umur anda = ");
    scanf("%i", &umur);
    
    if (umur >= 17) {
        printf("Anda layak mendapatkan SIM\n");
        printf("Anda layak mendapatkan KTP");
    } else {
        printf("Anda belum layak mendapatkan SIM\n");
        printf("Anda belum layak mendapatkan KTP");
    }
  printf("\n\n");
  system("PAUSE");	
  return 0;
}
