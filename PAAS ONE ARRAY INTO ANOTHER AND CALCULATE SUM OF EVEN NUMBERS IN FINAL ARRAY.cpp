#include<iostream>
using namespace std;
main(){
	int firstArray[3]={20,23,36} ,finalArray[3],sum=0;
		
		for(int i=0;i<3;i++){
		cout <<  "FIRST ARRAY" << firstArray[i]<<endl ;
		
	}
	cout <<endl;
			
	
	
	for(int i=0;i<3;i++){
		
		finalArray[i]=firstArray[i];
		cout <<  "FINAL ARRAY" << finalArray[i]<<endl ;
	}
	for(int i=0;i<3;i++){
		if(finalArray[i] % 2 ==0){
			
			sum=sum+finalArray[i];
		}
	}
	cout << "SUM OF EVEN NUMERS IN FINAL AARAY ARE :"<< sum << endl;
}
