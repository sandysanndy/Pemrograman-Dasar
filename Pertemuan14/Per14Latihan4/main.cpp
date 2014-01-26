#include <cstdlib>
#include <iostream>
#include <math.h>
#define phi 3.14
using namespace std;

int main(int argc, char *argv[])
{
    char nama[31]= "sandy";
    int jari = 10;
    float luas = phi * pow(jari,2);
    
    cout<<nama<<endl;
    cout<<&nama<<endl;
    cout<<luas<<endl;
    cout<<&luas<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
