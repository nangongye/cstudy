#include<stdio.h>
/*
	冒泡排序的思想为：将要排序的数据依次进行相邻元素的比较，若为从小到大排列，则将相邻元素
	的小者放前面，大放后，小的元素会逐步放到起始位置。对数据排列一次则为一趟冒泡，二次则为二趟，依次下去
	n个待排序的元素经过n - 1 次排序即可得到正确的排序序列 
*/
	int main()
	{
		int x[10],i,j,k;
		
		printf("input the number:\n");		
		for(i=0; i<10; i++)
			scanf("%d",&x[i]);
			
		for(i=0; i<9; i++)
			for(j=9; j>i; j--)		//每次循环都初始化j为9 
				if(x[i]>x[j])		//若为true ，则互相交换 
				{
					k = x[i];
					x[i] = x[j];
					x[j] = k;
				}
				
		printf("the sort number is:");
		for(i=0; i<10; i++)		//利用循环输出已经排序好的数组 
			printf("%4d",x[i]);
		
		return 0;
	}
