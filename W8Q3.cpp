#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sen, findStr, repStr;

    cout << "Enter a sentence: ";
    getline(cin, sen);

    cout << "Enter the string to find: ";
    getline(cin, findStr);

    cout << "Enter the string to replace it with: ";
    getline(cin, repStr);

   
    int pos = sen.find(findStr);
    
    sen.replace(pos,findStr.length(),repStr);
    
    cout<<"String after replacement: "<<sen<<endl;

    return 0;
}


