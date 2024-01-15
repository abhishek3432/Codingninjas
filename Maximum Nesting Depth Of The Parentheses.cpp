int maxDepth(string s) {
	// Write your code here.
	 int n = s.length();//get string size
  int depth = 0;
  int curr = 0;

  if (n == 0)//if  not string
    return depth;
//traverse string
  for (int i = 0; i < n; i++) {
    if (s[i] == '(')
      curr++;
    else if (s[i] == ')') {
      depth = max(depth, curr);//store count of ( in depth 
      curr--; // ? -> indicates closing of parenthesis
    }
  }
  return depth;	
        
}
