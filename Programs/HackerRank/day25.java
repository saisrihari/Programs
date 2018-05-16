import java.io.*;
import java.util.*;

public class day25 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int arr[]=new int[n];
        int b=0;
        for(int i=0;i<n;i++){
            arr[i]=s.nextInt();
           Double d = new Double(Math.sqrt(arr[i]));
            int a = d.intValue();
            b=0;
            while(a>1){
                if(arr[i]%a==0){
                    b++;
                }
                a--;
            }
            if(b==0 && arr[i]!=1)
            System.out.println("Prime");
            else
            System.out.println("Not prime");
        }
        
      
            
    }
}
