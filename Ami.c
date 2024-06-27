#include<stdio.h>
int DivisorsSum ( int N )
{
    int s = 0;
    for ( int i = 1; i <= N / 2; i++ )
        if ( N % i == 0 )
            s += i;
    return s;
}
int isAmicable ( int N, int n )
{
    if ( DivisorsSum ( N ) == n && DivisorsSum ( n ) == N )
        return 1;
    return 0;
}
void PrintDivisors ( N )
{
    printf("1 ");
    for ( int i = 2; i <= N / 2; i++ )
        if ( N % i == 0 )
            printf("- %d ", i);
}
int main()
{
    int N, n;
    printf(" Program to bla bla bla:\n Enter... number: ");
    scanf("%d", &N);
    printf(" Enter...: ");
    scanf("%d", &n);
    printf(" %d divisors are: ", N);
    PrintDivisors ( N );
    printf("\n the sum of %d dividors is: %d\n ", N, DivisorsSum ( N ));
    printf(" %d divisors are: ", n);
    PrintDivisors ( n );
    printf("\n the sum of %d divisors is: %d\n ", n, DivisorsSum ( n ));
    if ( isAmicable ( N, n ) )
        printf("so bla bla %d and %d are amicable", N, n);
    else
        printf("bla bla %d and %d ain't no amicable", N, n);    
    return 0;
}
