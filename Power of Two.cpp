bool isPowerOfTwo(int n)
{	
    // Write your code here.
    return n != 0 && ((n & (n - 1)) == 0);
}