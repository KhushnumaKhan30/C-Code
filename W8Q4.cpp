#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence, word;
    int count = 0;
    size_t pos = 0;

    cout << "Enter a line of text: ";
    getline(cin, sentence);

    cout << "Enter the word to search: ";
    cin >> word;

   
    while ((pos = sentence.find(word, pos)) != string::npos)
    {
        count++;
        pos += word.length();
    }

    cout << "The word occurs " << count << " times." << endl;

    return 0;
}
