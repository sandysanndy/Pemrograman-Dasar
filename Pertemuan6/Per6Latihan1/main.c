#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define phi 3.14
int main(int argc, char *argv[])
{
    int menu, jari2;
    float luas;
    do {
       system("cls");
       printf("Menu Pilihan\n");
       printf("------------\n");
       printf("1. Input Data\n");
       printf("2. Output Data\n");
       printf("3. Keluar\n");
       printf("------------\n\n");
       printf("Masukkan menu pilihan : ");
       scanf("%i", &menu);
       
       switch(menu)
       {
          case 1 :
               system("cls");
               printf("1. Input Data\n");
               printf("------------\n");
               printf("Masukkan jari-jari = ");
               scanf("%i", &jari2);
               getch();
               break;
          case 2 :
               system("cls");
               printf("2. Output Data\n");
               printf("------------\n");
               luas = phi * pow(jari2, 2);
               printf("%.2f\n", luas);
               getch();
               break;
          case 3 :
               printf("3. Keluar\n");
               printf("Tekan sembarang tombol untuk keluar");
               getch();
               break;
          default :
                  printf("Menu tidak terdaftar\n");
                  printf("Tekan sembarang tombol");
                  getch();               
       }
    } while (menu != 3);
  return 0;
}
