#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int *point;
    int arrayangka[4] = {1, 2, 3, 4};
    short int i;
    point = arrayangka;
    for(i=0;i<4;i++)
    {
        cout<<*(point+i)<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
