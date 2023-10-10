#include<iostream>
using namespace std;
int main() {
	cout<<"Question No.05"<<endl;
    char character; //declaring character
    cout<<"Enter character ";
	cin>>character;
	if (character=='a'||character=='e'||character=='i'|| character=='o'||character=='u') //if character is vowel
	cout<<"The given character is a vowel";
	else//if entered character does not belong to vowel
	cout<<"the given character is consonant";
	return 0;
}

