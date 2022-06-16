#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row , i, j, k;
    printf("Enter the number of rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
            {
                printf(" ");
            }

    for(k=i;k<=row;k++)
        {
         printf("*");
        printf(" ");

}

    printf("\n");//next line

}
for (i=row-1; i>=1; i--)
    {
        for(j=1;j<=i; j++)
            {
        printf(" ");
        }


for (k=i; k<=row; k++)
{
    printf("*");
    printf(" ");
}
    printf("\n");
}
getch();
}


















