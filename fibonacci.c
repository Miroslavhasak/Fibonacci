#include <stdio.h>

int main()
{
    int k = 0, dalsie_cislo = 0, a = 0, b = 1;

    printf("Zadaj pocet cislo ktore chces vypisat: ");
    scanf("%d", &k);
    printf("Fibonacciho cisla su: %d, %d,", a, b);
    dalsie_cislo = a + b;

    for (; dalsie_cislo <= k;)

    {
        printf("%d, ", dalsie_cislo),
            a = b,
            b = dalsie_cislo,
            dalsie_cislo = a + b;
    }
    return 0;
}