#include<iostream>
using namespace std;
int print(char *p,char *z);
	int main(){
		char a='.';
		char b='#';
		print(&a,&b);
	}
	int print(char *p,char *z){
		cout << *p<<" "<<*z<<" "<<*p<<" "<<*z<<" "<<*p<<endl;
		cout << *z<<" "<<*p<<" "<<*z<<" "<<*p<<" "<<*z<<endl;
		cout <<*p<<" "<<*z<<" "<<*p<<" "<<*z<<" "<<*p<<endl;
		cout <<*z<<" "<<*p<<" "<<*z<<" "<<*p<<" "<<*z<<endl;
		cout <<*p<<" "<<*z<<" "<<*p<<" "<<*z<<" "<<*p<<endl;
		
	}
