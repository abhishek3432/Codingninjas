#include<iostream>
using namespace std;

void numberpattern(int n){
   int num = 1;
   for(int i = 1; i <= n; i++){
       for(int j = 1; j <= i; j++){
           cout << num++;
       }
       cout << endl;
       num = num - i+ 1;
   }
}

int main(){
   int n;
   cin >> n;
   numberpattern(n);
   return 0;
}
