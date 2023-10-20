#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
   int neg=0;
   for (int i=0; i<nums.size(); i++)
   {
    //    for(int j=0; j<nums.size(); j++)
    //     {
    //         cout<<nums[j]<< " ";
    //     }     
       if(nums[i]<0)
       {
           swap(nums[neg],nums[i]);
            neg++;
        
       }
   }
   return nums;
}
