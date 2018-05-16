import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class day6 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        String t;
        char[] ch;
        int i,j=0,k;
        Scanner s=new Scanner(System.in);
        i=s.nextInt();
        while(j<i){
            t=s.next();
            ch=t.toCharArray();
            for(k=0;k<t.length();k++){
                if(k%2==0)
                    System.out.print(ch[k]);
            }
            System.out.print(" ");
            for(k=0;k<t.length();k++){
                if(k%2!=0)
                    System.out.print(ch[k]);
            }
            System.out.println();
            j++;
                
        }

        
        
    }
}
