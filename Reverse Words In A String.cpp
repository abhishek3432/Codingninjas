string reverseString(string &str){
	// Write your code here.
	    string ans;


    int i = str.size() - 1;
    while (i >= 0) {


        while (str[i] == ' ' && i >= 0) {
            i--;
        }


        int j = i;
        while (str[i] != ' ' && i >= 0) {
            i--;
        }


        if (ans.empty()) {
            for (int k = i + 1; k < j + 1; k++) {
                ans.push_back(str[k]);
            }
        } 
        else {
            ans.push_back(' ');
            for (int k = i + 1; k < j + 1; k++) {
                ans.push_back(str[k]);
            }
        }
    }


    return ans;
	
}