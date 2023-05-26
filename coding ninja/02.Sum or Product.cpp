#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	// Write your code here.

	if(q==1){
		long long int sum=0;
		for(int i=0;i<=n;i++){
			sum+=i;
		}
		return sum;
	}
	else if(q==2){
		long long int product=1;
		const unsigned int p=1000000007;
		for(int i=1;i<=n;i++){
			product=(product*i)%p;
		}
		return product;
        }
        
}
