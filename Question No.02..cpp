#include<iostream>
using namespace std;
int main() {
	cout<<"Question NO 02"<<endl;
	//declaring a and res as two variables
	int a,res;
	cout<<"enter the value of a ";
	cin>>a;
	res=a%5;
	if (res!=0) 	//show the reminder of number (a) when divided by 5
	cout<< "a is not divisible by 5"<<endl;
	else  if (res==0 && a%2!=0)  	//show the reminder of number (a) when divided by 5 and 2
	cout<<"a is not even and divisible by 5"<<endl; 
	else //when number (a) is not devisible by 5 and 2
	cout<<"a is even and divisible by 5"<<endl; 
	return 0;
	}
	
