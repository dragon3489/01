#include<stdio.h>
int main()
{
	int a,b,a2,b2;								//շת�������Լ��
	int m;
	while(1)
	{
		printf("��������������\n");
		scanf("%d%d",&a2,&b2);
		if(getchar()=='s')
		{break;}
		a=a2;
		b=b2;



		while(m=a%b)						//����Ҫa>b
		{									//���Ĵ���
			m=a%b;
			a=b;
			b=m;
		}



		printf("%d��%d�����Լ��Ϊ��%d\n",a2,b2,b);
	}
	return 0;
}