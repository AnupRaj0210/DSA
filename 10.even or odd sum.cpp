#include<iostream>
using namespace std;

int main() {
	// Write your code her.
	int N;
	cin>>N;
	int evensum=0;
	int oddsum=0;
	while(N>0){
		int r=N%10;
		if(r%2==0){
			evensum=evensum+r;
		}
		else{
			oddsum=oddsum+r;
		}
		N=N/10;
	}
	cout<<evensum<<" "<<oddsum<<" ";
	
}
