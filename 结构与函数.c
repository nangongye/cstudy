#include<stdio.h>

struct point{
	int x;
	int y;
};

struct point *getStruct(struct point *p){//����ִ���귵��һ���ṹ���͵�ָ�� 
	scanf("%d",&p->x);//��pָ��x
	scanf("%d",&p->y);//pָ��y 
	printf("%d,%d",p->x,p->y);
	return p;//����һ���ṹ���ͱ���ָ�룬���㺯������ 
}
void output(struct point  p){//�޷���ֵ��������ǽṹ�г�Ա��ֵ���ǽṹ���� 
	printf("%d,%d",p.x,p.y);
}
void print(const struct point *p){
	printf("%d,%d",p->x,p->y);//��ӡp��ָ��x �� y 
}
	int main(){
		struct point y={0,0};
		getStruct(&y);
		output(y);
		output(*getStruct(&y));// ����getstruct(&y)�Ǻ����ķ���ֵ����*P;����ֵ��һ���ṹ���͵�ָ�룬��ô�����Ǻ�ȥ�����Ǹ���������ֵ���Ǹ����ݡ� 
		print(getStruct(&y));// 
		
	}
	
