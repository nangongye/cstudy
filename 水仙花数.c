#include<stdio.h>
//水仙花数是指一个3位数中其各个位数的数值的立方和等于该数 
	int main()
	{
		int x,y,i;
		
		for(i=100; i<=999; i++)
			{
				
				x = i/100;	//得到百位数 1，因为是int 类型 
				y = (i - x*100) / 10;	//得到十位数 ，例：（153 -1*100 ）=53/10=5  因为是int 类型 
				z = i%10;			//得到个位数  3	
				if(x*x*x + y*y*y + z*z*z==i)	//判断 
				printf("%d\n",i);
			}
		
		return 0;
	}
