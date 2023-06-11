#include<iostream>
#include<stdio.h>
using namespace std;
main(){
	int farenhite;
	float celsius;
	printf("FARENHITE\tCELSIUS\n");
	for(farenhite=0;farenhite<=212;farenhite++){
		celsius=5.0/9.0 * (farenhite-32);
		printf("%10d\t%10.3f\n",farenhite,celsius);
	}}
