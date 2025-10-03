#include<iostream>
using namespace std;
int main(){
	
	int age;
	cout<<"Enter Your Age : ";
	cin>>age;
	
	if(age>=18 && age<=20){
		cout<<"You Can Ride the Bike.";
	}
	else if(age>=21 && age<=50){
		cout<<"You Can Ride the Bike.";
		cout<<"\nYou Can Drive the car.";
	}
	else if(age>50){
		cout<<"You are Over Age so Take care.";
	}
	else{
		cout<<"You are under age.";
	}
	
	return 0;
}