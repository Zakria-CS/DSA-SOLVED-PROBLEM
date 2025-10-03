/*This code is for printing like such 
type of structure.
*****
*****
*****
*****
*/

#include<iostream>
using namespace std;
void pattern1(int n){
	for(int i=0;i<n;i++){
		//first and outer loop is for row.

		for(int j=0;j<n;j++){
			/*second and inner loop is used for
			column and connect column to the
			row.for example
			when i=0 the j run from 0 to n
			when i=1 the j run from 0 to n
			lets we take n=5
			then
			i=0 ; j=0,1,2,3,4
			i=1 ; j=0,1,2,3,4
			i=2 ; j=0,1,2,3,4 and so on till n.*/
			cout<<"*";
		}
		
		cout<<endl;//used for print new line.
	}
}
int main(){
	int n;
	cout<<"Enter a value : ";
	cin>>n;
	pattern1(n);
	
	return 0;
}