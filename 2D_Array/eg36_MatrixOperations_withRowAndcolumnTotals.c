#include <stdio.h>
#include <stdlib.h>
int main()
{
/*
int rows, columns;
int i,j;
printf("Enter the number of row: ");
scanf("%d",&rows);
printf("Enter the number of columns: ");
scanf("%d",&columns);

int* p2d = (int*)malloc(sizeof(int)*rows*columns);
if(p2d == NULL)
{
printf("Cannot allocate memory\n");
return 0;
}
*/

int choice;
int rows = 3;
int columns = 3;
int arr[rows][columns];
int i,j;
do
{
printf("Accept input: 1\n");
printf("Print matrix: 2\n");
printf("Transpose matrix: 3\n");
printf("Quit: 4\n");
printf("Enter your choice (1-4): ");
scanf("%d",&choice);

if(choice == 1)
{
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
scanf("%d",&arr[i][j]);
}
}
}

else if(choice == 2)
{
int columnTotals[columns];
for(i=0;i<columns;i++) columnTotals[i] = 0;
for(i=0;i<rows;i++)
{
int rowTotal = 0;
for(j=0;j<columns;j++)
{
printf("%5d  ",arr[i][j]);
rowTotal += arr[i][j];
columnTotals[j] += arr[i][j];
}
printf("%5d",rowTotal);
printf("\n");
}

for(i=0;i<columns;i++) printf("%5d  ",columnTotals[i]);
printf("\n");
}

else if(choice == 3)
{
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
if(i>=j)
{
int temp = arr[i][j];
arr[i][j] = arr[j][i];
arr[j][i] = temp;
}
}
}
}

else if(choice !=4)
{
printf("Invalid choice: choose a number b/w 1 and 4\n\n");
}

}while(choice!=4);


return 0;
}
