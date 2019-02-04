import java.io.*;
import java.util.Scanner;

public class Reverse{
	public static void main(String args[]){
		int[] a = new int[20];
		int stacktop = 5;
		int  i, tmp;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Array : ");
		for (i=0; i<=stacktop; i++){
			a[i] = sc.nextInt();
		}
		
		System.out.println("Before Reverse");
		for (i=0; i<=stacktop; i++){
			System.out.println(a[i]);
		}
		System.out.println("Reversing...");
		for (i=0; i <= stacktop/2; i++){
			tmp = a[i];
			a[i] = a[stacktop-i];
			a[stacktop-i] = tmp;
		}
		System.out.println("After Reverse");
		for (i=0; i<=stacktop; i++){
			System.out.println(a[i]);
		}
		
		
		
	}
}