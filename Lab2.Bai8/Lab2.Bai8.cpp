#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
	//Kiểm tra số chuỗi nhập vào có phải 2 chữ cái (hoa hoặc thường) và có khoảng trắng trước,sau,hoặc giữa 2 chữ cái đó hay không?
	regex alpha("([ \t]|)[a-zA-Z]{1}([ \t]|)[a-zA-Z]{1}([ \t]|)");
	string st;
	cout << "Enter a string: ";
	getline(cin, st);
	if (regex_match(st, alpha))
		cout << "Valid!" << endl;
	else
		cout << "Invalid!" << endl;
	return 0;
}