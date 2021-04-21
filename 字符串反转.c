#include<stdio.h>

	int main()
	{
		char arr[80],temp;	//定义一个字符数组和一个用于交换的字符型变量 
		int i,j;
		
		printf("请输入一个字符串（80个字符之内）：");
		scanf("%s",arr);//输入字符串并保存在数组中 
		
		printf("输入的字符串为：%s\n\n",arr);
		for(i=0; arr[i];i++)	//使用for循环查找字符串的结束标志 
			;
		
		for(j=0; j<i/2; j++)	//使用for 循环实现数组首尾交换,字符串反转必有一个中间字符不动， 
			{						//故j < i/2 
				temp = arr[j];
				arr[j] = arr[i-j-1];	//i是一个随用户输入的变量，表示i-j-1与j交换字符 
				arr[i-j-1] = temp;
			}
		
		printf("反转后的字符串为：%s\n",arr);	//以字符串形式输出数组 
		
		return 0;
	}
	/*1.18行为什么是i-j-1而不是i-j 
		答：如果 是i-j，会因为i=80，又i-j=80-0=80,而
		    数组的下标只到0~79，所以是i-j-1 
	*/ 
