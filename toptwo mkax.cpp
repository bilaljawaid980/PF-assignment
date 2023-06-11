#include<iostream>
using namespace std;
void topTwoMax(int size,int arr[]);
int main(){
	int size;
	cout << "ENTER THE SIZR OF ARRAY :"<<endl;
	cin >> size;
	int arr[size];
	cout << "ENTER THE ELEMENTS OF ARRAY :"<<endl;
for(int i=0;i<size;i++){
	cin >> arr[i];

}
	topTwoMax( size, arr);
}
void topTwoMax(int size,int arr[]){
	int max=arr[0];
	int max2=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]>max){
			max2=max;
			max=arr[i];
		}
		else if(arr[i]>max2 && arr[i]!=max){
			
			max2=arr[i];
		}
	}
	cout << max << max2;
}
