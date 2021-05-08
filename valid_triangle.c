#include <stdio.h>
#include <cs50.h>

// Declaration of function
bool valid_triangle (float a, float b, float c);

int main (void)
{
    // Enter the values of the sides of the triangle
    float a = get_float("Enter the first side: ");
    float b = get_float("Enter the second side: ");
    float c = get_float("Enter the third side: ");

    //Calling function
    bool result = valid_triangle (a, b, c);
// 1 means true && 0 means false
    printf("%d\n", result);
}

//Defining function
bool valid_triangle (float a, float b, float c)
{
    // If the sum of two sides are greater than the third for all cases then return true
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("The triangle is valid: ");
        return true;
    }
    else
    {
        printf("The triangle is not valid: ");
        return false;
    }
}