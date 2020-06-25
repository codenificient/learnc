
/*
Logical operators are OR AND NOT

&& AND all the conditions must be true
\\ OR one of the conditions must be true
! NOT condition must be false

a = 7;
if ( a > 0 && a < 10 )
    both exp are true, therefore whole expression is TRUE
else if ( a > 0 && a < 5 )
    True && False = False

    else if ( !(a == 50))
    true
*/

#include <stdio.h>

int iscaps(int ch);

int main()
{
	int c;

	do
	{
		c = getchar();
		if(iscaps(c)) // uses uppercase letters generated from iscaps functions
            putchar(c); // and displays only them
	}
	while( c != '\n');

	return(0);
}

int iscaps(int ch)
{
	if( ch >= 'A' && ch <= 'Z') // confirms if input is uppercase
		return(1);
	else
		return(0);
}

