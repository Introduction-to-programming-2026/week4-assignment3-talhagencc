// Draws a pyramid using iteration (without CS50)

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
    // Draw pyramid of height n
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}