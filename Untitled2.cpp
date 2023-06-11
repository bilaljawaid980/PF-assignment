#include<iostream>
using namespace std;
int palindrome(int num,int n);
	int main(){
			int num,n;
		cout << "ENTER A 3 DIGIT NUMBER FOR PALINDROME CHECKING"<<endl;
		cin >>num;
		num=n;
		palindrome(num,n);
	}
	int palindrome(int num,int n){
	int digit,rev=0;
	
		do{
			digit=num%10;
			rev=(rev*10)+digit;
            num=num/10;
		}while(num!=0);
		if(n==rev){
			cout << "PALINDROME";
		}
		else{
			cout << "NON PALINDROME";
		}
		
		
		
	}
	
		
