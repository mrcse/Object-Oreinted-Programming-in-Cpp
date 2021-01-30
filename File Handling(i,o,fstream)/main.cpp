#include <iostream>
///ifstream uses for reading files      /// and ofstream uses for writing on files
#include <fstream>     ///this is for both read & write
using namespace std;

int main()
{
    fstream file;        ///file is an object of fstream class
    file.open("New File.txt",ios::in | ios:: out | ios :: trunc );  /// this will create a file
    if (!file.is_open())
        cout<<"File is not created Successfully!!\n";
    else
        file.close();
    return 0;
}
