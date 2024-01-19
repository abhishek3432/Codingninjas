vector<int> pascalfnc(int row) {

    long long res = 1;

    vector<int> answer;

    answer.push_back(1);

    // calculating nCr:

    for (int col = 1; col < row; col++) {

    res = res * (row - col);

    res = res /col;

    answer.push_back(res);

}

return answer;

}

vector<vector<int>> pascalTriangle(int N) {

    // Write your code here.

    vector<vector<int>> ans;

    for (int row = 1; row <= N; row++) {

    ans.push_back(pascalfnc(row));

    }

    return ans;

}

