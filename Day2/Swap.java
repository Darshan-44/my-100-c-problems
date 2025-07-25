package bios;
import java.util.Scanner;

public class q9 {
	public static void main(String[]args) {
		Scanner sc= new Scanner(System.in);
		int x=10,y=20;
		System.out.println("Numbers after swapping "  + "x= "+  x  + "y= "+y ) ;
		int temp =x;
		x=y;
		y=temp;
		System.out.println("Numbers after swapping "  + "x= "+  x  + "y= "+y ) ;
		
		sc.close();
		}

}
