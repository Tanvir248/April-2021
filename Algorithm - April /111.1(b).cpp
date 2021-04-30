/*
Wrong Code...
#include<stdio.h>
main()
{
int *ptr[4];
int num[4] = {100,19,-80,17};
int i,j, large;
for(i=0;i<4;i++)
ptr[i]=&num[i];
for(i=0;i<4;i++)
{
for(j=i;j<4;j++)
{
if(*ptr[i] < *ptr[j])
{
large = *ptr[i];
*ptr[i]=*ptr[j];
*ptr[j]=large;
}
}
}
for(i=0;i<4;i++)
printf("%d ", *ptr[i]); }
 This program has just one eror. I see here before main funcion.Fixed it.
 this program is create for sort number by assendig order. Now I fixed this
 code eror and explain this code.
 */
#include<stdio.h>
int main() //add "int" Before main function...
{
int *ptr[4]; //declare pointer type array.
int num[4] = {100,19,-80,17}; //declare a array.
int i,j, large;
for(i=0;i<4;i++) //this loop for make pointer array value = array value;
ptr[i]=&num[i];
for(i=0;i<4;i++) //creating a nasted loop...
{
for(j=i;j<4;j++)
{
if(*ptr[i] < *ptr[j]) //condition for find out big number then before number.
{ //swaping find out number
large = *ptr[i];
*ptr[i]=*ptr[j];
*ptr[j]=large;
}
}
}
for(i=0;i<4;i++) //Print sorted number
printf("%d ", *ptr[i]); 

return 0;
}/*
  intput : 100,19,-80,17
  output : 100 19 17 -80
 Expain logic output :
    Nested loop : for the i loop this loop move one time. this time j loop 
    move 4 times that why by condition i1 = 100 this time j move 4 time and 
    compre all the number with 100 for the condition. and then it compare decreasely
    (4-1) time:
    For Loop i : 100
compare Loop j : 100 with i : 100
compare Loop j : 19 with i : 100
compare Loop j : -80 with i : 100
compare Loop j : 17 with i : 100
For Loop i : 19
compare Loop j : 19 with i : 19
compare Loop j : -80 with i : 19
compare Loop j : 17 with i : 19
For Loop i : -80
compare Loop j : -80 with i : -80
compare Loop j : 17 with i : -80
For Loop i : -80
compare Loop j : -80 with i : -80

    this two loop and this condition done it with all the number.
Swap :
    this swap system is swap selected number and bring it to front. he did 
    it Not as long this two loop done this work.
Print Loop :
    Here print loop print 4 sorted number of array becuse if here we just print
    this time all the element can't be printed out.so, we use loop for print all 
    array element. 
*/