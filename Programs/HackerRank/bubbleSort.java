import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class bubbleSort{

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int numberOfSwaps=0;
        for (int i = 0; i < n; i++) {
            for (int j =i+1; j < n ; j++) {
               if (a[i] > a[j]) {
                   int temp;
		   temp=a[i];
		   a[i]=a[j];
		   a[j]=temp;
                     numberOfSwaps++;
                }
            }
           }
        System.out.println("Array is sorted in "+numberOfSwaps+" swaps.");
        System.out.println("First Element:"+a[1]);
        System.out.println("Last Element:"+a[n-1]);
    }
}

