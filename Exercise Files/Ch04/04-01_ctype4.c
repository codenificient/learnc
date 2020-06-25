#include <stdio.h>
#include <ctype.h>

int main()
{
	int acter;

	do
	{
		acter = getchar();
		if(isalpha(acter))
            // isalpha determines if char is part of the alphabet or something else
			putchar(acter)
			// function above will filter out non-alpha and display only alpha characters
	}
	while( acter != '\n');

	return(0);
}

