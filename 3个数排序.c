#include<stdio.h>

	int main()
	{
		int a,b,c;
		
		printf("请输入三个整数：");
		scanf("%d%d%d",&a,&b,&c);
		
		if (a > b)	//a>b,如果条件满足则执行下面代码 
			if (b > c)	//判断b>c
				printf("%d,%d,%d",a,b,c);				
			else	//不成立上述条件，即b>c，则执行下式 
			   if (a > c)	//比较a和b之后，再比较a和c 
			   	  printf("%d,%d,%d",a,c,b);  
				else	
					printf("%d,%d,%d\n",c,a,b);
		
		else //b<a
			if (b < c)	//再比较b和c 
				printf("%d,%d,%d\n",c,b,a);
			else
				if (a>c)	//比较c和a 
					printf("%d,%d,%d\n",b,a,c);
				else
					printf("%d,%d,%d\n",b,c,a);
		
		return 0;
	}
