#include<stdio.h>

	void f(char *s)
	{
		char c='s';
		int i=0,m=0;
		
		while(s[i]!='\0')	//�ж��ַ��Ƿ��ַ���ĩβ 
		  {
				if(s[i]=='s')	//���ַ�����S���������1 
					m++;
					i++;	
	      }
	    printf("the num is %d\n",m);
	}
	
	int main()
	{
		char s[50];
		gets(s);	//�Ӽ��̻�ȡ�ַ���������s�� 
		f(s);
		
		return 0;
	}
