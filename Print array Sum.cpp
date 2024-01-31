
#include<iostream>
using namespace std;

long arraySum (int* arr, int n) {

    long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += arr[i];
    }

    return ans;
}

int main(){

    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << arraySum(arr, n) << endl;

    return 0;
}
