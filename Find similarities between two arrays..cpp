#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	// Write Your Code here.
	
	// int n=arr1.size();
	// int m=arr2.size();
	int com=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(arr2[j]==arr1[i])
				com++;
		}
	}

	int uni=n+m-(com);
	pair<int, int> ans={com,uni};
	return ans;


}