#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  //Mendefinisikan variabel
  const float phi = 3.14;
  int jari_jari;
  float luas;
  
  //Memasukkan nilai pada variabel
  printf("Masukkan jari-jari = ");
  scanf("%i", &jari_jari);
  
  //Menghitung luas lingkaran
  luas = phi * pow(jari_jari, 2);
  printf("Luas = %.2f \n\n", luas);
  
  system("PAUSE");	
  return 0;
}
