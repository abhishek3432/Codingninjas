#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int digit, even=0, odd=0;
	while(n!=0)
	{
		digit=(n%10);//get digit
		if(digit%2==0)	
			even+=digit;
		else
			odd+=digit;
		n/=10;//update number
	}
	cout<<even<<" "<<odd<<endl;
}
