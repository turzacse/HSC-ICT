#include<stdio.h>
int main()
{
    int n, i, ans = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        ans = ans * i;
    }

    printf("The ans is = %d ", ans);
}
