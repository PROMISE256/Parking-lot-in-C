#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void CUSTOMERINFO();
void STATUSOFPARKING();
void PRICEOFPARKING();
void UGANDANVEHICLE();
void KENYANVEHICLE();
int hours;


int main()
{
    CUSTOMERINFO();
    STATUSOFPARKING();
    PRICEOFPARKING();
    return 0;
}
void CUSTOMERINFO(char countryinitial[],char carbrand[])
{
    char name[35],*currentTimeInString;
    time_t current_time;
    char platenumber;
    current_time= time(NULL);
    printf("ENTER CUSTOMER'S NAME\n");
    scanf("%s",name);
    currentTimeInString=ctime(&current_time);
    printf("\nPARKING TIME IS %s\n",currentTimeInString);
    printf("ENTER PLATE NUMBER\n");
    scanf("%s",&platenumber);
}
void STATUSOFPARKING()
{
    printf("PRICE TO BE PAID\n\n\n");
    printf("HOW MANY HOURS WILL THE CUSTOMER PARK FOR?\n");
    scanf("%d",&hours);
}
void PRICEOFPARKING()
{
    int value1;
    char ugandancode[]="UG";
    char countryinitial[3];
    printf("ENTER NUMBER PLATE COUNTRY INITIAL\n");
    scanf("%s",countryinitial);
    value1=strcmp(countryinitial,ugandancode);
    if(value1==0)
    {
        UGANDANVEHICLE();
    }
    else{
        KENYANVEHICLE();
    }

}
void UGANDANVEHICLE()
{
    int price;
    int value2,value3;
    char carbrand[10],carbrand1[10]="NISSAN";
    char parktime[]="DAY",timeofparking[6];
    printf("NO LINCENSE\n");
    printf("WHAT IS THE CAR BRAND?\n");
    scanf("%s",carbrand);
    printf("WHAT TIME OF THE DAY WILL YOU PARK?\n");
    scanf("%s",timeofparking);
    value2=strcmp(carbrand,carbrand1);
    if(value2==0)
    {
        printf("CAR WEIGHT IS 1800kg\n");
        value3=strcmp(parktime,timeofparking);
        if(value3==0)
        {
            price=(1800/500)*450*hours;
            printf("THE CUSTOMER SHOULD PAY ugshs %d",price);
        }
        else
        {
            price=(1800/800)*600*hours;
            printf("THE CUSTOMER SHOULD PAY ugshs %d",price);
        }

    }
    else
    {
        printf("YOU WILL BE CHARGED ALOT\n");
        value3=strcmp(parktime,timeofparking);
        if(value3==0)
        {
            price=(1800/200)*450*hours;
            printf("THE CUSTOMER SHOULD PAY ugshs %d",price);
        }
        else
        {
            price=(1800/200)*600*hours;
            printf("THE CUSTOMER SHOULD PAY ugshs %d",price);
        }

    }
}

void KENYANVEHICLE()
{
    int price;
    int value2,value3;
    char carbrand[10],carbrand1[10]="NISSAN";
    char parktime[]="DAY",timeofparking[6];
    printf("YOU WILL BE LINCENSED\n");
    printf("WHAT IS THE CAR BRAND?\n");
    scanf("%s",carbrand);
    printf("AT WHAT TIME OF THE DAY?\n");
    scanf("%s",timeofparking);
    value2=strcmp(carbrand,carbrand1);
    if(value2==0)
    {
        printf("CAR WEIGHT IS 1800kg\n");
        value3=strcmp(parktime,timeofparking);
        if(value3==0)
        {
            price=((1800/500)*450+2000)*hours;
            printf("THE CUSTOMER SHOULD PAY ugshs %d",price);
        }
        else
        {
            price=((4500/800)*600+2000)*hours;
            printf("THE CUSTOMER SHOULD PAY ugshs %d",price);
        }

    }
    else
    {
        printf("YOU WILL BE CHARGED ALOT\n");
        value3=strcmp(parktime,timeofparking);
        if(value3==0)
        {
            price=(4500/200)*450+2000*hours;
            printf("THE CUSTOMER SHOULD PAY ugshs %d",price);
        }
        else
        {
            price=((4500/200)*600+2000);
            printf("THE CUSTOMER SHOULD PAY ugshs %d",price);
        }

    }
}




















