#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
	//Kiểm tra xem chuỗi nhập vào có phải chỉ gồm các chữ cái in thường và chữ số, và độ dài từ 6 đến 20 ký tự hay không?
	regex alpha("[a-zA-Z0-9]{6,20}");
	string st;
	cout << "Enter a string: ";
	getline(cin, st);
	if (regex_match(st, alpha))
		cout << "Valid!" << endl;
	else
		cout << "Invalid!" << endl;
	return 0;
}