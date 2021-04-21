#include<stdio.h>
#define M 10

	
	void sort(int a[],int n)//定义排序函数 
	{
		int i,j,t;
		
		for(i=0; i<n-1; i++)	//	n-1 表示需要n-1次排序 
			for(j=i; j<n; j++)  //每次循环，都初始化j 
				{
					if(a[i]<a[j])
						{
							t=a[i];
							a[i]=a[j];
							a[j]=t;
						}
				}			
	}

	int main()
	{
		int i,arr[M] = {3,35,34,29,78,22,33,44,66,55};
		
		for(i=0; i<M; i++)		//输出数组中的所有数 
			printf("%4d",arr[i]);
		printf("\n");
		
		sort(arr,M);	//调用排序函数 
		for(i=0; i<M; i++)		//输出排序好的数组 
			printf("%4d",arr[i]);
		printf("\n");
		
		return 0;
	}
