#include<stdio.h>
#define  PI  3.14

	int main()
	 {
	 	
	 	float r;/*定义变量r，即圆半径 */
	 	
	 	printf("请输入半径： ");
	 	scanf("%f",r);
	 	
	 	printf("面积=%.2f\n",PI*r*r);/*.2f表留两位小数 */
	 	printf("周长=%.2f\n",2*PI*r);
	 	
	 	return 0;
	 }
