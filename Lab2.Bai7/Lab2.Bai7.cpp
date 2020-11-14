#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
	//Kiểm tra số chuỗi nhập vào có phải số hay không?
	regex number("((\\-)|)[[:digit:]]*");
	//Kiểm tra số chuỗi nhập vào có phải bắt đầu bằng dấu trừ(tức số âm) hay không?
	regex number1("\\-[[:digit:]]*");
	string st;
	cout << "Enter a number: ";
	getline(cin, st);
	if (regex_match(st, number))
		if (regex_match(st, number1))
		{
			cout << "Negative Number!" << endl;
		}
		else
		{
			cout << "Positive Number!" << endl;
		}
	else
		cout << "Invalid!" << endl;
	return 0;
}