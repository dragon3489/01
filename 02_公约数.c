#include<stdio.h>
int main()
{
	int a,b,a2,b2;								//辗转相除法求公约数
	int m;
	while(1)
	{
		printf("请输入两个数：\n");
		scanf("%d%d",&a2,&b2);
		if(getchar()=='s')
		{break;}
		a=a2;
		b=b2;



		while(m=a%b)						//不需要a>b
		{									//核心代码
			m=a%b;
			a=b;
			b=m;
		}



		printf("%d和%d的最大公约数为：%d\n",a2,b2,b);
	}
	return 0;
}