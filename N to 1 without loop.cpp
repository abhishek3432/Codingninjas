void func(int x,vector<int>&sol){

    if(x==0) return;

    sol.push_back(x);

    func(x-1,sol);

}

vector<int> printNos(int x) {

    // Write Your Code Here

    vector<int>sol;

    func(x,sol);

    return sol;

}