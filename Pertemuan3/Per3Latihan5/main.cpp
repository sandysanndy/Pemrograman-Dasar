#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char nama[31];
    char nim[10];
    char kelas[6];
    
    //Memasukkan nilai pada variabel nama
    cout<<"Masukkan nama : ";
    fflush(stdin);
    cin.get(nama, 30);
    
    //Memasukkan nilai pada variabel nim
    cout<<"Masukkan nim : ";
    fflush(stdin);
    cin.get(nim, 9);
    
    //Memasukkan nilai pada variabel kelas
    cout<<"Masukkan kelas : ";
    fflush(stdin);
    cin.get(kelas, 5);
    
    //Menampilkan nilai dari variabel nama, nim, dan kelas pada layar
    cout<<endl<<"Halo "<<nama<<endl<<"NIM   : "<<nim<<endl<<"Kelas : "<<kelas<<endl<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
