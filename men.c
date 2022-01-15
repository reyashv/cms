#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include"cms.h"

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
    int rate[30];
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
            rate[i]=250;
            amnt[i]=rate[i]*n;
            bill=bill+250*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Shirts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mtopwear[1]);
            x++;
            rate[i]=275;
            amnt[i]=rate[i]*n;
            bill=bill+275*n;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Jackets you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mtopwear[2]);
            x++;
            rate[i]=350;
            amnt[i]=rate[i]*n;
            bill=bill+350*n;
        }
        else if(c1==4)
        {
            printf("\t\tEnter the no.of Hoodies you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mtopwear[3]);
            x++;
            rate[i]=400;
            amnt[i]=rate[i]*n;
            bill=bill+400*n;
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
        }while(ans!=2);
        printbill(name,email,city,phone,cart,rate,n,amnt);
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
    int rate[30];
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
            rate[i]=500;
            amnt[i]=rate[i]*n;
            bill=bill+500*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Shorts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mbottomwear[1]);
            x++;
            rate[i]=250;
            amnt[i]=rate[i]*n;
            bill=bill+250*n;
        }
        else if(c1==3)
        {
            printf("Enter the no.of Pants you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mbottomwear[2]);
            x++;
            rate[i]=300;
            amnt[i]=rate[i]*n;
            bill=bill+300*n;
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
        }while(ans!=2);
        printbill(name,email,city,phone,cart,rate,n,amnt);
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
    int rate[30];
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
            rate[i]=200;
            amnt[i]=rate[i]*n;
            bill=bill+200*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Wallets you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],maccessories[1]);
            x++;
            rate[i]=350;
            amnt[i]=rate[i]*n;
            bill=bill+350*n;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Watches you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],maccessories[2]);
            x++;
            rate[i]=400;
            amnt[i]=rate[i]*n;
            bill=bill+400*n;
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
        }while(ans!=2);
        printbill(name,email,city,phone,cart,rate,n,amnt);
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
    int rate[30];
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
            rate[i]=500;
            amnt[i]=rate[i]*n;
            bill=bill+500;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Slippers you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mfootwear[1]);
            x++;
            rate[i]=300;
            amnt[i]=rate[i]*n;
            bill=bill+300;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Formal shoes you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],mfootwear[2]);
            x++;
            rate[i]=400;
            amnt[i]=rate[i]*n;
            bill=bill+400;
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
        while(ans!=2);
        printbill(name,email,city,phone,cart,rate,n,amnt);
        printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
        printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
        printf("\n\n\t\t\t --------------------------------------------n");
}
