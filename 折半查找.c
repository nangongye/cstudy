#include<stido.h>

	int isearch(int a[],int n,int x)	//定义折半查找 
	{
		int mid,low,high;	//定义整型变量，分别用于记录要查找的数组的中间、头和尾
			
		low =  0;	//初始化头和尾 的位置
		high = n-1;		//数组下标从0开始，故末尾应为n-1，而不是n 
		 
		while(low <= high)	//当头没有超过尾的时候进行循环 
		{
			mid = (low+high) / 2;	//给中间赋值 
			if(a[mid] == x)		//找到X返回mid位置 
				return  mid;	
			else if(a[mid] > x)		//如果mid比X大，则将尾标记到中间那个位置 
				high = mid -1;
			else	//如果mid比X小，则将头标记到中间的位置 
		}
		 
		    return -1;
	}
