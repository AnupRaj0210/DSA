#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,i,n;
    cin>>n;
    int count=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"primenumber";
    }
    else{
        cout<<"notprimenumber";
    }
    return 0;
}
