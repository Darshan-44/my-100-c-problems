package bios;
import java.util.Scanner;

public class Main3 {
	public static void main(String[]args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the length: ");
		Double length = sc.nextDouble();
		System.out.println("Enter the breadth: ");
		Double breadth = sc.nextDouble();
		Double area= length*breadth;
		System.out.println("Area of rectangle "+ area);
		sc.close();
		
	
		
		
	}
	

}
