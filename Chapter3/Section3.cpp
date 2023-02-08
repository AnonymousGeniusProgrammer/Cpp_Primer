#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void xEncryption();
void removePunctuation();
void readInts();
void readStrings();
void symmetrySum();

int main()
{
    // 3.6 range for loop change all the characters in the input string to X
    // xEncryption();
    // 3.10 remove punctuations
    // removePunctuation();
    // 3.14 read a sequence of ints
    // readInts();
    // 3.20 read integers and print the sum of the first and last elements, followed by the sum of the second and second-to-last, and so on
    symmetrySum();
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
    if (!std::getline(cin, s_input))
    {
        cout << "Empty string is not allowed, terminating" << endl;
        return;
    }
    for (const char &character : s_input)
    {
        if (std::ispunct(character))
            continue;
        cout << character;
    }
    cout << endl;
    cout << "Punctuation removed successfully, return" << endl;
}

void readInts()
{
    vector<int> v_int;
    int temp{0};
    while (cin >> temp)
    {
        v_int.push_back(temp);
    }
    for (auto &element : v_int)
        cout << element << endl;
}

void readStrings()
{
    vector<string> v_str;
    string temp{""};
    while (cin >> temp)
    {
        v_str.push_back(temp);
    }
    for (auto &element : v_str)
        cout << element << endl;
}

void symmetrySum()
{
    vector<int> v_int;
    int temp{0};
    while (cin >> temp)
    {
        v_int.push_back(temp);
    }
    // 0 1 2
    // 1 2 3 => 3/2 = 1
    // 1 2 3 4 => 4/2 = 2
    auto ind_last = v_int.size()-1;
    auto ind_end = 0 == (v_int.size() % 2) ? v_int.size()/2 : v_int.size()/2+1;
    for(decltype(v_int.size()) i= 0; i < ind_end;i++){
        int first = v_int[i];
        int second = i == (ind_last - i) ? 0 : v_int[ind_last-i];
        cout << first + second <<endl;
    }
    
}
