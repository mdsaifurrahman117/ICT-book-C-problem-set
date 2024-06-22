#include <stdio.h>
int main() {

// showing odd number, number is given by user
/*
            int i, n;
            i = 1;
            printf ("enter a number : ");
            scanf ("%d", &n);
            while (i <= n)
            {
                        printf ("odd number is %d \n", i);
                        i = i + 2;
            } 

            return 0;
*/

//  showing even number, number is given by user
/*
            int i, n;
            i = 2;
            printf ("enter a number : ");
            scanf ("%d", &n);
            while (i <= n)
            {
                        printf ("even number is %d \n", i);
                        i = i + 2;
            }

            return 0;
*/

// showing hello world 100 times
/*
            int i = 1; 

            while (i <= 100) {
                        printf("Hello world %d\n", i); 
                        i++;  
            }

            return 0;
*/

// sum of the natural number. the last number of the serise is given by user

/*
            int i, n, sum = 0;
            i = 1;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            while (i <= n)
            {
                        sum = sum + i;
                        i = i + 1;
            }
            printf ("sum of the serise is %d", sum);

            return 0;
*/

// sum of 1 - 100

/*
            int i, sum = 0;
            i = 1;
            while (i <= 100)
            {
                        sum = sum + i;
                        i = i + 1;
            }
            printf ("sum of 1 - 100 is %d", sum);

            return 0;
*/

// sum of the odd number. the last number of the serise is given by user

/*
            int i, n, sum = 0;
            i = 1;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            while (i <= n)
            {
                        sum = sum + i;
                        i = i +2;
            }
            printf ("sum of the odd number is %d", sum);

            return 0;
*/

// sum of the even number. the last number of the serise is given by user

/*
            int i, n, sum = 0;
            i = 2;
            printf ("enter the last number of the serise : ");
            scanf ("%d", &n);
            while (i <= n)
            {
                        sum = sum +  i;
                        i = i + 2;
            }
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
            while (i <= n)
            {
                        sum = sum + i * i;
                        i ++;
            }
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
            while (i <= n)
            {
                        sum = sum * i;
                        i++;
            }
            printf ("sum of the serise is %d", sum);

            return 0;
*/
            
// factorial of integer value, the integer value is given by user 

/*
            int i, n, fact = 1;
            printf ("enter any integer value : ");
            scanf ("%d", &n);
            i = 1;
            while (i <= n)
            {
                        fact = fact * i;
                        i++;
            }
            printf ("the factorial of integer value is %d", fact);

            return 0;
*/

// greatest connom divisor of two number, the number is given by user

/*
            int a, b, num_1, num_2, temp, GCD;
            printf ("enter first number : ");
                        scanf ("%d", &num_1);
            printf ("enter second number : ");
                        scanf ("%d", &num_2);
            a = num_1;
            b = num_2;
            while (b != 0)
            {
                        temp = b;
                        b = a % b;
                        a = temp;
            }
            GCD = a;
            printf ("the greatest common divisor of %d and %d is %d", num_1, num_2, GCD);

            return 0;
*/


}