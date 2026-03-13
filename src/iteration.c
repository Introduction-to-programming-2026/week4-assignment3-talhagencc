/*
WEEK 1 — TASK 1 (Iteration)

Goal:
Practice loops and input validation.

Task:
1. Ask the user for a positive integer n.
2. If n < 1, ask again until valid.
3. Print a half-pyramid using # symbols.

Example:
Input: 4

Output:
#
##
###
####

Rules:
- You must use loops (for or while).
- No recursion allowed.
- Output must match exactly.
*/
#include <stdio.h>

int main(void)
{
    int number;

    // Get number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop number of times
    for (int i = 0; i < number; i++)
    {
        printf("Hello %d\n", i + 1);
    }

    return 0;
}
