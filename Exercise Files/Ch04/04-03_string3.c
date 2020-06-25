#include <stdio.h>

int main()
{
	char first[] = "I would like to go ";
	char second[] = "from here to there\n";

	printf("%s\n",first+second); // string concatenation does not work like this..:(

	return(0);
}

