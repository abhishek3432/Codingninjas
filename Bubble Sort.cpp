void bubbleSort(vector<int> &arr, int n)
{
    //write your code here
    for(int i=0; i<=n-2; i++)
    {
        for(int j=0; j<=n-2-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }

        }
    }
}