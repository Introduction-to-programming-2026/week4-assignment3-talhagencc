// Draws a pyramid using recursion (without CS50)

#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;

    // Get height of pyramid
    printf("Height: ");
    scanf("%d", &height);

    // Draw pyramid
    draw(height);

    return 0;
}

void draw(int n)
{
    // If nothing to draw
    if (n <= 0)
    {
        return;
    }

    // Draw pyramid of height n - 1
    draw(n - 1);

    // Draw one more row of width n
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}