#include <stdio.h>
int main()
{
	int arr[5][5];
	int i,j,r=5,c=3;
	int sum,product,best_marks;
	for(i=0;i< r;i++)
	{
        sum=0;
         best_marks = arr[0][0];
		for(j=0;j< c;j++)
		{
			printf("Enter For student_Subject [%d,%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]); //input marks by students
		    sum+=arr[i][j];//sum of marks
            if(best_marks<arr[i][j]){ // find out best marks 
                best_marks = arr[i][j];
            }
        }
           printf("SUM of every subject marks is : %d \n",sum);
           printf("Best Marks is : %d\n", best_marks);
	}
   
	return 0;	
}