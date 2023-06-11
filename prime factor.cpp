#include<iostream>
using namespace std;
int primeFactor(int n);
	int main(){
		int  n;
		cout << "ENTER A NUMER "<<endl;
		cin >> n;
		primeFactor(n);
	}
	int primeFactor(int n){
		for(int i=2;i<=n;i++){
			while(n%i==0){
				cout<<i<<" ";
			n/=i;
			}
			
		}
	}
