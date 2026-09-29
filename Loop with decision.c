#include <stdio.h>
#include <stdlib.h>

int main()
{
   int gross_sale;
   float salary=0;

   while(salary>=0){
   printf("ENTER GROSS SALES($) or -1 to exit:");
   scanf("%d", &gross_sale);

   if(gross_sale== -1){
    break;
   }

   salary = (gross_sale*0.09) + 200;

   if(salary>=600){
    printf("SALARY: $ %0.2f - GOOD PERFORMANCE\n", salary);
   }else{
       printf("SALARY: $ %0.2f - UNDER PERFORMED\n", salary);
    }


   }

    return 0;
}

