#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    fstream myfile("example.bin", ios::binary | ios::out | ios::in);

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "unable to open file";

    return 0;
}
/*
dsfadsf
daavfgdrv
srsdfv
*/
