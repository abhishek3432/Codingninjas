#include <bits/stdc++.h> 
int findProductSumDifference(int n){
	// Write your code here
	int dpr=1,dsum=0;
        int di=0;
        while(n!=0)
        {
            di=n%10;
            dpr*=di;
            dsum+=di;
            n/=10;
        }

        return dpr-dsum;
}