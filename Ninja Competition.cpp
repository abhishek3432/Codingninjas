int even,odd=0;

    for(int i=1; i*i<=n; i++){

        if(n%i==0){

            if(i%2==0)

                even++;

            else

                odd++;

            if((n/i)!=i){

                if((n/i)%2==0)

                    even++;

                else

                    odd++;

            }

        }

    }

    return even==odd;
