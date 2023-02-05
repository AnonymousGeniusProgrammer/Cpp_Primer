#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main(int argc, char* argv[]) {
	if (argc == 1)
	{
		string info("");
		info = "Use the following arguments to start different programs:\n"
			" - ReadLine\n"
			" - ReadWord\n"
			" - ReportLarger\n"
			" - ReportLonger\n"
			" - ConcatenatingString\n";
		cout << info;
		return 0;
	}
	const string mode = argv[1];
	string input("");

	/* 3.2 read the standard input a line at a time*/
	if ("ReadLine" == mode)
	{
		while (getline(cin, input))
		{
			cout << input << endl;
		}
		cout << "End of program, goodbye" << endl;
		return 0;
	}
	else if ("ReadWord" == mode) {
		while (cin >> input) {
			cout << input << endl;
		}
		cout << "End of program, goodbye" << endl;
		return 0;
	}
	/* 3.4 program read two strings and report whether the strings are equal
  if not, report which of the two is larger
  change to report whether the strings have the same length, if not, report which is longer*/
	else if ("ReportLarger" == mode)
	{
		const int target = 2;
		string inputs[2];
		string temp;
		int count = 0;

		while (count < 2 && cin >> temp ) {
			inputs[count] = temp;
			count++;
		}
		string larger = inputs[0] > inputs[1] ? inputs[0] : inputs[1];
		cout << "The larger string is: " << larger << endl << "End of program, goodbye" << endl;
		return 0;
	}
	else if ("ReportLonger" == mode)
	{
		string s1(""), s2("");
		cin >> s1 >> s2;
		string longer = s1.size() > s2.size() ? s1 : s2;
		cout << "The longer string is: " << longer << endl << "End of program, goodbye" << endl;
	}
	/* 3.5 program to read strings from standard input, concatenating what is read into one large string, print the concatenated string.
*/
	else if ("ConcatenatingString") {
		string concatenated("");
		string input;
		while ( cin >> input)
		{
			concatenated += input;
		}
		cout << "The concatenated string is: " << concatenated << endl
			<< "End of program, goodbye" << endl;
	}
	else {
		cout << "End of program, goodbye" << endl;
		return 0;
	}






}