#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	int i=0;
	
	do{
		cout<<i<<" ";
		i++;
	}
	while(i>=n);
	
	return 0;
}