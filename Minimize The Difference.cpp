#include <bits/stdc++.h> 

int minimizeIt(vector<int> A, int K)

{

    

        int n= A.size();

        

        sort(A.begin(),A.end());

 

        int ans= A[n-1]-A[0];

 

        for(int i=0;i<n;i++){

            

            if(A[i]<K)  continue;

 

            int mini= min(A[0]+K, A[i]-K);

            int maxi= max(A[n-1]-K,A[i-1]+K);

            

            if(maxi<mini) continue;

 

            ans=min(ans,maxi-mini); 

        }

        return ans;

}
//this is challenging one which i copied at last