#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int size=arr.size();
	int start=m+1, end=size-1;
	 
	while(start<end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
