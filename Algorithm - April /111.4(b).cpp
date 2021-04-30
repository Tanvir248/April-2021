#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0;
    int i;
    scanf("%[^\n]s",str);
 
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            count++;
            }
    }
 
    printf("Total Small Letter: %d\n",count);
 
    return 0;
}