#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Give value of n ";
	cin>>n;
	
	cout<<"I "<<"  J "<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			
			cout<<"\n";
			
			cout<<i<<" * "<<j<<" = ";
			cout<<i*j;
		}
		cout<<endl;
	}
	
	return 0;
}