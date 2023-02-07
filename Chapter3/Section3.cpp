#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void xEncryption();
void removePunctuation();
int main()
{
    // 3.6 range for loop change all the characters in the input string to X
    // xEncryption();
    // 3.10 remove punctuations
    removePunctuation();
    return 0;
}

void xEncryption()
{
    cout << "Input a string without white space here and continue with enter: ";
    string s_in;
    cin >> s_in;
    if (s_in.empty())
    {
        cout << "Empty String can not be encrypted" << endl;
        return;
    }
    for (auto &character : s_in)
    {
        character = 'X';
    }
    cout << "Encrypted string: " << s_in << endl;
}

void removePunctuation()
{
    string s_input{""};
    if(!std::getline(cin, s_input)){
        cout << "Empty string is not allowed, terminating" <<endl;
        return;
    }
    for(const char& character  : s_input){
        if (std::ispunct(character))
            continue;
        cout << character;
    }
    cout << endl;
    cout << "Punctuation removed successfully, return" << endl;
}
