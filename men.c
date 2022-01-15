#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include"cms.h"
#define MTSHIRTS 275
#define MSHIRTS 375
#define MJACKETS 475
#define MHOODIES 455
#define MJEANS 500
#define MSHORTS 175
#define MPANTS 375
#define MSHOES 455
#define MSLIPPERS 255
#define MFORMALSHOES 475
#define MBELTS 375
#define MWALLET 455
#define MWATCH 575

char cart[30][30];
//creating function for menswear
int menswear()
{
    int i,choice3,bill;
    printf("\t\tEnter which one you would like to see\n");
    printf("\t\t1.men topwear\n");
    printf("\t\t2.men bottomwear\n");
    printf("\t\t3.men footwear\n");
    printf("\t\t4.men accesories\n");
    printf("\t\t");
    scanf("%d",&choice3);
    if(choice3>4 || choice3<0)
    {
        printf("\t\tEnter valid choice\n");
    }
    return choice3;
}
//creating function for men's topwear
int motopwear(char mtopwear[4][10])
{
    int c1,i,bill=0,j;
    int n;
    int x=0;
    int ans;
    int amnt[30];
    int c=0;
    do
    {
        printf("\t\tEnter the index number of what you would like to buy in men's topwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\t\tEnter the no.of Tshirts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mtopwear[0]);
            x++;
            amnt[i]=MTSHIRTS*n;
            bill=bill+MTSHIRTS*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Shirts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mtopwear[1]);
            x++;
            amnt[i]=MSHIRTS*n;
            bill=bill+MSHIRTS*n;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Jackets you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mtopwear[2]);
            x++;
            amnt[i]=MJACKETS*n;
            bill=bill+MJACKETS*n;
        }
        else if(c1==4)
        {
            printf("\t\tEnter the no.of Hoodies you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mtopwear[3]);
            x++;
            amnt[i]=MHOODIES*n;
            bill=bill+MHOODIES*n;
        }
        else
        {
            printf("\t\tEnter valid index number \n");
        }
        printf("\t\tYour cart has:\n");
        for(j=0;j<=c;j++)
        {
            printf("\t\t%s\n",cart[j]);
        }
        x++;
        printf("\t\tDo you want to add more in men's topwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans==1);
        printbill(name,email,city,phone,cart,n,amnt);
        printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
        printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
        printf("\n\n\t\t\t --------------------------------------------\n");
}
//creating function for men's bottomwear
int mobottomwear(char mbottomwear[3][10])
{
    int c1,i,bill,j;
    int n;
    int x=0;
    int ans;
    int amnt[30];
    int c=0;
    do
    {
        printf("Enter the index number of what you would like to buy in men's topwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\t\tEnter the no.of Jeans you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mbottomwear[0]);
            x++;
            amnt[i]=MJEANS*n;
            bill=bill+MJEANS*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Shorts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mbottomwear[1]);
            x++;
            amnt[i]=MSHORTS*n;
            bill=bill+MSHORTS*n;
        }
        else if(c1==3)
        {
            printf("Enter the no.of Pants you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mbottomwear[2]);
            x++;
            amnt[i]=MPANTS*n;
            bill=bill+MPANTS*n;
        }
        else
        {
            printf("\t\tEnter valid index number \n");
        }
        printf("\t\tYour cart has:\n");
        for(j=0;j<=c;j++)
        {
            printf("\t\t%s\n",cart[j]);
        }
        c++;
        printf("\t\tDo you want to add more in men's bottomwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans==1);
        printbill(name,email,city,phone,cart,n,amnt);
        printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
        printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
        printf("\n\n\t\t\t --------------------------------------------\n");
}
//creating function for men's accessories
int moaccessories(char maccessories[3][10])
{
    int c1,i,bill,j;
    int n;
    int x=0;
    int ans;
    int amnt[30];
    int c=0;
    do
    {
        printf("\t\tEnter the number of what you would like to buy in women's topwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\t\tEnter the no.of Belts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],maccessories[0]);
            x++;
            amnt[i]=MBELTS*n;
            bill=bill+MBELTS*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Wallets you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],maccessories[1]);
            x++;
            amnt[i]=MWALLET*n;
            bill=bill+MWALLET*n;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Watches you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],maccessories[2]);
            x++;
            amnt[i]=MWATCH*n;
            bill=bill+MWATCH*n;
        }
        else
        {
            printf("\t\tEnter valid index number \n");
        }
        printf("\t\tYour cart has:\n");
        for(j=0;j<=c;j++)
        {
            printf("\t\t%s\n",cart[j]);
        }
        x++;
        printf("\t\tDo you want to add more in men's topwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans==1);
        printbill(name,email,city,phone,cart,n,amnt);
        printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
        printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
        printf("\n\n\t\t\t --------------------------------------------\n");
}
//creating function for men's footwear
int mofootwear(char mfootwear[4][10])
{
    int c1,i,bill,j;
    int n;
    int x=0;
    int ans;
    char cart[30][30]={};
    int amnt[30];
    int c=0;
    do
    {
        i=0;
        printf("\t\tEnter the number of what you would like to buy in men's topwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\t\tEnter the no.of Shoes you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mfootwear[0]);
            x++;
            amnt[i]=MSHOES*n;
            bill=bill+MSHOES;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Slippers you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mfootwear[1]);
            x++;
            amnt[i]=MSLIPPERS*n;
            bill=bill+MSLIPPERS;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Formal shoes you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mfootwear[2]);
            x++;
            amnt[i]=MFORMALSHOES*n;
            bill=bill+MFORMALSHOES;
        }
        else
        {
            printf("\t\tEnter valid index number \n");
        }
        c++;
        i++;
        int j;
        printf("\t\tYour cart has:\n");
        for(j=0;j<c;j++)
        {
            printf("\t\t%s\n",cart[j]);
        }
        printf("\t\tDo you want to add more in men's topwear?(1.yes / 2.no)\n");
        scanf("%d",&ans);
        }
        while(ans==1);
        printbill(name,email,city,phone,cart,n,amnt);
        printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
        printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
        printf("\n\n\t\t\t --------------------------------------------n");
}
