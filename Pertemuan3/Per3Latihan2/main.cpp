#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    const float phi = 3.14;
    int jari_jari;
    float luas;
    
    cout<<"Masukkan jari-jari = ";
    cin>>jari_jari;
    
    luas = phi * pow(jari_jari, 2);
    cout<<setiosflags(ios::fixed);
    cout<<"Luas lingkaran = "<<setprecision(2)<<luas<<endl;
       
    system("PAUSE");
    return EXIT_SUCCESS;
}
