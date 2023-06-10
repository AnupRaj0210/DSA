#include <bits/stdc++.h> 
long long int reverseNumber(long long int n)
{
	//type your code here
	long long int sum=0;
	int r;
        while (n != 0) {
          r = n % 10;
          sum = sum * 10 + r;
          n = n / 10;
        }
		return sum;
}
