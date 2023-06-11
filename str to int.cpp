#include<iostream>
#include<string>
using namespace std;
	int main(){
		string numericString;
		cout << "ENTER A NUMERI STRING"<<endl;
		cin >> numericString;
		int conStr=stoi(numericString);
		cout << "CONVERTED STRING IS :"<<conStr<<endl;
	}
