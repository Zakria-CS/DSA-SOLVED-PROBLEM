#include<iostream>
using namespace std;
void print(int n){
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i+1;j++){
			cout<<j;
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