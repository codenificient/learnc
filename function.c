#include <stdio.h>

void blorf(void); // prototype statement for function blorf which comes later in the code
// since we call blorf inside main() before defining it in line 15, we use the statement to
// introduce it to the program

int main()
{
    puts("The main() function always runs first");
    blorf();
    puts("Thanks, blorf()");

    return(0);
}
void blorf(void)
{
    puts("The blorf() function runs when it is called");
}
