#include<stdio.h>

	int main()
	{
		int val; //��Ŵ��жϵ����� 
		int m;
		int sum = 0;
		
		printf("please enter the number to be judged: val=  \n");
		scanf("%d",&val);
		
		m=val;
		while(m)
		{
			sum = sum * 10 + m % 10;   //ÿ��ѭ��sum�ᱣ��m�����һλ����ͬʱÿ��sum����10����ӽ�val�����ʹ������� 
			m = m / 10;   //ÿ�γ�10����ʹm��һλ����������0ʱѭ������ 
		}
		
		if(sum ==val)   
			printf("YES!\n");
		else
			printf("NO!\n");
			
		return 0;
	}  
	/*
		sum = 1  m=1232
		sum=  12  m=123
	    sum = 123  m=12
		sum = 1232 m=1
		sum = 12321  m=0
	*/ 
