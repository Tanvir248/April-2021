#include<stdio.h>
int main(){
    int length =0;
    int i;
     char c[5] ={'T','o','m','a'};
    for ( i = 0; c[i] != '\0'; i++)
    {
        length++;
    }
    printf("%d\n",length);
    return 0;
}