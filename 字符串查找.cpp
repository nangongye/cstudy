#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc , char const *argv[]){
	char s[]="hello";
	char *p = strchr(s,'l');//���ú���strchrѰ���ַ����е�l�ַ�������l���ַ�������λ�õ�ַ���ظ�p��
	char c = *p;
	*p = '\0';//���ַ�����������ָ��p
	char *t = (char *)malloc(strlen(s)+1);//����ϵͳ�����tһ����СΪs+1���ڴ�ռ�
	char *t = 
	strcpy(t,p);//��P�е����ݸ��Ƶ�����t��
	free(t);
	printf("%s\n",t);
	
	return 0;
}