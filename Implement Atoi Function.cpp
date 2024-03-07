 string a(string s,string ans,int i){

    if(s[i]<'0'||s[i]>'9'){

        return ans;

    }

    if(s[i]>='0'&&s[i]<='9'){

        return a(s,ans+s[i],i+1);

    }

}

int createAtoi(string s) {

    // Write your code here.

    int i=0;

    while(s[i]==' ')i++;

    int sign=1;

    if(s[i]=='-'){

    sign=-1;

    i++;

    }

    else if(s[i]=='+'){

        i++;

    }

    string output=a(s,"",i);

    int n=output.size();

    long long x=0;

    int m=n;

    for(int i=0;i<n;i++){

         x = x * 10 + int(output[i] - '0');

        if (x * sign > INT_MAX) return INT_MAX;

        if (x * sign < INT_MIN) return INT_MIN;

    }

    return  sign*x;

 

}