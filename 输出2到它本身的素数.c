//素数：能被 1 和 它本身整除的数

#include<stdio.h>

	int main()
	{
		int i,j,val,k=0;
		
		printf("enter the number for val: ");
		scanf("%d",&val);
		
		for(i=2; i<=val; i++)	//循环判断2到val是否是素数 
			{
				for(j=2; j<i; j++)//循环判断是否是素数 
					{
						if(i%j == 0)						  	
						  	break;	//若能被整除则跳出for循环 						  							  					
					}
					
				if(j>=i)
				{
					printf("%4d",i);	//输出为素数的数字 
					k++;	//输出素数个数 
				}
						
				if(!(k%10))   //k%10表示整除10取余，!k%10表示当k可以和10整除时执行 
					printf("\n");	//可以整除时换行 
			}

		return 0;
	} 
