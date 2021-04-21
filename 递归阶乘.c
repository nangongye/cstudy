#include<stdio.h>

	int fact(int n)//定义阶乘函数 
	{
		if(n<=1)	//条件判断，当n<=1时，返回值为1 
		  return 1;
		else 	//否则，返回值将调用fact函数，参数为n-1 
		  return n*fact(n-1);
	 } 
	 
	 int main()
	 {
	 	int i;
	 	
	 	printf("请输入要求阶乘的一个整数：");
	 	scanf("%d",&i);
	 	
	 	printf("%d的阶乘结果为：%d\n",i,fact(i));//输出调用fact函数后i的值
		 
		 return 0; 
	 }
