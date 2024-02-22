const int MOD = 1000000007;

    long long int result = 1; 

    if(q==1){

        result = (n * (n + 1) / 2) % MOD;

    }else if(q==2){

        for (int i = 1; i <= n; i++) {

            result = (result * i) % MOD; // Calculate product modulo MOD

        }

    }

    return result;
