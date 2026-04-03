#include <stdio.h>


void Cube(int a,int *ptr)
{

	int Element = a*a;

	for (int i = 0;i < Element;i++)
	{
		*(ptr + i) = (*(ptr + i))*(*(ptr + i))*(*(ptr + i));
	}

}


int main()
{

	int a;

	printf("Enter Array's Size:\n");
	scanf("%d", &a);


	int array[a][a];

	printf("Enter Array Elements:\n");


	for(int i = 0;i < a;i++)
	{
		for(int j = 0;j < a;j++)
		{
			printf("a[%d][%d] :",i,j);
			
			scanf("%d",&array[i][j]);
		}
	}



	Cube(a,&array[0][0]);


	printf("Cubes Of Elements:\n");


	for(int i = 0;i < a;i++)
	{
		for(int j = 0;j < a;j++)
		{
			printf("%d ",array[i][j]);
		}
		
		printf("\n");
	}

	return 0;
}