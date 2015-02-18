#include<iostream>
#include<string>
#include <cctype>
#include <algorithm>

using namespace std;

char tArr[26] = { '4', 'B', 'C', 'D', '3', 'F', '6', 'H', '1', 'J', 'K', 'L', 'M', 'N', '0', 'P', 'Q', 'R', '5', 'T', 'U', 'V', 'W', 'X', 'Y','2' };

int main(){
	string str;
	cin>>str;
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	for (int i = 0; i < str.size(); i++){
		if (str[i] >= 'A'&&str[i] <= 'Z'){
			int x = str[i] - 'A';
			str[i] = tArr[x];
		}
	}
	cout << str << endl;
	system("pause");
	return 0;
}