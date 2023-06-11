#include<iostream>
using namespace std;
void missing(int size1 ,int size2 ,int arr1[],int arr2[]);
	int main(){
		int size1=6;
		int arr1[size1]={1,2,3,4,5.6};
		
		int size2=5;
		
		int arr2[size2]={1,2,3,4,5};
	 missing( size1 , size2 , arr1, arr2);
		
		
	}
	void missing(int size1 ,int size2 ,int arr1[],int arr2[]){
		for(int i=0;i<size1;i++){
			bool found=false;
			for(int j=0;j<size2;j++){
				if(arr1[i]==arr2[j]){
					found=true;
					break;
				}
			}
			if(!found){
				cout << "THE MISSIN NUMBER IS :"<<arr1[i]<<endl;
			}
			
		}
		
	
	}
