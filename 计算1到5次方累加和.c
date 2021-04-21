#include<stdio.h>

	long f(int x)
	{
		long p=x;	//定义 一个长整型变量p和整型变量 
		int i;
		
		for(i=1; i<5; i++)	//for循环计算p的5次方 
			p=p*x;						
		
		return (p);	//返回p值 
	}
	
	long s(int x)
	{
		long s=0;
		int i;
		for(i=0; i<x; i++)	//for循环计算0到X的5次方的累加和 
			s=s+f(i);
			
		return(s);							
	}
	
	int main()
	{
		int x;
		printf("输入数字x:");
		scanf("%d",&x);
		printf("the number is %d\n",s(x));
		
		return 0;
	 } 
	 /*为什么i<5？
	 	因为p=p^2,
		 由p^2差3次，
		 又p还要再乘一次p^2，故为4次 
	 */
