#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include"cms.h"

int choice;
int sample;
int i;
char wtopwear[4][10]={"1.Tshirts","2.Shirts","3.Dress","4.Jackets"};
char wbottomwear[4][10]={"1.Jeans","2.Shorts","3.Pants","4.Skirts"};
char waccessories[6][20]={"1.Necklace","2.Earrings","3.Rings","4.Hairties","5.Belt","6.Watch"};
char wfootwear[3][10]={"1.Shoes","2.Heels","3.Flats"};
char mtopwear[4][10]={"1.Tshirts","2.Shirts","3.Jackets","4.Hoodies"};
char mbottomwear[3][10]={"1.Jeans","2.Shorts","3.Pants"};
char mfootwear[3][20]={"1.Shoes","2.Slippers","3.Formal shoes"};
char maccessories[3][10]={"1.Belts","2.wallet","3.watch"};
char cart[30][30];
//creating function for printing the bill
int printbill(char name[50],char email[20],char city[30],int phone,int bill)
{
    printf("\n\n\t\t\t---------------------------------------------\n");
    printf("\n\n\t\t\t------------ CLOTHING STORE BILL ------------");
    printf("\n\n\t\t NAME OF THE CUSTOMER: %s",name);
    printf("\n\n\t\t EMAIL: %s",email);
    printf("\n\n\t\t ADDRESS: %s",city);
    printf("\n\n\t\t PHONE NUMBER: %d",phone);
}
//main function
int main()
{
    printf("\n\n\t\t-----------------------------------------\n");
    printf("\t\t~~~~WELCOME TO OUR CLOTHING SHOP~~~~\n");
    printf("\n\n\t\t-----------------------------------------\n");
    printf("\t\tPlease enter the following details below:\n");
    printf("\t\tEnter your Name:");
    scanf("%[^\n]s",name);
    printf("\t\tEnter your Gender(female/male):");
    scanf("%*c%[^\n]s",gender);
    printf("\t\tEnter your Email(--------@gmail.com):");
    scanf("%*c%[^\n]s",email);
    printf("\t\tEnter your City:");
    scanf("%*c%[^\n]s",city);
    printf("\t\tEnter your Phone number:");
    scanf("%ld",&phone);
    printf("\t\tThese are the clothing available to choose from: \n");
    if(strcmp(gender,"female")==0)
    {
        choice=1;
    }
    else if(strcmp(gender,"male")==0)
    {
        choice=2;
    }
    else
    {
        printf("invalid input of gender");
    }
    switch(choice)
    {
        case 1:
        {
            int answ;
            do
            {
                i=womenswear();
                switch(i)
                {
                    case 1:
                    {
                        printf("\t\tThe women topwear available are: \n");
                        FILE *a ;
                        char b[50];
                        a = fopen("C:\\Users\\91994\\Documents\\psg\\wtopwear.txt", "r") ;
                        if ( a == NULL )
                        {
                            printf( "wtopwear.txt file failed to open.") ;
                        }
                        else
                        {
                            while( fgets ( b,50,a ) != NULL )
                            {
                                printf( "\t\t%s" , b ) ;
                            }
                            printf("\n");
                            fclose(a) ;
                        }
                        wotopwear(wtopwear);
                        break;
                    }

                    case 2:
                    {
                       printf("\t\tThe women bottomwear available are: \n");
                        FILE *a ;
                        char b[50];
                        a = fopen("C:\\Users\\91994\\Documents\\psg\\wbottomwear.txt", "r") ;
                        if ( a == NULL )
                        {
                            printf( "wbottomwear.txt file failed to open.") ;
                        }
                        else
                        {
                            while( fgets ( b,50,a ) != NULL )
                            {
                                printf( "\t\t%s" , b ) ;
                            }
                            printf("\n");
                            fclose(a) ;
                        }
                        wobottomwear(wbottomwear);
                        break;
                    }
                    case 3:
                    {
                        printf("\t\tThe women accessories available are: \n");
                        FILE *a ;
                        char b[50];
                        a = fopen("C:\\Users\\91994\\Documents\\psg\\waccessories.txt", "r") ;
                        if ( a == NULL )
                        {
                            printf( "waccessories.txt file failed to open.") ;
                        }
                        else
                        {
                            while( fgets ( b,50,a ) != NULL )
                            {
                                printf( "\t\t%s" , b ) ;
                            }
                            printf("\n");
                            fclose(a) ;
                        }
                        woaccessories(waccessories);
                        break;
                    }
                    case 4:
                    {
                        printf("\t\tThe women footwear available are: \n");
                        FILE *a ;
                        char b[50];
                        a = fopen("C:\\Users\\91994\\Documents\\psg\\wfootwear.txt", "r") ;
                        if ( a == NULL )
                        {
                            printf( "wfootwear.txt file failed to open.") ;
                        }
                        else
                        {
                            while( fgets ( b,50,a ) != NULL )
                            {
                                printf( "\t\t%s" , b ) ;
                            }
                            printf("\n");
                            fclose(a) ;
                        }
                        wofootwear(wfootwear);
                        break;
                    }
                    printf("\t\tThe total amount is : %d",bill);
                    printf("\t\tDo you want to select anything else in women's wear?(1.yes / 2.no)\n");
                    scanf("%d",&answ);
                    }
                    }while(answ!=2);
                break;
        }
        case 2:
			{
				int ansm;
				do
				{
                    i=menswear();
					switch(i)
					{
						case 1:
						{
                            printf("\t\tThe men topwear available are: \n");
                            FILE *a ;
                            char b[50];
                            a = fopen("C:\\Users\\91994\\Documents\\psg\\mtopwear.txt", "r") ;
                            if ( a == NULL )
                            {
                                printf( "mtopwear.txt file failed to open.") ;
                            }
                            else
                            {
                                while( fgets ( b,50,a ) != NULL )
                                {
                                    printf( "\t\t%s" , b ) ;
                                }
                                printf("\n");
                                fclose(a) ;
                            }
							motopwear(mtopwear);
							break;
						}
						case 2:
						{
							printf("\t\tThe men bottomwear available are: \n");
                            FILE *a ;
                            char b[50];
                            a = fopen("C:\\Users\\91994\\Documents\\psg\\wtopwear.txt", "r") ;
                            if ( a == NULL )
                            {
                                printf( "wtopwear.txt file failed to open.") ;
                            }
                            else
                            {
                                while( fgets ( b,50,a ) != NULL )
                                {
                                    printf( "\t\t%s" , b ) ;
                                }
                                printf("\n");
                                fclose(a) ;
                            }
                            mobottomwear(mbottomwear);
                            break;
						}
						case 3:
						{
							printf("\t\tThe men accessories available are: \n");
							FILE *a ;
                            char b[50];
                            a = fopen("C:\\Users\\91994\\Documents\\psg\\maccessories.txt", "r") ;
                            if ( a == NULL )
                            {
                                printf( "waccessories.txt file failed to open.") ;
                            }
                            else
                            {
                                while( fgets ( b,50,a ) != NULL )
                                {
                                    printf( "\t\t%s" , b ) ;
                                }
                                printf("\n");
                                fclose(a) ;
                            }
							moaccessories(maccessories);
							break;
						}
						case 4:
						{
							printf("\t\tThe men footwear available are: \n");
							FILE *a ;
                            char b[50];
                            a = fopen("C:\\Users\\91994\\Documents\\psg\\mfootwear.txt", "r") ;
                            if ( a == NULL )
                            {
                                printf( "wtopwear.txt file failed to open.") ;
                            }
                            else
                            {
                                while( fgets ( b,50,a ) != NULL )
                                {
                                    printf( "\t\t%s" , b ) ;
                                }
                                printf("\n");
                                fclose(a) ;
                            }
							mofootwear(mfootwear);
							break;
						}
						printf("\t\tThe total amount is : %d",bill);
						printf("\t\tDo you want to select anything else in women's wear?(1.yes / 2.no)\n");
						scanf("%d",&ansm);
					}}while(ansm!=2);
				break;
            }
    }
}
