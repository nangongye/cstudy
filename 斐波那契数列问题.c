/*斐波那契数列问题:
	现有一个斐波那契数列1,1,2,3,5,8,.....,求其第40个数 
	每个数等于前两个数之和,f1=1,f2=1,用公式fn=fn-1 + fn2 
	思路：将fn的值赋给f2,f2赋给f1 
*/
#include<stdio.h>

	int main()
	{
		int i,f1=1,f2=1,f=0; 
		
		for(i=1; i<=38; i++)//执行38词，即得第40个数 
			{
				f = f1+f2;   //f用来保存两个数的和 
				f1 = f2;
				f2 = f;
			}
			    printf("the number is: %d",f);
				
		return 0;
	 } 
