#include<iostream>
using namespace std;

void print(int a,int b){
	cout<<"This is Function."<<endl;
	cout<<"Value of a is "<<a<<endl;
	cout<<"Value of b is "<<b<<endl;
	
}
int main(){
	int a=10,b=20;
	
	cout<<"Main Function."<<endl;
	cout<<"a . "<<a<<endl;
	cout<<"b . "<<b<<endl;
	
	print(a,b);
	
	cout<<"Welcome to main again."<<endl;
	cout<<"Now\na = "<<a<<"\nb = "<<b<<endl;
	
	return 0;
}