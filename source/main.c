#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int count = 0;
	int h, d;		//h是一般工時，d是加班工時
	float s,r;		//s為薪水，r是每小時工資

	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%d", &h);

	while (h != -1)
	{

		printf("Enter hourly rate of the worker(00.00):");
		scanf_s("%f", &r);

		d = h - 40;

		if (d > 0)
		{
			s = 40 * 10 + d * 15;
			printf("Salary is $%.2f\n\n", s);
		}
		else
		{
			s = h * 10;
			printf("Salary is $%.2f\n\n", s);
		}

		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &h);
	}

	system("pause");
	return 0;
}