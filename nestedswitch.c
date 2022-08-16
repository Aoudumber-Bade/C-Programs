/* WAP using nested swith case which covers the following opertors with expression:

        (a) Mathematical
        (b) Logical
        (c) Relational*/

#include <stdio.h>
void main()
{
    int choice;
    int a, b, c;
    int aChoice;
    int lchoice;
    int lChoice;

    printf("1.Arithmetic Operators\n2.Logical Operators\n3.Relational Operator\n",choice);

    printf("\nEnter Your Choice:\t");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nVALUES of a And b are 10 and 3 Respectively\n");

        printf("\nEnter Your Choice:\t");
        scanf("%d", &aChoice);

        printf("\nEnter Two Numbers:\t");
        scanf("%d%d", &a, &b);

        switch (aChoice)
        {
        case 1:
            c = a + b;
            printf("\nAdditon of a and b is %d", c);
            break;
        case 2:
            c = a - b;
            printf("\nSubstraction of a and b is %d", c);
            break;
        case 3:
            c = a * b;
            printf("\nMultiplication of a and b is %d", c);
            break;
        case 4:
            c = a / b;
            printf("\nDivision of a and b is %d", c);
            break;

        default:
            printf("\nPlease enter valid choice");
            break;
        }
        break;

    case 2:

        printf("\n1.Logical AND\n2.Logical OR\n3.Not Operator");
        printf("\nEnter Your Choice:\t");
        scanf("%d", &lchoice);

        switch (lchoice)
        {
            int Age;
            int salary;
            int age;

        case 1:
            printf("\nEnter Your Age:\t");
            scanf("%d", &Age);

            if (Age > 18 && Age < 50)
                printf("\n(AGE=%d)\nYou are eligible for this job\n", Age);
            break;

        case 2:
            printf("\nEnter Your Salary:\t");
            scanf("%d", &salary);

            if (salary < 5000 || salary > 2000)
                printf("\n(Salary=%d)\nThe job is Affordable\n", salary);
            break;

        case 3:

            printf("\nEnter Your Age:\t");
            scanf("%d", &age);

            if (age != 18 || age > 18)
                printf("(Age=%d)\nYou are eligible for vote\n", age);
            break;

        default:
            printf("Invalid Choice");
        }
        break;

    case 3: // Relational operator
        printf("1.Greater than operator\n2.Less than operator\n3.Greater than or equal operator\n4.Less than or equal operator\n");

        printf("\nEnter Your Choice:\t");
        scanf("%d", &lChoice);

        switch (lChoice)
        {
            int q;
            int aage;
            int A;
            int p;

        case 1: // greater than operator
            printf("\nEnter Your Age:\t");
            scanf("%d", &aage);

            if (aage > 18)
                printf("(Age=%d) You are eligible for having a driving licens", aage);
            break;
        case 2: // less than operator

            if (A < 18)
                printf("\nEnter Your Age:\t");
            scanf("%d", &A);
            printf("(Age=%d) You are not eligible for having a driving licens", A);
            break;
        case 3: // greater than equal to

            printf("\nEnter Your Age:\t");
            scanf("%d", &p);
            if (p >= 18)
                printf("(Age=%d) You are eligible for having a driving licens", p);
            break;

        case 4: // less than or equal to
            printf("\nEnter Your Age:\t");
            scanf("%d", &q);

            if (q <= 18)
                printf("(Age=%d) You are not eligible for having a driving licens", q);
            break;
        default:
            printf("Please enter right choice");
        }
        break;
    default:
        printf("Please enter right choice");
    }
}
