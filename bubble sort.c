#include<stdio.h>
int main()
{
    int A[20],n,i,temp,j;
    printf("enter the size of the array ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      printf("enter the elements of the array ");
      scanf("%d",&A[i]);  
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

            }

        }
    }

    for(i=0;i<n;i++)
    {
      printf("%d\t", A[i]);
        
    }


    
}