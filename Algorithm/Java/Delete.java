import java.io.*;
import java.util.Scanner;

public class Delete{
	public static void main(String args[]){
		int[] a = new int[20];
		int stacktop = 5;
		int pos = 3, i;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Array : ");
		for (i=0; i<=stacktop; i++){
			a[i] = sc.nextInt();
		}
		
		
		System.out.println("Before Delete");
		for (i=0; i<stacktop; i++){
			System.out.println(a[i]);
		}
		System.out.println("Deleting...");
		for (i=pos; i<=pos; i++){
			a[i] = a[i+1]; 
		}
		stacktop--;
		System.out.println("After Delete");
		for (i=0; i<stacktop; i++){
			System.out.println(a[i]);
		}
		
		
		
	}
}