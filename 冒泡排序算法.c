#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

	void Bubblesort(int *a,int n) //该单词表示冒泡排序
	{
		int i,j,t;
		
		for(i=0; i<n; i++)
		   for(j=n-1; j>=i; j)
		   		if(a[j-1]>a[j])  //循环初始化j-=i-1 
				   {
				   		t=a[j-1];
				   		a[j-1]=a[j];
				   		a[j]=t;
					} 
	} 
	
	int main()
	{
		int arr[N],i;
		
		srand(time(NULL)); //使用时间函数time 函数生成一个随机种子，控制rand函数生成的随机数
		
		for(i=0; i<N; i++)		//使用循环生成随机数，并将生成的数据保存到数组元素中 
			arr[i]=rand() / 1000+100; 
		
		Bubblesort(arr,N);	//调用 冒泡排序函数，对数组中的元素进行排序
		
		for(i=0; i<N; i++)	//使用for循环输出数组中的所有元素 
			printf("%d",arr[i]);
			
		return 0; 
	}
	/*为了使每次调用rand函数产生的伪随机序列不同，即完成真正意义上的随机序列
	通常可以利用系统时间改变系统的种子值 
	
	 为什么j-1 ?
	   根据冒泡排序原理，数组内前面数值和后面数值进行比较
	   而排序，所以后一个为 j，前一个自然为j -1 
	*/ 
