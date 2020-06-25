#include <stdio.h>
#include <ctype.h>

int main()
{
	int acter;

	do
	{
		acter = getchar();
		if(isdigit(acter))
		// isdigit determines if user input is digits,
			putchar(acter);
        //then will filter out everything else and only display digits
	}
	while( acter != '\n');

	return(0);
}
