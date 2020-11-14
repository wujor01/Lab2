#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
	//Kiểm tra xem chuỗi nhập vào có phải chỉ gồm các chữ cái in thường và chữ số, và độ dài từ 6 đến 20 ký tự hay không?
	/* Description:
	1. The \w matches any character in any case any number of times.
	2. Then the \.|_ matches if a dot or underscore is present 0 or 1 times.
	3. Then \w again match n characters.
	4. Then @ matches the @ in the email.
	5. Then we again check for n characters and a ‘.’ and a word after it, which must be present at least one or more times.
	*/
	regex alpha("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	string st;
	cout << "Enter a email: ";
	getline(cin, st);
	if (regex_match(st, alpha))
		cout << "Valid!" << endl;
	else
		cout << "Invalid!" << endl;
	return 0;
}