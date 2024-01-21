string minWindow(string s, string t)

{

    int str=-1,len=INT_MAX;

    int n=s.size();

    for(int i=0;i<n;i++){

        if(s[i]==t[0]){

            int i1=i+1;

            int i2=1;

            while(i1<s.size() && i2<t.size()){

                if(s[i1]==t[i2]){

                    i2++;

                }

                i1++;

            }

            if(i2>=t.size()){

 

                if (i1 - i < len) {

                    str = i;

                    len = i1 - i;

                }

            }

        }

    }

    if (str == -1){

        return "";

    }

    return s.substr(str,len);

}