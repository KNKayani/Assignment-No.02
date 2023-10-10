#include<iostream>
using namespace std;
int main() {
	cout<<"Question NO 03"<<endl;
	int year;  //declaring year
	cout<<"enter year ";
	cin>>year;
	if (year%4==0) //if given year is divisible by 4
	cout<<"the given year is a leap year"<<endl;
	else //if given year is not divisible by 4
	cout<<"the given year is not a leap year"<<endl;
	return 0;
} 

