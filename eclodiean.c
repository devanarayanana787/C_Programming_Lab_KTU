#include<stdio.h>
struct Point
{
    float x;
    float y;
};
int main()
{
    struct Point p1,p2;
    printf("enter the p1 coordinates   ");
    scanf("%f%f",&p1.x,&p1.y);
    printf("enter the p2 coordinates   ");
    scanf("%f%f",&p2.x,&p2.y);

    printf("your coordinates is --- (%f,%f)" ,p1.x+p2.x,p1.y+p2.y);
}
