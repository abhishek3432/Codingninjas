vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    sort(a.begin(), a.end());
    vector<int> ans = {a[n-2], a[1]};
    return ans;
}
