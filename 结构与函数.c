#include<stdio.h>

struct point{
	int x;
	int y;
};

struct point *getStruct(struct point *p){//函数执行完返回一个结构类型的指针 
	scanf("%d",&p->x);//用p指向x
	scanf("%d",&p->y);//p指向y 
	printf("%d,%d",p->x,p->y);
	return p;//返回一个结构类型变量指针，方便函数调用 
}
void output(struct point  p){//无返回值，输出的是结构中成员的值，是结构本身 
	printf("%d,%d",p.x,p.y);
}
void print(const struct point *p){
	printf("%d,%d",p->x,p->y);//打印p所指的x 和 y 
}
	int main(){
		struct point y={0,0};
		getStruct(&y);
		output(y);
		output(*getStruct(&y));// 首先getstruct(&y)是函数的返回值，即*P;返回值是一个结构类型的指针，那么再用星号去返回那个函数返回值的那个数据。 
		print(getStruct(&y));// 
		
	}
	
