#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch = 'Y';

	printf("Original %d\n",ch);
	printf("Lowercase %d\n",tolower(ch));
	printf("Uppercase %d\n",toupper(ch));
	printf("Original %d\n",ch);

	return(0);
}

