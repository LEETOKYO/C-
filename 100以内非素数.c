#include<stdio.h>
int main()
{
	int a;
	
	for(a=1;a<=100;a++)
	{
	    int b;//Ҫ����for�������涨�� 
	    int c=1;
		for(b=2; b<a;b++)
		if(a%b==0)
		{
			c=0;
			break;
		}
		if(c==1)
		{
			printf("%d\n",a);
		}
}
	return 0;
}
