#include<stido.h>

	int isearch(int a[],int n,int x)	//�����۰���� 
	{
		int mid,low,high;	//�������ͱ������ֱ����ڼ�¼Ҫ���ҵ�������м䡢ͷ��β
			
		low =  0;	//��ʼ��ͷ��β ��λ��
		high = n-1;		//�����±��0��ʼ����ĩβӦΪn-1��������n 
		 
		while(low <= high)	//��ͷû�г���β��ʱ�����ѭ�� 
		{
			mid = (low+high) / 2;	//���м丳ֵ 
			if(a[mid] == x)		//�ҵ�X����midλ�� 
				return  mid;	
			else if(a[mid] > x)		//���mid��X����β��ǵ��м��Ǹ�λ�� 
				high = mid -1;
			else	//���mid��XС����ͷ��ǵ��м��λ�� 
		}
		 
		    return -1;
	}
