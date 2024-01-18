int N = S.size();

stack<int> St;

vector<int>ans(N, 0);

for(int i=0; i<N; ++i){

    St.push(i + 1);

    while(!St.empty() && ( i +1 - St.top())< S[i]){

        ans[St.top()-1] = 1;

        St.pop();

    }

}

return ans;