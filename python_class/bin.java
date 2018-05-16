import java.util.*;
class bin{
	static boolean find(int[] arr,int key){
		int low=0,high=(arr.length-1),mid=0;
		while(low<=high){
			mid=(low+high)/2;
			if(arr[mid]==key)
				return (true);
			else if(arr[mid]>key)
				high=mid-1;
			else
				low=mid+1;
		}
		return(false);
	}
	public static void main(String argv[]){
		int[] arr=new int[]{1,2,3,4,5,6,7,8,9};
		Scanner sc=new Scanner(System.in);
		int k=sc.nextInt();
		boolean a;
		a=find(arr,k);
		System.out.println(""+a);
}
}