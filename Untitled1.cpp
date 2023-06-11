#include<iostream>
using namespace std;
	int main(){
		int num,n,digit,rev=0;
		cout << "ENTER A 3 DIGIT NUMBER FOR PALINDROME CHECKING"<<endl;
		cin >>num;
		num=n;
		while(num!=0){
			digit=num%10;
			rev+=(digit * digit *digit);
			num=num/10;
		}
		
			
		if(n==rev){
			cout << "ARMSTRONG"<<endl;
		}
		else{
			cout << "NOT";
		}
	}
