int func(char ch)

{

    if(ch=='I')

    {

        return 1;

    }

    if(ch=='V')

    {

        return 5;

    }

    if(ch=='X')

    {

        return 10;

    }

    if(ch=='L')

    {

        return 50;

    }

    if(ch=='C')

    {

        return 100;

    }

    if(ch=='D')

    {

        return 500;

    }

    if(ch=='M')

    {

        return 1000;

    }

}

 

int romanToInt(string s) {

    // Write your code here

    int n=s.size();

    int current=func(s[n-1]); 

    // from right to left

    int t=0; // for storing temp if XXIX situation , for repeating letters

    for(int i=n-2;i>=0;i--)

    {

        int temp=func(s[i]); // next letter

        if(temp>=current || temp==t)

        {

            current=current+temp;

        }

        else

        {

            current=current-temp;

        }

        t=temp;

    }

    return current;

}