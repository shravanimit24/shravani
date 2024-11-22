#include <stdio.h>
struct book
{
    int id;
    char bname[50];
    int qty;
    float rate, cost;
} b[5];
float tcost(int, float);
void display(struct book[]);
int main()
{
    int i;
    printf("enter book records :\n");
    for(i = 0; i < 5; i++)
    {
        printf("enter book name :\n");
scanf("%s", b[i].bname);
printf("enter book id :\n");
scanf("%d", &b[i].id);
printf("enter quantity :\n");
scanf("%d", &b[i].qty);
printf("enter rate :\n");
scanf("%f", &b[i].rate);
b[i].cost = tcost(b[i].qty, b[i].rate);

}
display(b);
}

float tcost(int q, float r)
{
    return(q * r);
}

void display(struct book b[])
{
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("book name is %s\n", b[i].bname);
        printf("book id is %d\n", b[i].id);
        printf("quantity is %d\n", b[i].qty);
        printf("rate is %f\n", b[i].rate);
        printf("total cost of the book is %f", b[i].cost);
        printf("\n");
    }
}
