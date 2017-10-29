#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 6
// Implementation of selection sort algorithm.(Algorithms analysis)
void selection_sort(int *p,int len)
{
	int i,j,min;
	int tmp;
	for(i = 0; i < len-1; i++)
	{
		min = p[i];

		for(j = i + 1; j < len; j++)
		{
			if(p[j] < min)
			{
				min = p[j];
					// swapping contexts.
				tmp = p[j];
				p[j] = 	p[i];		
				p[i] = tmp;
			}
		}
	}
}
int main(int argc,char *argv[])
{
	int pinakas[20];
	int i;

	srand(time(NULL));

	for(i = 0; i < LEN; i++)
		pinakas[i] = (rand() % 10) + 1;

	printf("display\n");

	for(i = 0 ; i < LEN; i++)
		printf("%d\n",pinakas[i]);

	selection_sort(pinakas,LEN);

	printf("display\n");

	for(i = 0 ; i < LEN; i++)
		printf("%d\n",pinakas[i]);
	
	return 0;
}