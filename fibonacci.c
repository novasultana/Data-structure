
#include <stdio.h>
int fib(int n)
{
    if(n==0)
        return 0;
	else if (n == 1)
		return 1;
    else
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	int i;
	printf("The fibonacci series of %d is:\n");
	for(i=0;i<=n;i++)
    {
        printf("%d ", fib(i));

    }
	return 0;
}
