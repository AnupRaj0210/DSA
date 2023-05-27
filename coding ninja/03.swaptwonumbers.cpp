#include <bits/stdc++.h> 
#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    // Write your code here.
    int a;
    a=swapValues.first;
    swapValues.first=swapValues.second;
    swapValues.second=a;
    return swapValues;
}
