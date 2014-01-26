#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int i, ulang;
  int jumlah_genap,jumlah_ganjil, total;
  int atas, bawah;
  //Inisialisasi jumlah ganjil dan genap
  jumlah_ganjil = 0;
  jumlah_genap = 0;
  printf("Masukkan batas atas = ");
  scanf("%i", &atas);
  printf("Masukkan batas bawah = ");
  scanf("%i", &bawah);
  
  //Jumlah ganjil
  printf("Jumlah Ganjil\n");
  //Perulangan menentukan jumlah ganjil
  for(i=bawah;i<=atas;i++)
  {
     if(i%2 == 1){
        printf("%i", i);
           if(i < atas-1){
               printf(" + ");
            }
        jumlah_ganjil = i + jumlah_ganjil; 
     }
     
  }
  printf(" = %i\n", jumlah_ganjil);
  printf("\n");
  
  //Jumlah genap
  printf("Jumlah Genap\n");
  //Perulangan menentukan jumlah ganjil
  for(i=atas;i>=bawah;i--)
  {
     if(i%2 == 0){
      printf("%i", i);
         if (bawah%2 == 1){
            if(i > bawah+1){
               printf(" + ");               
            } 
         }else if(bawah%2 == 0){
                   if(i > bawah){
                      printf(" + ");
                      }
              }
      jumlah_genap = i + jumlah_genap;
      }
  }
  printf(" = %i\n", jumlah_genap);
  printf("\n");
  
  //Menghitung dan menampilkan total genap dan ganjil
  total = jumlah_ganjil + jumlah_genap;
  printf("Total = %i\n\n", total);
  
  system("PAUSE");	
  return 0;
}
