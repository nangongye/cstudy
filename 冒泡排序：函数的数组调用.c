#include<stdio.h>
#define M 10

	
	void sort(int a[],int n)//���������� 
	{
		int i,j,t;
		
		for(i=0; i<n-1; i++)	//	n-1 ��ʾ��Ҫn-1������ 
			for(j=i; j<n; j++)  //ÿ��ѭ��������ʼ��j 
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
		
		for(i=0; i<M; i++)		//��������е������� 
			printf("%4d",arr[i]);
		printf("\n");
		
		sort(arr,M);	//���������� 
		for(i=0; i<M; i++)		//�������õ����� 
			printf("%4d",arr[i]);
		printf("\n");
		
		return 0;
	}
