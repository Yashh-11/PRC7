#include <stdio.h>

void calc()
{
    int choice;
    do
    {
        int number1, number2;
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for Remaider of Division \n");
        printf("Press 0 to exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            printf("You are Exit !!\n");
            break;

        case 1:
            printf("Enter the first number:");
            scanf("%d", &number1);
            printf("Enter the second number: ");
            scanf("%d", &number2);
            printf("\nAddition of %d and %d is: %d\n", number1, number2, number1 + number2);
            break;

        case 2:
            printf("Enter the first number:");
            scanf("%d", &number1);
            printf("Enter the second number: ");
            scanf("%d", &number2);
            printf("\nSubraction of %d and %d is: %d\n", number1, number2, number1 - number2);
            break;

        case 3:
            printf("Enter the first number:");
            scanf("%d", &number1);
            printf("Enter the second number: ");
            scanf("%d", &number2);
            printf("\nMultiplication of %d and %d is: %d\n", number1, number2, number1 * number2);
            break;

        case 4:

            printf("Enter the first number:");
            scanf("%d", &number1);
            printf("Enter the second number: ");
            scanf("%d", &number2);
            printf("\nDivision of %d and %d is: %d\n", number1, number2, number1 / number2);
            break;

        case 5:

            printf("Enter the first number:");
            scanf("%d", &number1);
            printf("Enter the second number: ");
            scanf("%d", &number2);
            printf("\nModulus of %d and %d is: %d\n", number1, number2, number1 % number2);
            break;

        default:
            printf("Wrong input");
            break;
        }
    } while (choice != 0);
}

int main()
{

    calc();
    return 0;
}