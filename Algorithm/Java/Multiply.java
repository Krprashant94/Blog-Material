import java.io.*;
import java.util.Scanner;
public class Multiply{
	public static void main(String args[]){
		
		Scanner sc = new Scanner(System.in);
		int[][] a = new int[5][5];
		int[][] b = new int[5][5];
		int[][] c = new int[5][5];
		int i, j, row =3, col=3;
		
		System.out.println("Matrix One :");
		for (i=0; i<row; i++){
			for(j=0; j<col; j++){
				a[i][j] = sc.nextInt();
			}
		}
		System.out.println("Matrix Two :");
		for (i=0; i<row; i++){
			for(j=0; j<col; j++){
				b[i][j] = sc.nextInt();
			}
		}
		
		
		System.out.println("Matrix One :");
		for (i=0; i<row; i++){
			for(j=0; j<col; j++){
				System.out.print(a[i][j]);
				System.out.print("  ");
			}
			System.out.println(" ");
		}
		System.out.println("Matrix Two :");
		for (i=0; i<row; i++){
			for(j=0; j<col; j++){
				System.out.print(b[i][j]);
				System.out.print("  ");
			}
			System.out.println(" ");
		}
		
		for (i=0; i<row; i++){
			for(j=0; j<col; j++){
				c[i][j] = 0;
				for(int k=0; k<row; k++){
					c[i][j] = c[i][j] + a[i][k] * b[k][j];
				}
			}
		}
		
		System.out.println("Matrix Multiply :");
		for (i=0; i<row; i++){
			for(j=0; j<col; j++){
				System.out.print(c[i][j]);
				System.out.print("  ");
			}
			System.out.println(" ");
		}
		
	}
}