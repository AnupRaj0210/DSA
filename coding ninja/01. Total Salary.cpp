#include <bits/stdc++.h> 
int totalSalary(int basic, char grade) 
{
    // Write your code here.
    float hra,da,pf,total;
    int ans;
    int allowance;
    hra=0.2*basic;
    da=0.5*basic;

    if(grade=='A'){
        allowance = 1700;
    }
    else if(grade=='B'){
        allowance = 1500;
    
        }
    else if(grade>='C'){
        allowance = 1300 ;
    }
    pf=0.11*basic;

    total=basic+hra+da+allowance-pf;
    ans = round(total);
    return ans;
}
