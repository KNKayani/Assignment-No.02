#include<iostream>
using namespace std;
int main(){
	cout<<"Question No.04"<<endl;
	float GPA;  //Declaring GPA   
	cout<<"Enter GPA of student ";
	cin>>GPA;
	float attendance; //declaring attendance in percentage   
	cout<<"enter attendace of student in percentage ";
	cin>>attendance;
	if (GPA>=3.5&&attendance>=80)
	cout<<"the student is eligible for scholarship"<<endl;
	else //If student has less GPA than 3.5 and 80% attendance then  
	cout<<"the student is not eligible for scholarship"<<endl;
	return 0;
	}
	
