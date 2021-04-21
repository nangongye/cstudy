#include<stdio.h>
#include<math.h>
  
  int main()
  {
  	int a,b,c;  //设置一元二次方程的变量和两个解   	
  	double delabe = b*b - 4*a*c;	//设置判断一元二次方程方程是否有解 
  	int x1,x2;
  	 	
  	if(delabe>0)    //大于0时，判断有两个解 
  	  {
  	  	x1 = (-b + sqrt(delabe))  / (2*a);  //sqrt表示根号  使用判断式判断是否方程有两个解 
  	  	x2 = (-b - sqrt(delabe))  / (2*a); 
		
		printf("该方程有两个解，而两个解分别为: x1=%d\t x2=%d\t\n",x1,x2);	  	
	  }
	  
	if(delabe=0)
	 {
	 	x1 = (-b + sqrt(delabe)) / (2*a);
	 	x2 = (-b + sqrt(delabe)) / (2*a);
	 	x1==x2;
	 	
	 	printf("该方程两个解相等，它的值为: x1=x2=%d\n",x1);
	 }
	 
	 if(delabe<0)
	 {
	 	printf("该方程无解\n");
	 }
	 
	 return 0;
   } 
