#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number=0;
    while(n>0){
        int r=n%10;
        number=number*10+r;
        n=n/10;
    }
     cout<<"number="<<number;
     return 0;  
}
