#include<stdio.h>

	int main()
	{
		int val; //存放待判断的数字 
		int m;
		int sum = 0;
		
		printf("please enter the number to be judged: val=  \n");
		scanf("%d",&val);
		
		m=val;
		while(m)
		{
			sum = sum * 10 + m % 10;   //每次循环sum会保留m的最后一位数，同时每次sum乘以10都会接近val，最后使两者相等 
			m = m / 10;   //每次除10都会使m少一位数，当等于0时循环结束 
		}
		
		if(sum ==val)   
			printf("YES!\n");
		else
			printf("NO!\n");
			
		return 0;
	}  
	/*
		sum = 1  m=1232
		sum=  12  m=123
	    sum = 123  m=12
		sum = 1232 m=1
		sum = 12321  m=0
	*/ 
