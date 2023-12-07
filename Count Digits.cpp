int countDigits(int n){
	// Write your code here.	
	int count=0;
	int temp=n;
	int digit;
	while(temp)
	{
		digit=temp%10;
		temp=temp/10;//it should be here because below condition
		if(digit==0)
			continue;
		if(n%digit==0)
			count++;
		
	}
	return count;
}