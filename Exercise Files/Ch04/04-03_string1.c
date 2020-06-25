#include <stdio.h>
#include <string.h>

/*
C language deals with strings in special way. caution
String is an array of char variables
the final char is the null character, \0
can manipulate strings by include string.h header
Use double quotes for Strings
*/

int main()
{
	char string[] = "Hello World, I am Chris Legend! Just how long am I?";
	int len;

	len = strlen(string);
	printf("The following string:\n");
	puts(string);
	printf("is %d characters long.\n",len);

	return(0);
}

