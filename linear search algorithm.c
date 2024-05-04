#include<stdio.h>
int main ()
{
    int A[10],search,i,index,n;

   
    printf("enetr the size of the array ");
    scanf("%d",& n);

    for(i=0;i<n;i++)
    {
        printf("enter the numbers line wise");
        scanf("%d",&A[i]);
    }

    printf("enter the the number to find ");
    scanf("%d",& search);

    index = -1;


    for(i=0;i<n;i++)
        {
            if(A[i] == search)
            {
                index = i;
                break;  
            }
        }
    
    if (index == -1)
    {
        printf("the number is not availbale in the given array linear search");
    }
    else
    {
        printf("the number is found and %d",search);
        printf(" the position of the number is %d",i);
    }


    
    


}
