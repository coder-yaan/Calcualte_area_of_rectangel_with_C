#include <stdio.h>

void clear_input_buffer_m1()
{
    int input_buffer;
    while ((input_buffer = getchar()) != '\n' && input_buffer != EOF);
}

void clear_input_buffer_m2()
{
    int input_buffer;
    do
    {
        input_buffer = getchar();

    } while (input_buffer != '\n' && input_buffer != EOF);
}

int main()
{
    float area, len, width;
    int value;
    while (1)
    {
        printf("\n Enter the length of the rectangle : ");

        value = scanf("%f", &len);
        if (value != 1)
        {
            printf("\n Invalid input! Please enter a valid number \n");
            clear_input_buffer_m2();
        }
        else if (len == 0)
        {
            printf("\n Length of rectangle can't be zero, Please enter a positive number \n");
        }
        else if (len < 0)
        {
            printf("\n Length of rectangle can't be negative, Please enter a positive number \n");
        }
        else
        {
            break;
        }
    }
    while (1)
    {
        printf("\n Enter the width of the rectangle : ");
        value = scanf("%f", &width);
        if (value != 1)
        {
            printf("\n Invalid input! Please enter a valid number \n");
            clear_input_buffer_m2();
        }
        else if (width == 0)
        {
            printf("\n Width of rectangle can't be zero, Please enter a positive number \n");
        }
        else if (width < 0)
        {
            printf("\n Width of rectangle can't be negative, Please enter a positive number \n");
        }
        else
        {
            break;
        }
    }
    area = len*width;
    printf("\n The area of recrtangle is : %f \n", area);
    printf("\n Thanks for using this program \n");
    return 0;
}
