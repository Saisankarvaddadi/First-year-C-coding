#include<stdio.h>
int main()
{
	int a[100][100];
	int i,j,r,c,sum;
	printf("Enter no of rows \n");
	scanf("%d",&r);
	printf("Enter no of cols \n");
	scanf("%d",&c);
	printf("Enter elements into array \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum=sum+a[j][i]	;
		}
		printf(" %dst Col sum= %d \n",i+1,sum);		
	}
return 0;
}
