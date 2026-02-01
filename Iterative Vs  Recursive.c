#include<stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);  
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    int i = 0

    for (int i = 0; i < n - 1;  i++)
    {
        b = a + b;
        a = b - a;
    }

    return a;
    
}

int main()
{
    int number;

    printf("ENTER A NUB , THAT YOU WANT A FEBONACCI SERIRES : ");
    scanf("%d", &number);
    printf("\n");

    printf("THAT IS THE NUMBER YOU WANT %d TOO FIBONACCHI INDEX OF %d USING OF ITERATIVE\n", fib_iterative(number),number);
    printf("THAT IS THE NUMBER YOU WANT %d TOO FIBONACCHI INDEX OF %d USING OF RECURSIVE\n", fib_recursive(number),number);
    
    return 0;
}
