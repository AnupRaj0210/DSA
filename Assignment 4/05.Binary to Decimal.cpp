#include <bits/stdc++.h>

int convert(int N,string &str)
{
    // Write your code here.
    int ans = 0;
    int p=0;
    int i;
    for(i=N-1;i>=0;i--){
        if(str[i]=='1'){
            ans+=pow(2,p);
        }
        p++;
    }
    
    return ans;
}
