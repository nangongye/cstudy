#include<stdio.h>

	int main()
	{
		int a,b,c;
		
		printf("����������������");
		scanf("%d%d%d",&a,&b,&c);
		
		if (a > b)	//a>b,�������������ִ��������� 
			if (b > c)	//�ж�b>c
				printf("%d,%d,%d",a,b,c);				
			else	//������������������b>c����ִ����ʽ 
			   if (a > c)	//�Ƚ�a��b֮���ٱȽ�a��c 
			   	  printf("%d,%d,%d",a,c,b);  
				else	
					printf("%d,%d,%d\n",c,a,b);
		
		else //b<a
			if (b < c)	//�ٱȽ�b��c 
				printf("%d,%d,%d\n",c,b,a);
			else
				if (a>c)	//�Ƚ�c��a 
					printf("%d,%d,%d\n",b,a,c);
				else
					printf("%d,%d,%d\n",b,c,a);
		
		return 0;
	}
