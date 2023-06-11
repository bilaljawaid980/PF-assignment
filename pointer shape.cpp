#include<iostream>
using namespace std;
int print(char *p,char *t,char *r);
	int main(){
		char a='.';
		char b='#';
		char c='*';
		print(&a,&b,&c);
	}
	int print(char *p,char *t,char *r){
		cout <<" "<< *p<<" "<<*p<<" "<<*p<<" "<<*p<<" "<<*p<<endl;
		cout <<" "<< *p<<" "<<*t<<" "<<*r<<" "<<*t<<" "<<*p<<endl;
		cout << " "<<*p<<" "<<*t<<" "<<*r<<" "<<*t<<" "<<*p<<endl;
		cout << " "<<*p<<" "<<*t<<" "<<*r<<" "<<*t<<" "<<*p<<endl;
		cout << " "<<*p<<" "<<*p<<" "<<*p<<" "<<*p<<" "<<*p<<endl;
		
	}
