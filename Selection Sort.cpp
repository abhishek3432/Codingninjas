void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n= arr.size();
    for(int i=0; i<=n-2; i++)//i is minimum no. to be placed
    {
        int minIndex= i;
        for(int j=i; j<=n-1; j++) // j is minimum value
        {
            if(arr[j]<arr[minIndex])//find minmum no.
                minIndex=j;
        }
            
            // Swap the elements using a temporary variable
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
    }

    
    
} 