#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc , char const *argv[]){
	char s[]="hello";
	char *p = strchr(s,'l');//利用函数strchr寻找字符串中的l字符，并将l到字符结束的位置地址返回给p。
	char c = *p;
	*p = '\0';//将字符结束符付给指针p
	char *t = (char *)malloc(strlen(s)+1);//请求系统分配给t一个大小为s+1的内存空间
	char *t = 
	strcpy(t,p);//将P中的内容复制到数组t中
	free(t);
	printf("%s\n",t);
	
	return 0;
}