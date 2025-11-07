#include<stdio.h>


struct landmark{
    char name[30];
    char city[30];
    int construction_year;
   
};


int main(){

    struct landmark lnk[30];
    struct landmark temp;
    int i,j;
    for(i=0;i<2;i++)
    {
        printf("\nEnter landmark name:");
        scanf("%s",lnk[i].name);
        
        printf("\nEnter city name:");
        scanf("%s",lnk[i].city);
        
        printf("\nEnter construction year:");
        scanf("%d",&lnk[i].construction_year);
        
       
    }
    for (i=0;i<2;i++)
    {
        printf("\nLandmark name:%s\n",lnk[i].name);
        printf("\nCity name:%s\n",lnk[i].city);
        printf("\nConstruction Year:%d\n",lnk[i].construction_year);
        
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<2;j++)
        {
        if(lnk[i].construction_year>lnk[j].construction_year) 
        {
            temp=lnk[i];
            lnk[i]=lnk[j];
            lnk[j]=temp;
        }
        }
    }
    printf("\n----Sorted landmark details(by construction year)----\n");
    for(i=0;i<2;i++)
    {
        printf("\nLandmark name:%s\n",lnk[i].name);
        printf("\nCity name:%s\n",lnk[i].city);
        printf("\nConstruction Year:%d\n",lnk[i].construction_year);
        
    }
    return 0;
    }
