#include <bits/stdc++.h>

using namespace std;

void solve(int i,int l,int r,string ds,vector<string>&ans,int n)

{

    if(i==2*n)

    {

        ans.push_back(ds);

        return;

    }

 

    if(l>0)

    {

        ds+='(';

        solve(i+1,l-1,r,ds,ans,n);

        ds.pop_back();

    }

 

    if(r>l)

    {

        ds+=')';

        solve(i+1,l,r-1,ds,ans,n);

        ds.pop_back();

    }

}

 

vector<string> validParenthesis(int n){

    // Write your code here.

    int l=n; 

    int r=n; 

    string ds="";

    vector<string>ans;

    solve(0,l,r,ds,ans,n);

    return ans; 

} 