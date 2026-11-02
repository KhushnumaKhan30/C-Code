#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T;
    size_t pos;

    cout << "Enter string S: ";
    getline(cin, S);

    cout << "Enter string T: ";
    getline(cin, T);


    pos = S.find(T);

    if (pos != string::npos)
    {
        cout << "T begins at position: " << pos << endl;
    }
    else
    {
        cout << "T is not present. Position: 1" << endl;
    }

    return 0;
}

