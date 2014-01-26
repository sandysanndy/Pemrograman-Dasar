#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char nama1[31];
    char nama2[31];
    cout<<"Masukkan nama 1 : ";
    fflush(stdin);cin.get(nama1, 30);
    cout<<"Masukkan nama 2 : ";
    fflush(stdin);cin.get(nama2, 30);
    
    cout<<"Nama Gabung : "<<strcat(nama1, nama2)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
