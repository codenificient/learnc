#include <stdio.h>
#include  <string.h>

int main()
{
    char fname[20];
    char lname[20];
    char fullname[60];

    // user first name
    printf("Please type your first name: ");
    fgets(fname, 32, stdin);

    // user last name
    printf("Please type your last name: ");
    fgets(lname, 32, stdin);

    //user full name
    strcpy(fullname, fname);
    strcat(fullname, lname);

    // good manners
    printf("Nice to meet you %s", fullname);

    return(0);
}
