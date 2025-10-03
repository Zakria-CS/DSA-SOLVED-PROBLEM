#include<iostream>
using namespace std;
int main(){
	
	int age;
	cout<<"Enter Your Age : ";
	cin>>age;
	
	if(age>=18) {
		cout<<"Your are eligible for vote.";	
	}
	else 
	{
		cout<<"Your are not eligible for vote.";	
	}
	
	return 0;
}