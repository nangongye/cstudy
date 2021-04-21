#include<stdio.h>

	void s(int x)
	{
		int i=0,j,s[100];
		while(1)	//条件始终为1 将一直循环 
		{
			s[i++]=x%2; //将x除以2的余数赋给变量s[i]
			x=x/2; //将x除以2结果赋给变量x
			if(x==0) //若x==0，则退出while 循环
				break;									 
		 }
		 
		for(j=i-1; j>=0; j--)	//倒序输出数组x中的元素 
			printf("%d",s[j]); 
	}
	
	int main()
	{
		int a;
		printf("输入要转换的十进制数：");
		scanf("%d",&a);
		s(a);
		printf("\n");
		
		return 0;
	 } 
	 
