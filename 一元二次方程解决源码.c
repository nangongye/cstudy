#include<stdio.h>
#include<math.h>
  
  int main()
  {
  	int a,b,c;  //����һԪ���η��̵ı�����������   	
  	double delabe = b*b - 4*a*c;	//�����ж�һԪ���η��̷����Ƿ��н� 
  	int x1,x2;
  	 	
  	if(delabe>0)    //����0ʱ���ж��������� 
  	  {
  	  	x1 = (-b + sqrt(delabe))  / (2*a);  //sqrt��ʾ����  ʹ���ж�ʽ�ж��Ƿ񷽳��������� 
  	  	x2 = (-b - sqrt(delabe))  / (2*a); 
		
		printf("�÷����������⣬��������ֱ�Ϊ: x1=%d\t x2=%d\t\n",x1,x2);	  	
	  }
	  
	if(delabe=0)
	 {
	 	x1 = (-b + sqrt(delabe)) / (2*a);
	 	x2 = (-b + sqrt(delabe)) / (2*a);
	 	x1==x2;
	 	
	 	printf("�÷�����������ȣ�����ֵΪ: x1=x2=%d\n",x1);
	 }
	 
	 if(delabe<0)
	 {
	 	printf("�÷����޽�\n");
	 }
	 
	 return 0;
   } 
