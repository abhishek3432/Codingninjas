bool areIsomorphic(string &str1, string &str2)

{

    int n = str1.size();

    if(n != str2.size()){

        return false;

    }

    unordered_map<char , char> charMap1 , charMap2;

    for(int i=0 ; i<n; i++){

        char ch1 = str1[i];

        char ch2 = str2[i];

 

        if(charMap1.find(ch1) == charMap1.end() && charMap2.find(ch2) == charMap2.end()){

            charMap2[ch2] = ch1;

            charMap1[ch1] = ch2;

        }

        else if(charMap2[ch2] != ch1 || charMap1[ch1] != ch2 ){

            return false;

        }

    }

    return true;

}