long reverseBits(long n) {
    // Write your code here.
     long int a,b;

    long int ans=0;

    a=31;

    while(n>0)

    {

        b=n%2;

        ans+=pow(2,a)*b;

        a--;

        n/=2;
    }
    return ans;

    

}