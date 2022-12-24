#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	int a2=0,b2=0,c2=0;
	scanf("%d%d%d",&a2,b2,c2);
	scanf("%d %d %d",&a,&b,&c);					//有无空格结果一致。
	printf("%d %d %d\n",a,b,c);
	printf("%d %d %d\n",a2,b2,c2);
	while(1);
	return 0;

}