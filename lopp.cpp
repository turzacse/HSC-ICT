//1 + 2 + 3 + ..................

#include<stdio.h>
int main ()
{
    int n, sum =0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    /* FOR LOOP
    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    */

    /* WHILE LOOP
    int i = 1;
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    */

    int i = 1;
    do {
        sum = sum + i;
        i++;
    }
    while(i <= n);
    printf("the ans is = %d", sum);
}
