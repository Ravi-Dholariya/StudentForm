import java.util.*;

class Seven 
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		 System.out.print("Enter value of first : ");
		 int n1 = sc.nextInt();
		 System.out.print("Enter value of Second : ");
		 int n2 = sc.nextInt();
		 boolean [] answer =  new boolean[32]; 
		 int a = 0 ;
		 int n  = n1^n2;
		 while ( n != 0 )
		 {
		 	if (n%2 == 0)
		 	{
		 		answer[a] = false; 
		 	}
		 	else 
		 	{
		 		answer[a] = true;
		 	}
		 	a++;
		 	n = n/2;
		 }
		 int w =0;
		 for (int  i = 31;i>=0 ;i-- ) {
		 		
		 		if(answer[i])
		 		{
		 			w++;
		 		}		 		
		 }
		 System.out.println("Difference : " + w);
	}
}