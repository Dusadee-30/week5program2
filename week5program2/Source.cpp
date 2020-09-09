#include<Stdio.h>
float over(float n)
{
	float all;
	all = 1/n;
	return all;
}
int main()
{
	int n;
	float sum = 0.00;
	printf("Input your number : ");
	scanf_s("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			printf(" 1/%d ", j);
			sum += over(j);
			if (j != i)
			{
				printf(" + ");
			}
			else
			{
				printf(" =  %.2f ", sum);
			}

		}
		printf("\n");
		sum = 0;
	}


	return 0;
}