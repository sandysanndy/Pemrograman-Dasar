#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int pilihan;
    
    cout<<"Menu Pilihan"<<endl;
    cout<<"------------"<<endl;
    cout<<"1. Input Data"<<endl;
    cout<<"2. Proses"<<endl;
    cout<<"3. Output Data"<<endl;
    cout<<"------------"<<endl<<endl;
    
    cout<<"Masukkan menu pilihan : ";
    cin>>pilihan;
    
    cout<<endl;
    cout<<"Anda memilih menu "; 
    switch (pilihan){
       case 1 :
          cout<<"input data";
          //break;
       case 2 :
          cout<<"proses";
          break;
       case 3:
          cout<<"output data";
          break;
    }      
    cout<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
