
import java.util.Scanner;

public class FibonacciSeariesHackOverFest {

	public static void main(String[] args) 
	{
		
		int k=0, a = 1,b=1;
		Scanner sc=new Scanner(System.in);
		
		System.out.print("Enter Any Number");
		int n=sc.nextInt();
		System.out.printf(" %d  %d ",a,b);
		
		for(int i=1;i<=n;i++)
		{
			
			k=a+b;
			
			
			int m=Check_Prime(k);
			
			if( m!=0 || k%5==5)
			{
				System.out.print(0+" ");
			}
			else
			{
				System.out.print(k+" ");
			}
			a=b;
			b=k;
	
		}
		
	
	}


	private static int Check_Prime(int number)
     {
         int i;
         for (i = 2; i <= number - 1; i++)
         {
             if (number % i == 0)
             {
                 return 0;
             }
         }
         if (i == number)
         {
             return 1;
         }
         return 0;
     }

}

