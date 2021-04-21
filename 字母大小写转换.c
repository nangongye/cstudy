#include<stdio.h>

	int main()
	{
		char a;
		int b;
		
		printf("请输入字母： \n");
		scanf("%c",&a);
		b = a - 32;
		printf("小写字母%c的值为%d\n",a,a);
		printf("大写字母%c的值为%d\n",b,b);
		printf("字母%c相应的大写字母为%c",a,b);
		
		return 0;
	}
