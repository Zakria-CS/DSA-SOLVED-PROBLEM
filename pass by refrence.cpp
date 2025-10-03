#include<iostream>
using namespace std;

void print(int &a,int &b){
	cout<<"In Print Function."<<endl;
	a++;
	b++;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	a++;
	b++;
}

int main(){
	
	int a=20,b=10;
	
	cout<<"In main Function."<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	cout<<"Calling Function"<<endl;
	print(a,b);
	
	cout<<"Again in main function."<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	return 0;
}