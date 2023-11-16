#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your countBits function here
    int countBits(int n)
    {
        int count=0;
        for(int i=1; i<32; i++)
        {
            if(n&1)
            {
                count++;
            }
            n=n>>1;
        }
        return count;
    }

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}