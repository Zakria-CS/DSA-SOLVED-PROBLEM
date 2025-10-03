#include<iostream>
using namespace std;
void print(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int k=1;k<=2*n-(2*i+1);k++){
			cout<<"*";
		}
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	print(n);
	
	return 0;
}