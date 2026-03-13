/*
WEEK 1 — TASK 5 (Structs - Phonebook)

Goal:
Practice structs and arrays.

Task:
1. Create a struct Person with:
   - string name
   - string phone
2. Create an array of persons (size 5 or 10).
3. Ask the user for a name.
4. If found, print the phone number.
5. If not found, print "Not found".

Bonus (optional):
Allow the user to add a new contact.

Rules:
- You must use struct.
- Use strcmp() to compare names.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Arrays of strings
    char names[3][20] = {"Kelly", "David", "John"};
    char numbers[3][20] = {"+1-617-495-1000", "+1-617-495-1000", "+1-949-468-2750"};

    // Search for name
    char name[20];
    printf("Name: ");
    scanf("%19s", name); // CS50 get_string yerine

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