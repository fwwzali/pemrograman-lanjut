#include <stdio.h>

//definisi fungsi perkalian non-rekursif
void pangkat(int number1, int number2, int *result)
{
    for (int i = number2; i > 0; i--)
    {
        *result = *result * number1;
    }
}

int main()
{
    int a = 3, b = 3, result = 1;
    int *res = &result;
    pangkat(a, b, res);
    printf("perkalian dari %d dan %d adalah %d\n", a, b, result);
}