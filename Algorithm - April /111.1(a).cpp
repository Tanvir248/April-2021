/*/Wrong code
#include<stdio.h>
main()
{
char string[20]="Dept. of CSE, BUBT";
int m;
for(m=2; m<=10; m++)
if((m%2)==0)
printf("%c",string[m]);
}*/
/*in this code we see a syntax eror on berfore decleare main function.
and then wee see here some logic errors. that's mainly in loop int this 
program string has 18 element(including space) and the code want to print
odd element of this string but here this program loop is started from m =2;
so that this program can't give exact output so I write down here right code. 
*/
#include<stdio.h>
int main()
{
char string[20]="Dept. of CSE, BUBT";
int m;
for(m=0; m<=18; m++){
if((m%2)==0){
printf("%c\n",string[m]);

}
}
return 0;
}
/*output is:  "Dp.o S,BB ". this output show because this program print every m%2
elements so. I write the proper work for this code.
When m = 0 This time string is: D
When m = 2 This time string is: p
When m = 4 This time string is: .
When m = 6 This time string is: o
When m = 8 This time string is:  (space)
When m = 10 This time string is: S
When m = 12 This time string is: ,
When m = 14 This time string is: B
When m = 16 This time string is: B
When m = 18 This time string is: (space)
*/ 