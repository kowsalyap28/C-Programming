# include <stdio.h>
int main()
{
    int quantity_of_items,price_per_item,total_amount;
    scanf("%d %d",&quantity_of_items,&price_per_item);
    total_amount=quantity_of_items*price_per_item;
    float cost,discount;
    if(quantity_of_items==0||price_per_item==0)
    {
        printf("invalid input");
    }
    else if(total_amount<6000)
    {
        printf("cost=%d",total_amount);
    }
    else if (total_amount>=6000)
    {
        discount=total_amount*0.20;
        cost =total_amount-discount;
        printf("cost=%.2f",cost);
    }
    else 
    {
        printf("invalid input");
    }
    return 0;
}