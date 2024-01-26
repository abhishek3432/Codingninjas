import java.util.Scanner;

public class ArraySolution1 {
    public static void main(String[] args) {

        int n = 5;
        int arr[] = {2,3,4,5};

        int newarr[] =new int[n];
        int a = 0;

        while(n >= 0){

            newarr[a] = n;


            a++;
            n--;
            if(n ==  0){
                n = 5;
                break;
            }
        }
        int missingnumber = 0 ;
        int count = 0;
        for (int i = 0; i < n; i++) {
            //System.out.println("i - "+ i);
            for (int j = 0; j < n-1; j++) {
                //System.out.println("j" + j);
                boolean check = newarr[i] == arr[j];
                if(check){
                    count++;
                    break;
                }
                if(j == n-2){
                    missingnumber = newarr[i];
                    System.out.println("Missing number - " + missingnumber);
                    return;
                }

            }
           }
        }


}
