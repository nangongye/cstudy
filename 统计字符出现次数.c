#include<stdio.h>

	void f(char *s)
	{
		char c='s';
		int i=0,m=0;
		
		while(s[i]!='\0')	//判断字符是否到字符串末尾 
		  {
				if(s[i]=='s')	//若字符等于S则计数器加1 
					m++;
					i++;	
	      }
	    printf("the num is %d\n",m);
	}
	
	int main()
	{
		char s[50];
		gets(s);	//从键盘获取字符串至数组s中 
		f(s);
		
		return 0;
	}
