#include<iostream>
#include<string>

using namespace std;

int main(){
	string str1, str2;
	string target;
	cin >> str1 >> str2;
	cin >> target;

	int length1 = str1.size();
	int length2 = str2.size();

	int pos = 0;
	while (pos < target.size()){
		target.find(str1,pos);

	}

	//cout << str1 << str2<<endl;


	system("pause");
	return 0;
}