#include <stdio.h>

#define MEALS 3

int main()
{
	int calories[MEALS];
	int x,total;

	total = 0;				/* initialize total */
	puts("Calorie Counter");
	for(x=0;x<MEALS;x++)
	{
		printf("Calories at meal %d: ",x+1); // prompt user for their calorie intake
		scanf("%d",&calories[x]); // store the value
		total = total + calories[x]; // add up all values
	}
	printf("You had a total of %d calories.\n",total); // printout user total cal intake

	return(0);
}

