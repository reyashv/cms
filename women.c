#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include"cms.h"
#define WTSHIRTS 175
#define WSHIRTS 275
#define WJACKETS 375
#define WDRESS 250
#define WJEANS 475
#define WSHORTS 175
#define WPANTS 300
#define WSKIRTS 275
#define WNECKLACE 150
#define WEARRINGS 125
#define WRINGS 75
#define WHAIRTIES 50
#define WBELTS 200
#define WWATCH 500
#define WSHOES 500
#define WHEELS 455
#define WFLATS 275

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
    if(choice2>4 || choice2<0)
    {
        printf("\t\tEnter valid choice\n");
    }
    return choice2;
}
//creating function for women's topwear
 int wotopwear(char wtopwear[4][10])
 {
    int bill=0;
    int n;
    int x=0;
    int amnt[30];
    int c1,i=0,j;
    int ans=0;
    int c=0;
    do
    {
        printf("\t\tEnter the index number of what you would like to buy in women's topwear\n");
        printf("\t\t");
        if(c1==1)
        {
            printf("\t\tEnter the no.of Tshirts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[0]);
            x++;
            amnt[i]=WTSHIRTS*n;
            bill=bill+WTSHIRTS*n;
            i++;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Shirts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[1]);
            x++;
            amnt[i]=WSHIRTS*n;
            bill=bill+WSHIRTS*n;
            i++;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Dresses you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[2]);
            x++;
            amnt[i]=WDRESS*n;
            bill=bill+WDRESS*n;
            i++;
        }
        else if(c1==4)
        {
            printf("\t\tEnter the no.of Jackets you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[3]);
            x++;
            amnt[i]=WJACKETS*n;
            bill=bill+WJACKETS*n;
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
        }while(ans == 1);
        printbill(name,email,city,phone,cart,n,amnt);
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
            amnt[i]=WJEANS*n;
            bill=bill+WJEANS*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Shorts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[1]);
            x++;
            amnt[i]=WSHORTS*n;
            bill=bill+WSHORTS*n;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Pants you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[2]);
            x++;
            amnt[i]=WPANTS*n;
            bill=bill+WPANTS*n;
        }
        else if(c1==4)
        {
            printf("\t\tEnter the no.of Skirts you want to buy:");
            printf("\t\t");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[3]);
            x++;
            amnt[i]=WSKIRTS*n;
            bill=bill+WSKIRTS*n;
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
        }while(ans==1);
        printbill(name,email,city,phone,cart,n,amnt);
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
            amnt[i]=WNECKLACE*n;
            bill=bill+WNECKLACE*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Earrings you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[1]);
            x++;
            amnt[i]=WEARRINGS*n;
            bill=bill+WEARRINGS*n;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Rings you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[2]);
            x++;
            amnt[i]=WRINGS*n;
            bill=bill+WRINGS*n;
        }
        else if(c1==4)
        {
            printf("\t\tEnter the no.of Hairties you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[3]);
            x++;
            amnt[i]=WHAIRTIES*n;
            bill=bill+WHAIRTIES*n;

        }
        else if(c1==5)
        {
            printf("\t\tEnter the no.of Belts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[4]);
            x++;
            amnt[i]=WBELTS*n;
            bill=bill+WBELTS*n;
        }
        else if(c1==6)
        {
            printf("\t\tEnter the no.of Watches you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[5]);
            x++;
            amnt[i]=WWATCH*n;
            bill=bill+WWATCH*n;
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
        }while(ans==1);
        printbill(name,email,city,phone,cart,n,amnt);
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
            amnt[i]=WSHOES*n;
            bill=bill+WSHOES*n;
        }
        else if(c1==2)
        {
            printf("\t\tEnter the no.of Heels you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wfootwear[1]);
            x++;
            amnt[i]=WHEELS*n;
            bill=bill+WHEELS*n;
        }
        else if(c1==3)
        {
            printf("\t\tEnter the no.of Flats you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wfootwear[2]);
            x++;
            amnt[i]=WFLATS*n;
            bill=bill+WFLATS*n;
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
        }while(ans==1);
        printbill(name,email,city,phone,cart,n,amnt);
        printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
        printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
        printf("\n\n\t\t\t --------------------------------------------\n");
}
