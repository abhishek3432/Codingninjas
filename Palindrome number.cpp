bool palindrome(int n)
{
    // Write your code here
    
    int temp=n;
    int reverse=0;
    //reverses no.
    while(temp)
    {
        int digit=temp%10;
        temp/=10;
        reverse=(reverse*10)+digit;
    }

    //checks palindrome
    if(reverse==n && n>=0)
        return true;
    else 
        return false;
}