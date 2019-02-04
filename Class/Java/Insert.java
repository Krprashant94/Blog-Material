import java.io.*;
import java.util.Scanner;
public class Insert{
	public static void main(String args[]){
		int[] a = new int[20];
		int stacktop = 5;
		int pos = 3, val = 15, i;
			
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Array : ");
		for (i=0; i<=stacktop; i++){
			a[i] = sc.nextInt();
		}
				
		System.out.println("Before Insert");
		for (i=0; i<stacktop; i++){
			System.out.println(a[i]);
		}
		System.out.println("Inserting...");
		for (i=stacktop; i>=pos; i--){
			a[i-1] = a[i]; 
		}
		a[i] = val;
		stacktop++;
		System.out.println("After Insert");
		for (i=0; i<stacktop; i++){
			System.out.println(a[i]);
		}
		
		
		
	}
}