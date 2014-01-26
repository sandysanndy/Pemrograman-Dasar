#include <stdio.h>
#include <stdlib.h>

#define phi 3.14

int main(int argc, char *argv[])
{
  int jari_jari;
  float luas_lingkaran;
  const float pi = 3.14;
  //nilai jari-jari
  jari_jari = 10;
  
  //luas lingkaran
  luas_lingkaran = pi * jari_jari * jari_jari;
  
  //output luas lingkaran
  printf("Luas Lingkaran = %.2f untuk jari-jari = %i \n\n", luas_lingkaran, jari_jari);
  system("PAUSE");	
  return 0;
}
