#include <cstdlib>
#include <iostream>
#include <math.h>
#define phi 3.14
using namespace std;

typedef struct{
   int jari2;
   float luas;
}struct_lingkaran;

void input_luas(struct_lingkaran sl[3]){
   int i;
   //struct_lingkaran sl;
   for(i=0;i<3;i++){
   //input jari
   cout<<"Masukkan jari-jari "<<i+1<<" = ";
   cin>>sl[i].jari2;
   
   //hitung luas
   sl[i].luas = phi * pow(sl[i].jari2, 2);
   }
}

void output_luas (struct_lingkaran sl[3]){
    int i;
    for(i=0;i<3;i++){
    cout<<"Luas "<<i+1<<" = "<<sl[i].luas<<endl;
   }
}


int main(int argc, char *argv[])
{   
    struct_lingkaran sl[3];    
    /*cout<<"Masukkan jari-jari = ";
    cin>>sl.jari2;
    sl.luas = phi * pow(sl.jari2, 2);
    cout<<sl.luas<<endl;*/
    input_luas(sl);
    output_luas(sl);
    system("PAUSE");
    return EXIT_SUCCESS;
}
