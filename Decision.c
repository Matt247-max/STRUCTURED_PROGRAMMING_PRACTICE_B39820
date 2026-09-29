#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("ENTER MARK SCORED:");
    scanf("%d", &mark);

    if(mark<0 || mark>100){
        printf("INVALID MARK ENTRY.\n");
    }
    else if(mark>=60){
        printf("PASSED\n");
    }
    else{
        printf("FAILED\n");
    }
    return 0;
}
