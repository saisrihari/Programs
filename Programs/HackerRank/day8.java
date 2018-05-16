import java.util.*;
import java.io.*;
class day8{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map<String,String> myMap = new HashMap<String,String>();
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            String No=Integer.toString(phone);
            myMap.put(name,No);
        }
        while(in.hasNext()){
            String s = in.next();
            if(myMap.get(s)!=null)
             System.out.println(s+"="+myMap.get(s));
            else
             System.out.println("Not found");
	   
        }
        in.close();
    }
}

