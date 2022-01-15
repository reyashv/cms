#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include"cms.h"
char cart[30][30];

int womenswear()
{
    int i,choice2,bill;
    printf("\n");
    printf("\t\tEnter which one you would like to see\n");
    printf("\t\t1.Women topwear\n");
    printf("\t\t2.Women bottomwear\n");
    printf("\t\t3.Women footwear\n");
    printf("\t\t4.Women accesories\n");
    printf("\t\t");
    scanf("\t\t%d",&choice2);
    if(choice2>4)
    {
        printf("Error : Enter valid choice \n");
    }
    return choice2;
}
//creating function for women's topwear
 int wotopwear(char wtopwear[4][10])
 {
    int bill=0;
    int n;
    int x=0;
    int rate[30];
    int amnt[30];
    int c1,i=0,j;
    int ans;
    int c=0;
    do
    {
        printf("\t\tEnter the index number of what you would like to buy in women's topwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\t\tEnter the no.of Tshirts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[0]);
            x++;
            rate[i]=250;
            amnt[i]=rate[i]*n;
            bill=bill+250*n;
            i++;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Shirts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[1]);
            x++;
            rate[i]=275;
            amnt[i]=rate[i]*n;
            bill=bill+275*n;
            i++;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Dresses you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[2]);
            x++;
            rate[i]=350;
            amnt[i]=rate[i]*n;
            bill=bill+350*n;
            i++;
        }
        else if(c1==4)
        {
            printf("\t\tEnter the no.of Jackets you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[3]);
            x++;
            rate[i]=300;
            amnt[i]=rate[i]*n;
            bill=bill+300*n;
            i++;
        }
        else
        {
            printf("\t\tError : Enter valid index number \n");
        }
        printf("\t\tYour cart has:\n");
        c++;
        for(j=0;j<=c;j++)
        {
            printf("\t\t%s",cart[j]);
            printf("\n");
        }
        printf("\t\tDo you want to add more in women's topwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans!=2);
        printbill(name,email,city,phone,cart,rate,n,amnt);
        printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
        printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
        printf("\n\n\t\t\t --------------------------------------------\n");
}
//creating function for women's bottomwear
int wobottomwear(char wbottomwear[4][10])
{
    int c1,bill=0,i=0,j;
    int n;
    int x=0;
    int ans;
    int amnt[30];
    int rate[30];
    int c=0;
    do
    {
        printf("\t\tEnter the index number of what you would like to buy in women's bottomwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\t\tEnter the no.of Jeans you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[0]);
            x++;
            rate[i]=500;
            amnt[i]=rate[i]*n;
            bill=bill+500*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Shorts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[1]);
            x++;
            rate[i]=200;
            amnt[i]=rate[i]*n;
            bill=bill+200*n;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Pants you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[2]);
            x++;
            rate[i]=250;
            amnt[i]=rate[i]*n;
            bill=bill+250*n;
        }
        else if(c1==4)
        {
            printf("\t\tEnter the no.of Skirts you want to buy:");
            printf("\t\t");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[3]);
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
        printf("\t\tDo you want to add more in women's bottomwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans!=2);
        printbill(name,email,city,phone,cart,rate,n,amnt);
        printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
        printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
        printf("\n\n\t\t\t --------------------------------------------\n");
}
//creating function for women's accessories
int woaccessories(char waccessories[6][20])
{
    int c1,bill,i,j;
    int n;
    int x=0;
    int ans;
    int rate[30];
    int amnt[30];
    int c=0;
    do
    {
        printf("\t\tEnter the number of what you would like to buy in women's accessories\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\t\tEnter the no.of Necklaces you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[0]);
            x++;
            rate[i]=150;
            amnt[i]=rate[i]*n;
            bill=bill+150*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Earrings you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[1]);
            x++;
            rate[i]=120;
            amnt[i]=rate[i]*n;
            bill=bill+120*n;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Rings you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[2]);
            x++;
            rate[i]=100;
            amnt[i]=rate[i]*n;
            bill=bill+100*n;
        }
        else if(c1==4)
        {
            printf("\t\tEnter the no.of Hairties you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[3]);
            x++;
            rate[i]=50;
            amnt[i]=rate[i]*n;
            bill=bill+50*n;

        }
        else if(c1==5)
        {
            printf("\t\tEnter the no.of Belts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[4]);
            x++;
            rate[i]=175;
            amnt[i]=rate[i]*n;
            bill=bill+175*n;
        }
        else if(c1==6)
        {
            printf("\t\tEnter the no.of Watches you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[5]);
            x++;
            rate[i]=350;
            amnt[i]=rate[i]*n;
            bill=bill+350*n;
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
        printf("\t\tDo you want to add more in women's accessories?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans!=2);
        printbill(name,email,city,phone,cart,rate,n,amnt);
        printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
        printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
        printf("\n\n\t\t\t --------------------------------------------\n");
}
//creating function for women's footwear
int wofootwear(char wfootwear[3][10])
{
    int c1,bill,i,j;
    int n;
    int x=0;
    int ans;
    int amnt[30];
    int rate[30];
    int c=0;
    do
    {
        printf("\t\tEnter the number of what you would like to buy in women's footwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\t\tEnter the no.of Shoes you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wfootwear[0]);
            x++;
            rate[i]=500;
            amnt[i]=rate[i]*n;
            bill=bill+500*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Heels you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wfootwear[1]);
            x++;
            rate[i]=550;
            amnt[i]=rate[i]*n;
            bill=bill+550*n;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Flats you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wfootwear[2]);
            x++;
            rate[i]=400;
            amnt[i]=rate[i]*n;
            bill=bill+400*n;
        }
        else
        {
            printf("\t\tEnter valid index number \n");
        }
        int j;
        printf("\t\tYour cart has:\n");
        for(j=0;j<=c;j++)
        {
            printf("\t\t%s\n",cart[j]);
        }
        c++;
        printf("\t\tDo you want to add more in women's footwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans!=2);
        printbill(name,email,city,phone,cart,rate,n,amnt);
        printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
        printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
        printf("\n\n\t\t\t --------------------------------------------\n");
}
