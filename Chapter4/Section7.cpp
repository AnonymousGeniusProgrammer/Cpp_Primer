#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void doubleOddInVec(vector<int> &vec);
void printVec(const vector<int> &vec);
const string labelGrade(const int &grad);

int main()
{
    cout << " *** double odd elment in a vector ***" << endl;
    vector<int> vec{0, 1, 2, 3, 4, 5, 6};
    printVec(vec);
    doubleOddInVec(vec);
    printVec(vec);

    cout << " *** label grade ***" << endl;
    int grade{0};
    std::cin >> grade;
    cout << "The reuslt is: " << labelGrade(grade) << std::endl;

    cout << "*** fix expression string p1 = s + s[s.size()-1] == \'s\' ? \"\" : \"s\" ***" << endl;
    string s = "word";
    // unary + operator has higher precedence than logical operator
    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
    cout << p1 << endl;

    return 0;
}

void doubleOddInVec(vector<int> &vec)
{
    for (auto &num : vec)
        num = (num % 2 == 1) ? 2 * num : num;
}

void printVec(const vector<int> &vec)
{
    for (const auto &num : vec)
        cout << num << " ";
    cout << std::endl;
}

const string labelGrade(const int &grade)
{
    // grade < 60 => faile
    //  60 < grade < 75 => low pass
    // 75 < grade 90 => pass
    // 90 < grade => high pass
    string label = "faile";
    if (!(grade < 60))
        label = grade < 75 ? "low pass" : grade > 90 ? "high pass"
                                                     : "pass";
    return label;
}
