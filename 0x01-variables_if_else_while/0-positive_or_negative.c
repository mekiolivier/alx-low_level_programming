#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */
int main(void)
{
<<<<<<< HEAD
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
=======

int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */

if (n > 0)

{

printf("%d is positive\n", n);

}

if (n < 0)

{

printf("%d is negative\n", n);

}

if (n == 0)

{

printf("%d is zero\n", n);

}

return (0);

>>>>>>> a8b818d06d2044446834b90e61acf1f12d30a92e
}
