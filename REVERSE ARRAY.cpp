#include<iostream>
using namespace std;
int main(){
void reverseArray(int array[],int size);
int array[]={1,2,3,4,5};
int size=sizeof(array)/sizeof(array[0]);
	cout << "ORIGINAL ARRAY IS :";
for(int i=0;i<size;i++){
	cout <<array[i]<<" ";
	
}
reverseArray(array,size);
	cout <<endl<< "REVERSED ARRAY IS :";
for(int i=0;i<size;i++){
	cout <<array[i]<<" ";
	
}
}
void reverseArray(int array[],int size){
	int start=0;
	int end=size-1;
	while(start<end){
		int temp=array[start];
		array[start]=array[end];
		array[end]=temp;
		start++;
		end--;
	}
}
