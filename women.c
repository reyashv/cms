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

char cart[50][50];
char wtopwearbill[4][10];
char wbottomwearbill[4][10];
char waccessoriesbill[6][20];
char wfootwearbill[3][10];
struct billentry Items[20];
int numItems=0;
int womenswear()
{
    int i,choice2;
    do
    {
        printf("\n");
        printf("\t\tEnter which one you would like to see\n");
        printf("\t\t1.Womens topwear\n");
        printf("\t\t2.Womens bottomwear\n");
        printf("\t\t3.Womens accessories\n");
        printf("\t\t4.Womens footwear\n");
        printf("\t\t5.Go back to previous menu\n");
        printf("\t\t");
        scanf("%d",&choice2);
    }
    while(choice2>6);
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
        printf("\n");
        printf("\t\tEnter the index number of what you would like to buy in women's topwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\n");
            printf("\t\tEnter the no.of Tshirts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[0]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WTSHIRTS*n;
            strcpy(Items[numItems].itemname,"Women Tshirts");
        }
        else if(c1==2)
        {
            printf("\n");
            printf("\t\tEnter the no.of Shirts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[1]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WSHIRTS*n;
            strcpy(Items[numItems].itemname,"Women shirts");

        }
        else if(c1==3)
        {
            printf("\n");
            printf("\t\tEnter the no.of Dresses you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[2]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WDRESS*n;
            strcpy(Items[numItems].itemname,"Women dress");

        }
        else if(c1==4)
        {
            printf("\n");
            printf("\t\tEnter the no.of Jackets you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wtopwear[3]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WJACKETS*n;
            strcpy(Items[numItems].itemname,"Women Jackets");
        }
        else
        {
            printf("\n");
            printf("\t\tError : Enter valid index number \n");
        }
        printf("\n");
        printf("\t\tYour cart has:\n");
        c++;
        for(j=0;j<=c;j++)
        {
            printf("\t\t%s",cart[j]);
            printf("\n");
        }
        printf("\n");
        printf("\t\tDo you want to add more in women's topwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans == 1);
        printbill(name,email,city,phone);
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
        printf("\n");
        printf("\t\tEnter the index number of what you would like to buy in women's bottomwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\n");
            printf("\t\tEnter the no.of Jeans you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[0]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WJEANS*n;
            strcpy(Items[numItems].itemname,"Women Jeans");

        }
        else if(c1==2)
        {
            printf("\n");
            printf("\t\tEnter the no.of Shorts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[1]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WSHORTS*n;
            strcpy(Items[numItems].itemname,"Women Shorts");

        }
        else if(c1==3)
        {
            printf("\n");
            printf("\t\tEnter the no.of Pants you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[2]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WPANTS*n;
            strcpy(Items[numItems].itemname,"Women Pants");

        }
        else if(c1==4)
        {
            printf("\n");
            printf("\t\tEnter the no.of Skirts you want to buy:");
            printf("\t\t");
            scanf("%d",&n);
            strcpy(cart[c],wbottomwear[3]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WSKIRTS*n;
            strcpy(Items[numItems].itemname,"Women Skirts");

        }
        else
        {
            printf("\n");
            printf("\t\tEnter valid index number \n");
        }
        printf("\t\tYour cart has:\n");
        for(j=0;j<=c;j++)
        {
            printf("\t\t%s\n",cart[j]);
        }
        c++;
        printf("\n");
        printf("\t\tDo you want to add more in women's bottomwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans==1);
        printbill(name,email,city,phone);
}
//creating function for women's accessories
int woaccessories(char waccessories[6][20])
{
    int c1,bill=0,i=0,j;
    int n;
    int x=0;
    int ans;
    int amnt[30];
    int c=0;
    do
    {
        printf("\n");
        printf("\t\tEnter the number of what you would like to buy in women's accessories\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\n");
            printf("\t\tEnter the no.of Necklaces you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[0]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WNECKLACE*n;
            strcpy(Items[numItems].itemname,"Women Necklace");

        }
        else if(c1==2)
        {
            printf("\n");
            printf("\t\tEnter the no.of Earrings you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[1]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WEARRINGS*n;
            strcpy(Items[numItems].itemname,"Women Earrings");

        }
        else if(c1==3)
        {
            printf("\n");
            printf("\t\tEnter the no.of Rings you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[2]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WRINGS*n;
            strcpy(Items[numItems].itemname,"Women Rings");

        }
        else if(c1==4)
        {
            printf("\n");
            printf("\t\tEnter the no.of Hairties you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[3]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WHAIRTIES*n;
            strcpy(Items[numItems].itemname,"Women Hairties");
        }
        else if(c1==5)
        {
            printf("\n");
            printf("\t\tEnter the no.of Belts you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[4]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WBELTS*n;
            strcpy(Items[numItems].itemname,"Women Belts");
        }
        else if(c1==6)
        {
            printf("\n");
            printf("\t\tEnter the no.of Watches you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],waccessories[5]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WWATCH*n;
            strcpy(Items[numItems].itemname,"Women Watch");
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
            printf("\t\t%s",cart[j]);
            printf("\n");
        }
        c++;
        printf("\n");
        printf("\t\tDo you want to add more in women's accessories?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans==1);
        printbill(name,email,city,phone);
}
//creating function for women's footwear
int wofootwear(char wfootwear[3][10])
{
    int c1,bill=0,i=0,j;
    int n;
    int x=0;
    int ans;
    int amnt[30];
    int c=0;
    do
    {
        printf("\n");
        printf("\t\tEnter the number of what you would like to buy in women's footwear\n");
        printf("\t\t");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\n");
            printf("\t\tEnter the no.of Shoes you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wfootwear[0]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WSHOES*n;
            strcpy(Items[numItems].itemname,"Women Shoes");
        }
        else if(c1==2)
        {
            printf("\n");
            printf("\t\tEnter the no.of Heels you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wfootwear[1]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WHEELS*n;
            strcpy(Items[numItems].itemname,"Women Heels");
        }
        else if(c1==3)
        {
            printf("\n");
            printf("\t\tEnter the no.of Flats you want to buy:");
            scanf("%d",&n);
            strcpy(cart[c],wfootwear[2]);
            x++;
            numItems++;
            Items[numItems].quantity = n;
            Items[numItems].cost=WFLATS*n;
            strcpy(Items[numItems].itemname,"Women Flats");
        }
        else
        {
            printf("\n");
            printf("\t\tEnter valid index number \n");
        }
        int j;
        printf("\n");
        printf("\t\tYour cart has:\n");
        for(j=0;j<=c;j++)
        {
            printf("\t\t%s\n",cart[j]);
        }
        c++;
        printf("\n");
        printf("\t\tDo you want to add more in women's footwear?(1.yes / 2.no)\n");
        printf("\t\t");
        scanf("%d",&ans);
        }while(ans==1);
        printbill(name,email,city,phone);
}
