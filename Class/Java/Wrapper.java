import java.util.*;
import java.io.*;

class Wrapper{
	public static void main(String args[]) throws IOException{		
		float a = 10;
		Float b = new Float(20);
		System.out.println(a);
		System.out.println(b);
	}
	
}


class Tochar{
	public static void toChar(String s){
		for(int i=0; i < s.length() ;i++){
			System.out.println(s.charAt(i));
		}
	}
	public static void main(String args[])  throws IOException{
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		
		String s = br.readLine();
		System.out.println(s);
		char[] c= s.toCharArray();
		for(int i=0; i < c.length ;i++){
			System.out.println(c[i]);
		}
		System.out.println("----------------USER DEFINED-----------------");
		toChar(s);
		
	}
}

class Index{
	public static int getIndex(String s, char c){
		for(int i=0; i < s.length() ;i++){
			if(s.charAt(i) == c){
				return i;
			}
		}
		return -1;
	}
	public static void main(String args[]) throws IOException{
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		
		String s = br.readLine();
		System.out.println(s);
		System.out.println(s.indexOf('s'));
		System.out.println("----------------USER DEFINED-----------------");
		System.out.println(getIndex(s, 's'));
	}
	
}


class Compare{
	public static boolean getComp(String a, String b){
		if(a.length() != b.length()){
			return false;
		}
		for(int i=0; i < a.length(); i++){
			if(a.charAt(i) != b.charAt(i)){
				return false;
			}
		}
		return true;
	}
	public static void main(String args[]) throws IOException{
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		
		String a = br.readLine();
		String b = br.readLine();
		
		System.out.println(a);
		System.out.println(b);
		System.out.println(a.equals(b));
		
		System.out.println("----------------USER DEFINED-----------------");
		System.out.println(getComp(a, b));
	}
	
}
