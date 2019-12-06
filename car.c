#include<stdio.h>
#define MAX_SIZE 3
struct car
{
    char company[20];
    double prize;
    double cc;
    char color[20];
};
int main()
{
    struct car c[MAX_SIZE]={{"maruti",500000,1500,"white"},
                            {"huyndai",550000,1700,"black"},
                            {"toyota",650000,2000,"red"}};
    display(c,3);
    return 0;
}
void display(struct car *p,int n)
{
    struct car *q=p;
    int i;
    for(i=0;i<MAX_SIZE;i++)
        {
            printf("%s\t%lf\t%lf\t%s\n",q->company,q->prize,q->cc,q->color);
            q++;
        }
}
