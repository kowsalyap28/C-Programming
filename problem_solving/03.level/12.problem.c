
#include <stdio.h>

int main()
{
	int n,n2,sum;
	scanf("%d %d",&n,&n2);
	int a[n][n2];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n2; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<n; i++)
	{
	    int sum=0;
		for(int j=0; j<n2; j++)
		{
			printf("%d",a[i][j]);
			sum+=a[i][j];
		}
		printf("\n");
	}
		printf("%d",sum);
		
	

	return 0;
}