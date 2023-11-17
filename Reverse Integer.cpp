#include <bits/stdc++.h> 
int reverseInteger(int n){
    // Write your code here.
    int digit, sum=0;
        while(n)
        {
            digit=n%10;
            if((sum>INT_MAX/10)||(sum<INT_MIN/10))
                return -1;
            sum=(sum*10)+digit;
            n=n/10;
        }

        return sum;
            
}