#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a;
  long int b;
  unsigned short int c;
  float d;
  double e;
  
  //input nilai tiap variabel
  
  a = -30;
  b = -50;
  c = 32;
  d = 3.14;
  e = 1530.284;
  
  //output tiap variabel
  
  printf("a = %i, b = %li, c = %u\n\nd = %.2f, e = %.3f \n\n",a,b,c,d,e);
  
  system("PAUSE");	
  return 0;
}
