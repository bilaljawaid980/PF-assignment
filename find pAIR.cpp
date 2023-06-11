#include<iostream>
using namespace std;
void pairs(int arr[],int size,int targetSum);
main(){
		int size;int targetSum;
	cout << "ENTER THE SIZR OF ARRAY :"<<endl;
	cin >> size;
	int arr[size];
	cout << "ENTER THE ELEMENTS OF ARRAY :"<<endl;
for(int i=0;i<size;i++){
	cin >> arr[i];
}

cout << "ENTER THE TARGET SUM"<<targetSum;
cin >> targetSum;
 pairs( arr, size, targetSum);
}
void pairs(int arr[],int size,int targetSum){
	cout << "PAIRS WITH SUM "<<targetSum<<":"<<endl;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]+arr[j]==targetSum){
				cout << arr[i] << "+"<<arr[j]<<"="<<targetSum<<endl;
			}
		}
	}
}
