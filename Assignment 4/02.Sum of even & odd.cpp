#include <bits/stdc++.h> 
vector<int> sumOfEvenOdd(long long num) 
{
	// Write your code here.
	int even=0;
	int odd=0;
	vector<int>ans;
	int r;
	while(num!=0){
		r=num%10;
		if(r%2==0)
		even+=r;
		else
		odd+=r;
		num=num/10;
	}
	ans.push_back(even);
	ans.push_back(odd);
    return(ans);
}
