#include <bits/stdc++.h> 
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
	//type your code here
	vector<vector<int>> v;
	for(int i=s;i<=e;i+=w) {
		int c = ((i-32)*5)/9;
		v.push_back({i,c});
	}
	return v;
}
