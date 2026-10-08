#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);
    int i=1;
    int sum;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("The Sum Is : %d", sum);
    return 0;
}
