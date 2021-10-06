class Jav1 {
  public static void main(String args[])  
	{ 
		int c=Integer.parseInt(args[0]);   
 		int a=0,b=1,s,i;    
 		System.out.print(a+" "+b);  
 		for(i=0;i<c;++i)
 		{ 
			    
  		s=a+b;
			if(s%5==0||s%2==0)
			{
				System.out.print(" 0 ");
			}
			else{
				System.out.print(" "+s);
			}      
 			a=b;    
  		b=s;    
 		}     
	}
}
