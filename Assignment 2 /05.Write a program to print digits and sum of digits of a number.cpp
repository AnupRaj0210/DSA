#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int sum =0;
    while(n!=0){
        int digit = n% 10;
        cout<<digit<<" ";
        sum += digit;
        n = n/10;
    }
    cout<<endl;
    cout<<sum;

    return 0;
}
