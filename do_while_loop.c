#include <stdio.h>
int main() {

// showing odd number, number is given by user
/*
            int i, n;
            i = 1;
            printf ("enter a number : ");
            scanf ("%d,", &n);
            do
            {
                        printf("odd number is %d \n", i);
                        i = i + 2;
            } while (i <= n);
            
            return 0;
*/

// showing even number, number is given by user
/*
            int i, n;
            i = 2;
            printf ("enter a number : ");
            scanf ("%d", &n);
            do
            {
                        printf ("even number is %d \n", i);
                        i = i + 2;
            } while (i <= n);

            return 0;
*/

// showing hello world 100 times
/*
            int i = 1;
            do
            {
                        printf ("hello world %d \n", i);
                        i++;
            } while (i <= 100);

            return 0;
*/

// sum the of natural number. the last number of the serise is given by user

/*
            int i, n, sum = 0;
            i = 1;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            do
            {
                        sum = sum + i;
                        i = i + 1;

            } while (i <= n);
            printf ("sum of the serise is %d", sum);

            return 0;
*/

// sum of 1 - 100

/*
            int i, sum = 0;
            i = 1;
            do
            {
                        sum = sum + i;
                        i = i + 1;
                        
            } while (i <= 100);
            
            printf ("sum of 1 - 100 is %d", sum);

            return 0;
*/
            
// sum of the odd number, the last number of the serise is given by user

/*
            int i, n, sum = 0;
            i = 1;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            do
            {
                        sum = sum + i;
                        i = i + 2;
            } while (i <= n);
            printf ("sum of the odd number is %d", sum);

            return 0;
*/

// sum of the even number. the last number of the serise is given by user

/*
            int i, n, sum = 0;
            i = 2;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            do
            {
                        sum = sum + i;
                        i = i + 2;
            } while (i <= n);
            printf ("sum of the even number is %d", sum);

            return 0;
*/
            
// sum of the natural number square, the last number of the serise is given by user

/*
            int i, n, sum;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            i = 1;
            sum = 0;
            do
            {
                        sum = sum + i * i;
                        i++;
            } while (i <= n);
            printf ("sum of the serise is %d", sum);

            return 0;
*/

// sum of the natural number multiplication, the last number of the serise is given by user

/* 
            int i, n, sum;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            i = 1;
            sum = 1;
            do
            {
                        sum = sum * i;
                        i++;
            } while (i <= n);
            printf ("sum of the serise is %d", sum);

            return 0;
*/
            
// factorial of integer value, the integer value is given by user

/*
            int i, n, fact = 1;
            printf ("ente any integer value : ");
            scanf ("%d", &n);
            i = 1;
            do
            {
                        fact = fact * i;
                        i++;
            } while (i <= n);
            printf ("the factorial of integer value is %d", fact);

            return 0;
*/

// greatest common divisor of two number, the number is given by user

/*
            int a, b, num_1, num_2, temp, GCD;
            printf ("enter first number : ");
                        scanf ("%d", &num_1);
            printf ("enter second number : ");
                        scanf ("%d", &num_2);
            a = num_1;
            b = num_2;
            do
            {
                        temp = b;
                        b = a % b;
                        a = temp;
            } while (b != 0);
            GCD = a;
            printf ("the greatest common divisor of %d and %d is %d", num_1, num_2, GCD);

            return 0;
*/




}