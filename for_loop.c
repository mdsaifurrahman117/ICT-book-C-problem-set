#include <stdio.h>
int main() {

// showing odd number, number given by user
/*          
            int i, n;
            printf ("enter a number : ");
            scanf ("%d", &n);
            for (i = 1; i <= n; i = i+2)
            {
                        printf ("odd number is %d \n", i);
            } 

            return 0;
*/

// showing even number, number is given by user
/*          
            int i, n;
            printf ("enter a number : ");
            scanf ("%d", &n);
            for ( i = 2; i <= n; i = i+2)
            {
                        printf ("even number is %d \n", i);
            } 

            return 0;
*/

// showing hello world 100 times 
/*
            int i;
            for ( i = 1; i <= 100; i++)
            {
                        printf ("Hello world %d \n", i);
            }

            return 0;
*/

// sum of the natural numebr. the last number of the serise is given by user

/*
            int i, n, sum = 0;
            printf ("enter the last number of the serise: ");
            scanf ("%d", &n);
            for ( i = 1; i <= n ; i = i+1)
            {
                        sum = sum + i;
            }
            printf ("sum of the serise is %d", sum);

            return 0;
*/

// sum of 1-100

/*
            int i, sum = 0;
            for ( i = 1; i <= 100; i = i + 1)
            {
                        sum = sum + i;
            }
            printf ("sum of 1 - 100 is %d", sum);

            return 0;
*/

// sum of the odd number. the last number of the serise is given by user

/*
            int i, n, sum = 0;
            printf ("enter last number of the serise : ");
            scanf ("%d", &n);
            for ( i = 1; i <= n; i = i + 2)
            {
                        sum = sum + i;
            }
            printf ("sum of the odd number is %d", sum);
            
            return 0;
*/

// sum of the even number. the last number of the serise is given by user

/*
            int i, n, sum = 0;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            for ( i = 2; i <= n; i = i + 2)
            {
                        sum = sum + i;
            }
            printf ("sum of the even number is  %d", sum);

            return 0;
*/

// sum of the natural number square, the last number of the serise is given by user

/*
            int i, n, sum;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            for ( i = 1; i <= n; i = i + 1)
            {
                        sum =  sum + i * i;
            }
            printf ("sum of the serise is %d", sum);
            
            return 0;
*/

// sum of the natural number mutiplication, the last number of the serise is given by user

/*
            int i = 1, n, sum = 1;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            for ( i = 1; i <= n; i = i + 1)
            {
                        sum = sum * i;
            }
            printf ("sum of the serise is %d", sum);

            return 0;
*/

// factirial of integer value, the integer value is given by user

/*
            int i, n, fact = 1;
            printf ("enter any integer value : ");
            scanf ("%d", &n);
            for ( i = 1; i <= n; i++)
            {
                        fact = fact * i;
            }
            printf ("the factorial of integer value is %d", fact);

            return 0;
*/
            
// greatest common divisor of two number, the number is given by user (Euclidean Algorithm Loop)

/*
            int a, b, num_1, num_2, temp, GCD;
            printf("enter first integer: ");
                        scanf("%d", &num_1);
            printf("enter second integer: ");
                        scanf("%d", &num_2);
            a = num_1;
            b = num_2;
            for (; b > 0; ) {
                        temp = b;
                        b = a % b;
                        a = temp;
            }
            GCD = a;
            printf("the greatest common divisor of %d and %d is %d\n", num_1, num_2, GCD);

            return 0;
*/

}
