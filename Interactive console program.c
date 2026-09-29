#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice=0;
    int hours, sales;
    float salary;
    while(choice!=4){
    printf("______SALARY CALCULATION:______\n");
    printf("1.manager\n");
    printf("2.hourly worker\n");
    printf("3.comission worker\n");
    printf("4.EXIT\n");

   scanf("%d", &choice);

   switch(choice){
   case 1:
    printf("ENTER NUMBER OF HOURS WORKED:");
    scanf("%d", &hours);
    salary = hours * 300;
        if(hours>0){printf("SALARY: $ %0.2f\n", salary);
        }else{printf("INVALID ENTRY\n");}
    break;

   case 2:
    printf("ENTER NUMBER OF HOURS WORKED:");
    scanf("%d", &hours);
    salary = hours * 100;
    if(hours>0){printf("SALARY: $ %0.2f\n", salary);
    }else{printf("INVALID ENTRY\n");}
    break;

   case 3:
    printf("ENTER SALES MADE:");
    scanf("%d", &sales);
    salary = (5.7*sales) + 250;
    if(sales>=0){printf("SALARY: $ %0.2f\n", salary);
    }else{printf("INVALID ENTRY\n");}
    break;

   case 4:
    printf("-------THANK YOU------\n");
    break;

   default:
    printf("INVALID ENTRY\n");
    break;
   }
   }
    return 0;
}
