/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end) {
	// Write your code here
	int pivot=input[start];
	int i=start;
	int j=end;
	while(i<j)
	{
		while(input[i]<=pivot && i<=end-1)
			i++;
		while(input[j]>pivot && j>=start+1)
			j--;
		if(i<j)	swap(input[i], input[j]);
	}
	swap(input[start], input[j]);

	return j;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start<end)
	{
		int partitionIndex= partitionArray(input, start, end);
		quickSort(input, start, partitionIndex-1);
		quickSort(input, partitionIndex+1, end);
	}
}