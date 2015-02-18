#include<iostream>
#include<string>

using namespace std;

int main(){
	string str1, str2;
	string target;
	cin >> str1 >> str2;
	cin.ignore();
	getline(cin,target);

	int length1 = str1.size();
	int length2 = str2.size();

	int pos = 0;
	while (target.find(str1, pos)!=string::npos){
		int end = 0;
		int first = target.find(str1,pos);
		if (first != string::npos){
			pos = first + length1;
			int second = target.find(str2, pos);
			if (second != string::npos){
				end = second - 1;
			}
			if (end - pos > 0&&end!=0){
				string temp = " ";
				temp =	target.substr(pos, end - pos+1);
				cout << temp << endl;
				pos = second + length2;
			}
			else
			{
				cout << "<blank>" << endl;
				pos = second + length2;
			}
		}

	}
	system("pause");
	return 0;
}