#include<stdio.h>
float ansSeries(int i, int n, float s) 
{   

    if (i > n )
        return s;
    else 
    {
            s+= (float)1 / i;
        return ansSeries(i + 1, n, s);
    } 
}
int main()
{
    float number;
    scanf("%f", &number);
    float sum = ansSeries(1,number, 0);
    printf("%f\n", sum);
    return 0;
}