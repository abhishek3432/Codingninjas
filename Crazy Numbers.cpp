#include <bits/stdc++.h> 

vector < vector < int > > numberPattern(int n) {  

  // Write your code here

  vector<vector<int>> ans;

  int p=1;

 

  for(int i=0 ; i<n ; i++){

 

    vector<int> row(n);

 

    for(int j=0 ; j<n-i-1 ; j++){

      row[j]=-1;

    }

 

    for(int k=n-i-1 ; k<n ; k++){

      row[k]=p;

      p++;

      if (p == 10) {

        p = 1;

      }

    }

 

    ans.push_back(row);

  }

 

  return ans;

 

}
