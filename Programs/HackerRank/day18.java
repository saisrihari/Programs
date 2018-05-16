import java.io.*;
import java.util.*;
public class day18 {
    // Write your code here.
    char[] s1=new char[10];
    char[] s2=new char[10];
    char c1,c2;
    int i=0,j=0,k=0;
    public void pushCharacter(char c){
        c1=c;
        s1[i++]=c1;
    }
    public void enqueueCharacter(char c){
        c2=c;
        s2[j++]=c2;
    }
    public char popCharacter(){
        return(s1[--i]);    
    }
    public char dequeueCharacter(){
      
         return(s2[k++]);
    }
public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        // Convert input String to an array of characters:
        char[] s = input.toCharArray();

        // Create a Solution object:
        day18 p = new day18();

        // Enqueue/Push all chars to their respective data structures:
        for (char c : s) {
            p.pushCharacter(c);
            p.enqueueCharacter(c);
        }

        // Pop/Dequeue the chars at the head of both data structures and compare them:
        boolean isPalindrome = true;
        for (int i = 0; i < s.length/2; i++) {
		char c1=p.popCharacter();
		char c2=p.dequeueCharacter();
		System.out.println(c1+" "+c2);
            if (c1 != c2) {
                isPalindrome = false;                
                break;
            }
        }

        //Finally, print whether string s is palindrome or not.
        System.out.println( "The word, " + input + ", is " 
                           + ( (!isPalindrome) ? "not a palindrome." : "a palindrome." ) );
    }
}
