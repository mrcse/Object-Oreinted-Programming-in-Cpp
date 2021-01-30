#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    fstream binFile;
    binFile.open("file.bin",ios::binary | ios::in | ios::out | ios::trunc);
    char line[50]="Hi i am an Engineering Student.";

    for(int i=0;i<=strlen(line);i++)    //writing on file
    {
        binFile.put(line[i]);
    }
    binFile.seekg(0);
    char c;
    while(binFile.good())
    {
        binFile.get(c);
        cout<<c;
    }
    return 0;
}
