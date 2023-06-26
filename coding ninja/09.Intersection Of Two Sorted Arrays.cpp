#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int>ans;
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	int i=0,j=0;
	while(i<n&&j<m){
		if(arr1[i]<arr2[j]){
			i++;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
		else{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}

	}
	return ans;
}
