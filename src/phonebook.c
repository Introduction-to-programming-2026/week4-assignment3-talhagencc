// Implements a phone book without structs (without CS50)

#include <stdio.h>
#include <string.h>

int main(void)
{
    // Arrays of strings
    char *names[] = {"Kelly", "David", "John"};
    char *numbers[] = {"+1-617-495-1000", "+1-617-495-1000", "+1-949-468-2750"};

    char name[100];

    // Get input from user
    printf("Name: ");
    scanf("%99s", name);

    // Search for name
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}