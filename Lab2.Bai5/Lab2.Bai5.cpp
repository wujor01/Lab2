#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
	//Kiểm tra số chuỗi nhập vào có phải số hay không?
	regex number("[[:digit:]]*");
	string st;
	cout << "Enter a number: ";
	getline(cin, st);
	if (regex_match(st, number))
		cout << "Valid!" << endl;
	else
		cout << "Invalid!" << endl;
	return 0;
}