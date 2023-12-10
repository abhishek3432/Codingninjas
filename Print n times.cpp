vector<string> printNTimes(int n) {
	// Write your code here.
	if(n==0)
		return {};
	vector<string> ans= printNTimes(n-1);
	ans.push_back("Coding Ninjas");

	return ans;
}