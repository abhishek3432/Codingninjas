public class Solution {
    public static int subarrayWithMaxProduct(int []arr){
        // Write your code here.
        int prefix=1;
        int suffix=1;
        int n=arr.length;
        int maxSubArray=Integer.MIN_VALUE;
        for(int i=0; i<n; i++)
        {
            if(prefix==0)   prefix=1;
            if(suffix==0)   suffix=1;
            prefix*=arr[i];
            suffix*=arr[n-1-i];
            maxSubArray=Math.max(maxSubArray,Math.max(prefix,suffix));
        }
        
        return maxSubArray;
    }
}
