#include<stdio.h>

	int main()
	{
		int i,j;  //定义两个变量 
		
		for(i=0; j<=9; j++)  //外层循环 ，每进行一次循环，内循环都要初始化为1，即i=1 
			{
				for(i=1; i<=j; i++)	//内层循环 
					{
						printf("%d * %d=%-4d",i,j,i*j);  //输出值，-号为左对齐，输出4个字符宽的整数 
					}									//如果不用-号数据会堆在右侧 
					
				printf("\n"); //内循环结束后会自动换行 
			}
		
		return 0;
	}
