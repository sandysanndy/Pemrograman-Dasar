#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int bilangan;
    
    cout<<"Masukkan bilangan = ";
    cin>>bilangan;
    
    cout<<bilangan<<" merupakan bilangan ";
    if (bilangan % 2 == 0) 
       cout<<"genap";
     else 
       cout<<"ganjil";
    
    cout<<endl<<bilangan<<" merupakan bilangan yang ";
    if (bilangan <= 10 )
       cout<<"kurang";
    else
       cout<<"lebih";
       
    cout<<" dari 10";
       
    cout<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
