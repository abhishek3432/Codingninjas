#include <bits/stdc++.h> 
long long int reverseNumber(long long int n)
{
	//type your code here
	long long int  rev=0;
	while(n!=0)
	{
		int di=n%10;

		rev=(rev*10)+di;
		n/=10;


	}
	return rev;
}
