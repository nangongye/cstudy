#include<stdio.h>

	void s(int x)
	{
		int i=0,j,s[100];
		while(1)	//����ʼ��Ϊ1 ��һֱѭ�� 
		{
			s[i++]=x%2; //��x����2��������������s[i]
			x=x/2; //��x����2�����������x
			if(x==0) //��x==0�����˳�while ѭ��
				break;									 
		 }
		 
		for(j=i-1; j>=0; j--)	//�����������x�е�Ԫ�� 
			printf("%d",s[j]); 
	}
	
	int main()
	{
		int a;
		printf("����Ҫת����ʮ��������");
		scanf("%d",&a);
		s(a);
		printf("\n");
		
		return 0;
	 } 
	 
