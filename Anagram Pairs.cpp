#include<bits/stdc++.h>>  

bool isAnagram(string str1, string str2)

{

  

    map<char, int> mp;

    for(auto ch:str1){

        mp[ch]++;

    }

    for(auto ch:str2){

        if(mp.count(ch)<1) return false;

        mp[ch]--;

    }

    for(auto ch:mp){

        if(ch.second>0) return false;

    }

    return true;

}
