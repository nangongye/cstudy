#include<stdio.h>

	long f(int x)
	{
		long p=x;	//���� һ�������ͱ���p�����ͱ��� 
		int i;
		
		for(i=1; i<5; i++)	//forѭ������p��5�η� 
			p=p*x;						
		
		return (p);	//����pֵ 
	}
	
	long s(int x)
	{
		long s=0;
		int i;
		for(i=0; i<x; i++)	//forѭ������0��X��5�η����ۼӺ� 
			s=s+f(i);
			
		return(s);							
	}
	
	int main()
	{
		int x;
		printf("��������x:");
		scanf("%d",&x);
		printf("the number is %d\n",s(x));
		
		return 0;
	 } 
	 /*Ϊʲôi<5��
	 	��Ϊp=p^2,
		 ��p^2��3�Σ�
		 ��p��Ҫ�ٳ�һ��p^2����Ϊ4�� 
	 */
