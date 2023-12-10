vector<int> printNos(int x) {
    // Write Your Code Here
    if(x==0)
        return {};
    vector<int> ans=printNos(x-1);;
    
    ans.push_back(x);
    return ans;
}