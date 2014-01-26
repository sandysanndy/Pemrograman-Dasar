#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char nama[31];
    int panjang;
    cout<<"Masukkan Nama : ";
    fflush(stdin);
    cin.get(nama, 30);
    panjang = strlen(nama);
    cout<<"Panjang Nama  : "<<panjang<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
