import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class day16 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        try{
            int D=Integer.parseInt(S);
            System.out.print(D);
        }
        catch(Exception e){
            System.out.print("Bad String");
        }
    }
}
