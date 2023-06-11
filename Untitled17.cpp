#include<iostream>
using namespace std;
	int main(){
		int a=6,b=7,c=8;
		int temp=0;
		temp=a;
		a=c;
		c=b;
		b=temp;
		cout << a<< b<< c;
	}
