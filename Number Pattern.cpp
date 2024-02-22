vector<string>ans;

    for(int i=1; i<=n; i++){

        int p = i;

        string temp ="";

        for(int j=1; j<=i; j++){

            

            temp = temp + to_string(p);

            p++;

            }

                ans.push_back(temp);

        }

    

            return ans;
