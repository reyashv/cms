#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include"cms.h"
enum mtype
{
    MTSHIRTS,
    MSHIRTS,
    MJACKETS,
    MHOODIES,
    MJEANS,
    MSHORTS,
    MPANTS,
    MBELTS,
    MWALLETS,
    MWATCHES,
    MSHOES,
    MSLIPPERS,
    MFORMALSHOES
};
int mcost[13]={275,375,475,455,500,175,375,455,255,475,375,455,575};
int mstocks[13]={10,10,10,10,10,10,10,10,10,10,10,10,10};
char cart[30][30];
int count[30]={0};
extern struct billentry Items[20];
extern int numItems;

//creating function for menswear
int menswear()
{
    int i,choice3;
    do
    {
        printf("\t\t1.Mens topwear\n");
        printf("\t\t2.Mens bottomwear\n");
        printf("\t\t3.Mens accessories\n");
        printf("\t\t4.Mens footwear\n");
        printf("\t\t5.Go back to previous menu\n");
        printf("\t\tEnter which one you would like to see ");
        scanf("%d",&choice3);
    }
    while(choice3>6);
    return choice3;
}
//creating function for men's topwear
int motopwear(char mtopwear[4][10])
{
    int c1,i=0,bill=0,j;
    int n;
    int x=0;
    int ans;
    int amnt[30];
    int c=0;
    do
    {
        printf("\n");
        printf("\t\tEnter the index number of what you would like to buy in men's topwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            if(mstocks[MTSHIRTS]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Tshirts you want to buy:");
                scanf("%d",&n);
                if (mstocks[MTSHIRTS]-n > 0)
                {
                    mstocks[MTSHIRTS]-=n;
                }
                else
                {
                    printf("Only %d Tshirts is available, will add this in cart\n",mstocks[MTSHIRTS]);
                    n=mstocks[MTSHIRTS];
                    mstocks[MTSHIRTS]=0;
                }
                strcpy(cart[c],mtopwear[0]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MTSHIRTS]*n;
                strcpy(Items[numItems].itemname,"Men Tshirts");
            }
            else
                printf("No Stock available\n");
        }
        else if(c1==2)
        {
            if(mstocks[MSHIRTS]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Shirts you want to buy:");
                scanf("%d",&n);
                if (mstocks[MSHIRTS]-n > 0)
                {
                    mstocks[MSHIRTS]-=n;
                }
                else
                {
                    printf("Only %d Shirts is available, will add this in cart\n",mstocks[MSHIRTS]);
                    n=mstocks[MSHIRTS];
                    mstocks[MSHIRTS]=0;
                }
                strcpy(cart[c],mtopwear[1]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MSHIRTS]*n;
                strcpy(Items[numItems].itemname,"Men Shirts");
            }
            else
                printf("No Stock available\n");;
        }
        else if(c1==3)
        {
            if(mstocks[MJACKETS]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Jackets you want to buy:");
                scanf("%d",&n);
                if (mstocks[MJACKETS]-n > 0)
                {
                    mstocks[MJACKETS]-=n;
                }
                else
                {
                    printf("Only %d Jackets is available, will add this in cart\n",mstocks[MJACKETS]);
                    n=mstocks[MJACKETS];
                    mstocks[MJACKETS]=0;
                }
                strcpy(cart[c],mtopwear[2]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MJACKETS]*n;
                strcpy(Items[numItems].itemname,"Men Jackets");
            }
            else
                printf("No Stock available\n");
        }
        else if(c1==4)
        {
            if(mstocks[MHOODIES]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Hoodies you want to buy:");
                scanf("%d",&n);
                if (mstocks[MHOODIES]-n > 0)
                {
                    mstocks[MHOODIES]-=n;
                }
                else
                {
                    printf("Only %d Hoodies is available, will add this in cart\n",mstocks[MHOODIES]);
                    n=mstocks[MHOODIES];
                    mstocks[MHOODIES]=0;
                }
                strcpy(cart[c],mtopwear[3]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MHOODIES]*n;
                strcpy(Items[numItems].itemname,"Men Hoodies");
            }
            else
                printf("No Stock available\n");
        }
        else
        {
            printf("\n");
            printf("\t\tEnter valid index number \n");
        }
        printf("\n");
        printf("\t\tYour cart has:\n");
        for(j=0;j<=c;j++)
        {
            printf("\t\t %s - Qty : %d",cart[j],count[j]);
            printf("\n");
        }
        c++;
        printf("\n");
        printf("\t\tDo you want to add more in men's topwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans==1);
        printbill(name,email,city,phone);
}
//creating function for men's bottomwear
int mobottomwear(char mbottomwear[3][10])
{
    int c1,i=0,bill=0,j;
    int n;
    int x=0;
    int ans;
    int amnt[30];
    int c=0;
    do
    {
        printf("\n");
        printf("Enter the index number of what you would like to buy in men's bottomwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            if(mstocks[MJEANS]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Jeans you want to buy:");
                scanf("%d",&n);
                if (mstocks[MJEANS]-n > 0)
                {
                    mstocks[MJEANS]-=n;
                }
                else
                {
                    printf("Only %d Jeans is available, will add this in cart\n",mstocks[MJEANS]);
                    n=mstocks[MJEANS];
                    mstocks[MJEANS]=0;
                }
                strcpy(cart[c],mbottomwear[0]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MJEANS]*n;
                strcpy(Items[numItems].itemname,"Men Jeans");
            }
            else
                printf("No Stock available\n");
        }
        else if(c1==2)
        {
            if(mstocks[MSHORTS]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Shorts you want to buy:");
                scanf("%d",&n);
                if (mstocks[MSHORTS]-n > 0)
                {
                    mstocks[MSHORTS]-=n;
                }
                else
                {
                    printf("Only %d Shorts is available, will add this in cart\n",mstocks[MSHORTS]);
                    n=mstocks[MSHORTS];
                    mstocks[MSHORTS]=0;
                }
                strcpy(cart[c],mbottomwear[1]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MSHORTS]*n;
                strcpy(Items[numItems].itemname,"Men Shorts");
            }
            else
                printf("No Stock available\n");
        }
        else if(c1==3)
        {
            if(mstocks[MPANTS]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Pants you want to buy:");
                scanf("%d",&n);
                if (mstocks[MPANTS]-n > 0)
                {
                    mstocks[MPANTS]-=n;
                }
                else
                {
                    printf("Only %d Pants is available, will add this in cart\n",mstocks[MPANTS]);
                    n=mstocks[MPANTS];
                    mstocks[MPANTS]=0;
                }
                strcpy(cart[c],mbottomwear[2]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MPANTS]*n;
                strcpy(Items[numItems].itemname,"Men Pants");
            }
            else
                printf("No Stock available\n");
        }
        else
        {
            printf("\n");
            printf("\t\tEnter valid index number \n");
        }
        printf("\t\tYour cart has:\n");
        for(j=0;j<=c;j++)
        {
            printf("\t\t%s",cart[j]);
            printf("\n");
        }
        c++;
        printf("\n");
        printf("\t\tDo you want to add more in men's bottomwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans==1);
        printbill(name,email,city,phone);
}
//creating function for men's accessories
int moaccessories(char maccessories[3][10])
{
    int c1,i=0,bill=0,j;
    int n;
    int x=0;
    int ans;
    int amnt[30];
    int c=0;
    do
    {
        printf("\n");
        printf("\t\tEnter the number of what you would like to buy in men's accessories\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            if(mstocks[MBELTS]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Belts you want to buy:");
                scanf("%d",&n);
                if (mstocks[MBELTS]-n > 0)
                {
                    mstocks[MBELTS]-=n;
                }
                else
                {
                    printf("Only %d Belts is available, will add this in cart\n",mstocks[MBELTS]);
                    n=mstocks[MBELTS];
                    mstocks[MBELTS]=0;
                }
                strcpy(cart[c],maccessories[0]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MBELTS]*n;
                strcpy(Items[numItems].itemname,"Men Belts");
            }
            else
                printf("No Stock available\n");
        }
        else if(c1==2)
        {
            if(mstocks[MWALLETS]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Wallets you want to buy:");
                scanf("%d",&n);
                if (mstocks[MWALLETS]-n > 0)
                {
                    mstocks[MWALLETS]-=n;
                }
                else
                {
                    printf("Only %d Wallets is available, will add this in cart\n",mstocks[MWALLETS]);
                    n=mstocks[MWALLETS];
                    mstocks[MWALLETS]=0;
                }
                strcpy(cart[c],maccessories[1]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MWALLETS]*n;
                strcpy(Items[numItems].itemname,"Men Wallets");
            }
            else
                printf("No Stock available\n");
        }
        else if(c1==3)
        {
            if(mstocks[MWATCHES]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Watches you want to buy:");
                scanf("%d",&n);
                if (mstocks[MWATCHES]-n > 0)
                {
                    mstocks[MWATCHES]-=n;
                }
                else
                {
                    printf("Only %d Watches is available, will add this in cart\n",mstocks[MWATCHES]);
                    n=mstocks[MWATCHES];
                    mstocks[MWATCHES]=0;
                }
                strcpy(cart[c],maccessories[2]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MWATCHES]*n;
                strcpy(Items[numItems].itemname,"Men Watches");
            }
            else
                printf("No Stock available\n");
        }
        else
        {
            printf("\n");
            printf("\t\tEnter valid index number \n");
        }
        printf("\t\tYour cart has:\n");
        for(j=0;j<=c;j++)
        {
            printf("\t\t%s",cart[j]);
            printf("\n");
        }
        c++;
        printf("\n");
        printf("\t\tDo you want to add more in men's accessories?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans==1);
        printbill(name,email,city,phone,cart,n,amnt);
}
//creating function for men's footwear
int mofootwear(char mfootwear[4][10])
{
    int c1,i=0,bill=0,j;
    int n;
    int x=0;
    int ans;
    char cart[30][30]={};
    int amnt[30];
    int c=0;
    do
    {
        i=0;
        printf("\n");
        printf("\t\tEnter the number of what you would like to buy in men's footwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            if(mstocks[MSHOES]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Shoes you want to buy:");
                scanf("%d",&n);
                if (mstocks[MSHOES]-n > 0)
                {
                    mstocks[MSHOES]-=n;
                }
                else
                {
                    printf("Only %d Shoes is available, will add this in cart\n",mstocks[MSHOES]);
                    n=mstocks[MSHOES];
                    mstocks[MSHOES]=0;
                }
                strcpy(cart[c],mfootwear[0]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MSHOES]*n;
                strcpy(Items[numItems].itemname,"Men Shoes");
            }
            else
                printf("No Stock available\n");
        }
        else if(c1==2)
        {
            if(mstocks[MSLIPPERS]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Slippers you want to buy:");
                scanf("%d",&n);
                if (mstocks[MSLIPPERS]-n > 0)
                {
                    mstocks[MSLIPPERS]-=n;
                }
                else
                {
                    printf("Only %d Slippers is available, will add this in cart\n",mstocks[MSLIPPERS]);
                    n=mstocks[MSLIPPERS];
                    mstocks[MSLIPPERS]=0;
                }
                strcpy(cart[c],mfootwear[1]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MSLIPPERS]*n;
                strcpy(Items[numItems].itemname,"Men Slippers");
            }
            else
                printf("No Stock available\n");
        }
        else if(c1==3)
        {
            if(mstocks[MFORMALSHOES]>0)
            {
                printf("\n");
                printf("\t\tEnter the no.of Formal shoes you want to buy:");
                scanf("%d",&n);
                if (mstocks[MFORMALSHOES]-n > 0)
                {
                    mstocks[MFORMALSHOES]-=n;
                }
                else
                {
                    printf("Only %d Formal shoes is available, will add this in cart\n",mstocks[MFORMALSHOES]);
                    n=mstocks[MFORMALSHOES];
                    mstocks[MFORMALSHOES]=0;
                }
                strcpy(cart[c],mfootwear[2]);
                count[c]=n;
                x++;
                numItems++;
                Items[numItems].quantity = n;
                Items[numItems].cost=mcost[MFORMALSHOES]*n;
                strcpy(Items[numItems].itemname,"Men Formal shoes");
            }
            else
                printf("No Stock available\n");
        }
        else
        {
            printf("\n");
            printf("\t\tEnter valid index number \n");
        }
        c++;
        int j;
        printf("\n");
        printf("\t\tYour cart has:\n");
        for(j=0;j<c;j++)
        {
            printf("\t\t%s",cart[j]);
            printf("\n");
        }
        printf("\n");
        printf("\t\tDo you want to add more in men's footwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }
        while(ans==1);
        printbill(name,email,city,phone,cart,n,amnt);
}
