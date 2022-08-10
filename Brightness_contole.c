
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;

    // use appropriate location if you are using MacOS or Linux
    fptr = fopen("test.txt","w");

    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("contole u r pc  brigthness  1 %% to 100%% :: ");
    scanf("%d",&num);
    if(num  <= 0){
        printf("0 turn off u r pc.");
        exit(1);
} else if (num > 100){
        printf("No more than 100%%.");
        exit(1);
    }
    int y = 68.18*num;

    fprintf(fptr,"%d",y);
    fclose(fptr);


    return 0;
}
