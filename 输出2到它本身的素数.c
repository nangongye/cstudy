//�������ܱ� 1 �� ��������������

#include<stdio.h>

	int main()
	{
		int i,j,val,k=0;
		
		printf("enter the number for val: ");
		scanf("%d",&val);
		
		for(i=2; i<=val; i++)	//ѭ���ж�2��val�Ƿ������� 
			{
				for(j=2; j<i; j++)//ѭ���ж��Ƿ������� 
					{
						if(i%j == 0)						  	
						  	break;	//���ܱ�����������forѭ�� 						  							  					
					}
					
				if(j>=i)
				{
					printf("%4d",i);	//���Ϊ���������� 
					k++;	//����������� 
				}
						
				if(!(k%10))   //k%10��ʾ����10ȡ�࣬!k%10��ʾ��k���Ժ�10����ʱִ�� 
					printf("\n");	//��������ʱ���� 
			}

		return 0;
	} 
