int calcGCD(int n, int m){
    // Write your code here.
   return m==0 ? n: calcGCD(m,n%m);
}