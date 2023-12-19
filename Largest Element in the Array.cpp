#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    //using for loop
    int max=0;
    for(int i=0; i<=n-2; i++)
    {
        if(arr[i+1]>=arr[max])
            max=i+1;
       
    }
    
    return arr[max];
    
}