#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,s,area;
    cout<<"enter the three sides of the triangle"<<endl;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area="<<area<<endl;
    return 0;
}
