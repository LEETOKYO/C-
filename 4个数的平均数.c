#include<stdio.h> 
int main()
{
	int sum=0;
	int count=1;
	int n;
	scanf("%d",&n);
	while (count<4)
	{
		sum+=n;
		count ++;
	    scanf("%d",&n);		
	}
	double zongsum=sum;
	printf("the average is %f.\n",zongsum/count);
	return 0;
}
