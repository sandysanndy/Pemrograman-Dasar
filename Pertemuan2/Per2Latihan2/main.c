#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //dua variable alas dan tinggi  
  int alas;
  int tinggi;
  float luas_segitiga;
  
  //isi alas dan tinggi
  alas = 4;
  tinggi = 5;
  
  //luas segitiga
  luas_segitiga = 0.5 * alas * tinggi;
  
  //output luas segitiga ke layar
  printf("Luas Segitiga = %.1f \n\n", luas_segitiga);
  
  system("PAUSE");	
  return 0;
}
