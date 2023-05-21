#include<stdio.h>
int main()
{
	int a;
	
	for(a=1;a<=100;a++)
	{
	    int b;//要放在for括号里面定义 
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
