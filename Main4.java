package bios;
import java.util.Scanner;

public class Main4 {
	public static void main(String[]args) {
		Scanner sc= new Scanner (System.in);
		System.out.println("Enter the celcius value: ");
		Double celcius= sc.nextDouble();
		Double fahrenheit= (celcius*9/5)+32 ;
		System.out.println("Temperature in Fahrenheit: "+fahrenheit);
		
		sc.close();
		
	}

}
