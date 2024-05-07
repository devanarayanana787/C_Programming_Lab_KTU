#include<stdio.h>

struct employ
{
    char name[30];
    int id;
    float salary;
};

int main()
{
    int i, n;
    struct employ e[30];
    
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        printf("Enter the name of the employee: ");
        scanf("%s",e[i].name); // Using scanf with a field width to avoid buffer overflow
        printf("Enter the employee id: ");
        scanf("%d", &e[i].id);
        printf("Enter the salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("Employee Details:\n");
    for(i = 0; i < n; i++)
    {
        printf("Employee name: %s\n", e[i].name);
        printf("Employee id: %d\n", e[i].id);
        printf("Employee salary: %.2f\n", e[i].salary);
    }

    return 0;
}
