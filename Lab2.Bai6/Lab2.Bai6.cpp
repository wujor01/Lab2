#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
	//Kiểm tra số chuỗi nhập vào có phải số hay không?
	regex number("[[:digit:]]*");
	//Kiểm tra số chuỗi nhập vào có phải bắt đầu bằng số 0 hay không?
	regex number1("0[[:digit:]]*");
	string st;
	cout << "Enter a number: ";
	getline(cin, st);
	if (regex_match(st, number))
		if (regex_match(st, number1))
		{
			cout << "InValid!" << endl;
		}
		else
		{
			cout << "Valid!" << endl;
		}
	else
		cout << "Invalid!" << endl;
	return 0;
}