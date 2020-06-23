#include <stdio.h>

int main()
{
    int choice;

    printf("Pick an integer (1, 2, 3): ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        puts("Red!");
        break;

    case 2:
        puts("Green");
        break;

    case 3:
        puts("Blue");
        break;
    default:
        puts("That's not a valid choice.");
    }
    return(0);
}
