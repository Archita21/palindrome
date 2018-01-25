#include <stdio.h>
 int main()
 {
 	int n,rem,revd=0,temp=0;
 	printf("enter the no\n");
 	scanf("%d",&n);
 	temp=n;
 	
 	while(n!=0)
 	{
 		rem=n%10;
 		revd=revd*10+rem;
 		n=n/10;
 	}
 	if(temp==revd)
 	
 		printf("the no is palindrome",temp);
 	
 	else
 	
 		printf("the no is not palindrome",temp);
 	
 	 return 0;
 }
 
 	
 		
 	
 

