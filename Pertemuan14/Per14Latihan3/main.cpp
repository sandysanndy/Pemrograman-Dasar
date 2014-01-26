#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    char username[9] = "sandy";
    char userinput[9];
    
    
    cout<<"Masukkan input : ";
    cin>>userinput;
    if(strcmp(userinput, username)==0){
       cout<<"Sama"<<endl;
       }
       else{
            cout<<"Tidak Sama"<<endl;
            }
    if(strcmpi(userinput, username)==0){
       cout<<"Sama"<<endl;
       }
       else{
            cout<<"Tidak Sama"<<endl;
            }
    if(strncmp(userinput, username, 3)==0){
       cout<<"Sama"<<endl;
       }
       else{
            cout<<"Tidak Sama"<<endl;
            }
    if(strnicmp(userinput, username, 3)==0){
       cout<<"Sama"<<endl;
       }
       else{
            cout<<"Tidak Sama"<<endl;
            }        
    system("PAUSE");
    return EXIT_SUCCESS;
}
