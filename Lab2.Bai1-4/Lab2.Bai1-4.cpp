#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
	//regex phone10("((\\+84)|0)9[[:digit:]]{8}");

	//Bai1: Viết chương trình kiểm tra xem chuỗi nhập vào có phải là số điện thoại di động 9 số dạng 09xx.xxx.xxx hay không?
	//regex phone10("(09[[:digit:]]{2}).([[:digit:]]{4}).([[:digit:]]{4})");

	//Bai2: Viết chương trình kiểm tra xem chuỗi nhập vào có phải là số điện thoại di động 11 số dạng 01xxxxxxxxx hay không?
	//regex phone10("(01[[:digit:]]{9}");

	//Bai3: Viết chương trình kiểm tra xem chuỗi nhập vào có phải là số điện thoại di động 11 số dạng + 841.xxx.xxx.xxx hay không(phân cụm bằng dấu chấm)?
	//regex phone10("(\\+841.[[:digit:]]{3}).([[:digit:]]{3}).([[:digit:]]{3})");
	
	//Bai4: Viết chương trình kiểm tra xem chuỗi nhập vào có phải là số điện thoại di động 11 số dạng 01xxxxxxxxx hoặc + 841xxxxxxxxx hay không?
	regex phone10("((\\+84)|0)1[[:digit:]]{9}");
	
	string st;
	cout << "Enter a mobile number: ";
	getline(cin, st);
	if (regex_match(st, phone10))
		cout << "Valid!" << endl;
	else
		cout << "Invalid!" << endl;
	return 0;
}
