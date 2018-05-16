import java.util.Scanner;

class A{
	public int x;
	public int y;
	public A(){
		x = 0;
		y = 0;
	}
	public A(int a, int b){
		x = a;
		y = b;
	}
	public int Sum(){
		return x + y;
	}
}

public class number_4{
	public static void main(String args[]){
		int a, b, sum;
		Scanner scanner = new Scanner(System.in);
	
		System.out.print("Enter tow integers: ");	
		a = scanner.nextInt();
		b = scanner.nextInt();
		
		A obj;
		obj = new A(a, b);
		sum = obj.Sum();
		System.out.println(a + " + " + b + " = " + sum);
	}	
}
