#include<stdio.h>
//对要判断的数从2开始对它进行取余运算 

	int main()
	{
		int val,i;  
		
		scanf("%d",&val);  //输入带判断的数字是否为素数 
		
		for(i=2; i<val; i++)	//从2开始对它进行取余运算 
		{
			if(val%i==0)		//如果val和i能够整除则终止循环 
				break;
				
		}
		if(i == val)   //如果循环到i等于val，则为i已经可以和val，即它本身整除，故为素数 
			printf("YES\n");
		else
			printf("NO\n");
			
		return 0;
		
	}
	/*
	为什么不从1开始？
	因为1不是素数，素数的定义是大于1的自然数中 
	*/
