#include<iostream>
using namespace std; 
struct bit{
	int num;
	int rev;
	int o;
	int rem;
};
int main(){
	int j=1,i;
	struct bit my;
	my.num,my.o=0,my.rem,my.rev;
	cin        >> my.num;
	cout << "BEFORE REVERSE"<<endl;
	for(i=my.num;i>0;i/=2){
		my.rem=i%2;
		my.o=my.o+j*my.rem;
		j=j*10;
	}
	cout << my.o;
	cout << "AFTER INVERSE"<<endl;
	for(i=my.num;i>0;i=i/2){
		my.rem=i%2;
		cout << my.rem;
	}
	
}
