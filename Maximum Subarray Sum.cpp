long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long max=INT_MIN;
    long long sum=0;
    for(int i=0; i<arr.size(); i++)
    {
        sum+=arr[i];
        if(sum>max)
            max=sum;
        if(sum<0)
            sum=0;
    }
    if(max<0)
        return 0;
    else return max;
}