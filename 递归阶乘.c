#include<stdio.h>

	int fact(int n)//����׳˺��� 
	{
		if(n<=1)	//�����жϣ���n<=1ʱ������ֵΪ1 
		  return 1;
		else 	//���򣬷���ֵ������fact����������Ϊn-1 
		  return n*fact(n-1);
	 } 
	 
	 int main()
	 {
	 	int i;
	 	
	 	printf("������Ҫ��׳˵�һ��������");
	 	scanf("%d",&i);
	 	
	 	printf("%d�Ľ׳˽��Ϊ��%d\n",i,fact(i));//�������fact������i��ֵ
		 
		 return 0; 
	 }
