#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char string1[20];
	int i,length,flag=0;
	cout <<"ENTER A STRING"<<endl;
	cin>>string1;
	length=strlen(string1);
	for(int i=1;i<=length;i++){
		if(string1[i]!=string1[length-i-1]){
			flag=1;
			break;
		}
	}
		if(flag){
			cout << "no";
		}
		else{
			cout << "yes";
		
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	NN
