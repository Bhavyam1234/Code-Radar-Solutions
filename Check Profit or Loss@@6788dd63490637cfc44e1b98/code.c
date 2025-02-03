#include <stdio.h>

int main()
{
    int cost price;
    int selling price;
    scanf("%d",&cost price);
    scanf("%d",&selling price);
    if(cost price<selling price){
        printf("Profit");
    }
    else if(cost price>selling price){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;

}