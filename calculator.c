#include <stdio.h>

void add();
void sub();
void div();
void mul();

int main()
{
    int n;
    printf("1. add       2. sub\n");
    printf("3. div       4. mul\n");
    printf("Enter your choice: ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            div();
            break;
        case 4:
            mul();
            break;
        default:
            printf("Wrong option\n");
    }

    return 0;
}

void add()
{
    int a, b, sum;

    printf("Enter two numbers to be added: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

   printf("The result is: %d\n", sum);
}

void sub()
{
   int a, b, diff;

   printf("Enter two numbers for subtraction: ");
   scanf("%d %d", &a, &b);

   diff = a - b;

   printf("Result: %d\n", diff);
}

void div()
{
   int a, b;
   int quotient;

   printf("Enter dividend and divisor: ");
   scanf("%d%d", &a, &b);

   if (b != 0)
   {
      quotient = a / b;
      printf("Quotient: %d\n", quotient);
   }
   else
   {
      printf("Division by zero is not defined\n");
   }
}

void mul()
{
     int a, b, product;

     printf("Enter two numbers for multiplication: ");
     scanf("%d %d", &a, &b);

     product = a * b;

     printf("Result: %d\n", product);
}