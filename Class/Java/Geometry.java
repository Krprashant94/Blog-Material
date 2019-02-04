import java.lang.Math.*;
public class Geometry{
	private static int x1, y1, x2, y2;
	private static void set(int a, int b, int c, int d){
		x1 =a;
		x2=b;
		y1=c;
		y2=d;
	}
	private static void get(){
		
		System.out.println("Poits :");
		System.out.print(x1);
		System.out.print(", ");
		System.out.print(x2);
		System.out.println(" ");
		System.out.print(y1);
		System.out.print(", ");
		System.out.print(y2);
		
		System.out.println(" ");
	}
	
	private static void calc(){
		double res= Math.sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
		
		System.out.print("Distance : ");
		System.out.print(res);
	}
	public static void main(String args[]){
		
		set(2, 3, 4, 8);
		get();
		calc();
		
	}
}