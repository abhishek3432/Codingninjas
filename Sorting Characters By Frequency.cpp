string sortByFrequency(int n, string& s)

{

    // Write Your Code here

    int low=0;

    map<char,int> mp;

    for(int i=0;i<n;i++){

        mp[s[i]]++;

    }

    for(auto x:mp){

        while(x.second--){

            s[low++]=x.first;

        }

    }

    return s;

}