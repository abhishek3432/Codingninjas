#include <bits/stdc++.h> 

void ninjaPattern(int n)

{

    // Write your code here

    for(int i=0; i<2*n-1; i++){

        for(int j=0; j<2*n-1; j++){

            if(i == n-1 && j == n-1) {

                cout<<n;

            } else if (j == i || j == 2*n-2-i) {

                if(i > (2*n-1)/2) cout<<2*n-i-1;

                else cout << i+1; 

            }

            else cout<<" ";

        }

        cout<<endl;

    }

}
