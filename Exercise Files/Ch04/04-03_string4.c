#include <stdio.h>
#include <string.h>

int main()
{
	char first[] = "I would like to go ";
	char second[] = "from here to there all in one line. please help!\n";
	char buffer[50]; // create an empty buffer

	strcpy(buffer,first); // add first string to buffer
	strcat(buffer,second); // concatenate the second string
	puts(buffer); // print out the resulting string

	return(0);
}

