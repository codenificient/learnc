#include <stdio.h>

int main()
{
	char text[] = {
	   	'I', ' ', 'a', 'm', ' ', 'a', ' ','c', 'r', 'a', 'z', 'y', ' ', 'e', 'x', 'a', 'm', 'p', 'l', 'e', ' ', 'o', 'f', ' ', 'a', ' ',
		's', 't', 'r', 'i', 'n', 'g', '!', '\0'
	};

	// input each letter, and the program will concatenate them individually
	// preferable to use double quotes and input whole worlds instead
	// this example is a royal pain in the arse

	puts(text);

	return(0);
}

