#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	sort(arr.begin(), arr.end());
	int ksmall= arr[k-1];
	int klarge= arr[n-k];
	vector<int> ans;
	ans.push_back(ksmall);
	ans.push_back(klarge);
	return ans;


}