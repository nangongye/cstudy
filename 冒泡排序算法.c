#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

	void Bubblesort(int *a,int n) //�õ��ʱ�ʾð������
	{
		int i,j,t;
		
		for(i=0; i<n; i++)
		   for(j=n-1; j>=i; j)
		   		if(a[j-1]>a[j])  //ѭ����ʼ��j-=i-1 
				   {
				   		t=a[j-1];
				   		a[j-1]=a[j];
				   		a[j]=t;
					} 
	} 
	
	int main()
	{
		int arr[N],i;
		
		srand(time(NULL)); //ʹ��ʱ�亯��time ��������һ��������ӣ�����rand�������ɵ������
		
		for(i=0; i<N; i++)		//ʹ��ѭ��������������������ɵ����ݱ��浽����Ԫ���� 
			arr[i]=rand() / 1000+100; 
		
		Bubblesort(arr,N);	//���� ð�����������������е�Ԫ�ؽ�������
		
		for(i=0; i<N; i++)	//ʹ��forѭ����������е�����Ԫ�� 
			printf("%d",arr[i]);
			
		return 0; 
	}
	/*Ϊ��ʹÿ�ε���rand����������α������в�ͬ����������������ϵ��������
	ͨ����������ϵͳʱ��ı�ϵͳ������ֵ 
	
	 Ϊʲôj-1 ?
	   ����ð������ԭ��������ǰ����ֵ�ͺ�����ֵ���бȽ�
	   ���������Ժ�һ��Ϊ j��ǰһ����ȻΪj -1 
	*/ 
