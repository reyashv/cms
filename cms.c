#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include"cms.h"

int choice;
int i;
extern struct billentry Items[20];
extern int numItems;
char wtopwear[4][10]={"1.Tshirts","2.Shirts","3.Dress","4.Jackets"};
char wbottomwear[4][10]={"1.Jeans","2.Shorts","3.Pants","4.Skirts"};
char waccessories[6][20]={"1.Necklace","2.Earrings","3.Rings","4.Hairties","5.Belt","6.Watch"};
char wfootwear[3][10]={"1.Shoes","2.Heels","3.Flats"};
char mtopwear[4][10]={"1.Tshirts","2.Shirts","3.Jackets","4.Hoodies"};
char mbottomwear[3][10]={"1.Jeans","2.Shorts","3.Pants"};
char mfootwear[3][20]={"1.Shoes","2.Slippers","3.Formal shoes"};
char maccessories[3][10]={"1.Belts","2.wallet","3.watch"};
char cart[30][30];
char clothing[6];
//creating function for printing the bill
int printbill(char name[50],char email[20],char city[30],int phone)
{
    int bill=0;
    printf("\n\n\t\t\t---------------------------------------------\n");
    printf("\n\n\t\t\t------------ CLOTHING STORE BILL ------------");
    printf("\n\n\t\t NAME OF THE CUSTOMER: %s",name);
    printf("\n\n\t\t EMAIL: %s@gmail.com",email);
    printf("\n\n\t\t ADDRESS: %s",city);
    printf("\n\n\t\t PHONE NUMBER: %d\n",phone);
    printf("\n\n\t\t\t\t\t\t\tBILL");
    printf(" \n\n\t\tItem Name");
    printf(" \t\t\tItem Quantity");
    printf(" \t\tItem Cost");
    for(i=1;i<=numItems;i++)
    {
        printf(" \n\n\t\t%s",Items[i].itemname);
        printf("\t");
        printf(" \t\t%d",Items[i].quantity);
        printf("\t");
        printf(" \t\t%d\n",Items[i].cost);
        bill=bill+Items[i].cost;
    }
    printf("\n\n\t\t THE TOTAL AMOUNT IS : %d",bill);
    printf("\n\n\t\t THANK YOU FOR SHOPPING :)");
    printf("\n\n\t\t\t --------------------------------------------\n");
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
    printf("\t\tEnter your username of Email(--------@gmail.com):");
    scanf("%*c%[^\n]s",email);
    printf("\t\tEnter your City:");
    scanf("%*c%[^\n]s",city);
    printf("\t\tEnter your Phone number:");
    scanf("%ld",&phone);
    printf("\t\tEnter your choice\n");
    printf("\t\t1. Female Clothing\n");
    printf("\t\t2. Male Clothing\n");
    printf("\t\t3. Exit\n");
    printf("\t\t");
    scanf("%d",&choice);
    printf("\t\tThese are the clothing available to choose from: \n");
    while (choice == 1 || choice == 2)
    {
        switch(choice)
        {
            case 1:
            {
                int answ;
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
                    }//end of case1

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
                    }//end of case2
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
                    }//end of case3
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
                    }//end of case4
                    case 5:
                    {
                        printf("\t\tEnter your choice\n");
                        printf("\t\t1. Female Clothing\n");
                        printf("\t\t2. Male Clothing\n");
                        printf("\t\t3. Exit\n");
                        printf("\t\t");
                        scanf("%d",&choice);
                        break;
                    }
                }//end of switch
            break;
        }//end of case1
        case 2:
        {
            int ansm;
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
                    case 5:
                    {
                        printf("\t\tEnter your choice\n");
                        printf("\t\t1. Female Clothing\n");
                        printf("\t\t2. Male Clothing\n");
                        printf("\t\t3. Exit\n");
                        printf("\t\t");
                        scanf("%d",&choice);
                        break;
                    }
                }
            break;
        }//end of case2
    }//end of switch
}//end of while
}//end of main
