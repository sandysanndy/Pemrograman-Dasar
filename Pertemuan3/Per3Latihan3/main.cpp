#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    const float setengah = 0.5;
    int alas;
    int tinggi;
    float luas;
    
    cout<<"Masukkan alas = ";
    cin>>alas;
    
    cout<<"Masukkan tinggi = ";
    cin>>tinggi;
    
    luas = setengah * alas * tinggi;
    
    cout<<setiosflags(ios::fixed);
    cout<<"Luas segitiga = "<<setprecision(3)<<luas<<endl<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
