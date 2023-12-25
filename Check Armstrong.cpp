bool checkArmstrong(int n){
	//Write your code here
	int temp=n;
	int arm=0;
	int count=0;
	while(temp)
	{
		temp/=10;
		count++;
	}
	temp=n;
	while(temp)
	{
		int digit=temp%10;
		arm+=pow(digit, count);
		temp/=10;
	}

	if(arm==n)	return true;
	else return false;
}
