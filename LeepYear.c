#include<studio.h>
Int main () {
    int year;
    printf("Enter The Year  :  ");
    scanf("%d",&year);

    if(year % 4 != 0 || year % 400 != 0) {
         printf("%d year is not an Leep Year \n",year);
    } else if (year % 4 == 0) {
         printf("%d year is an Leep Year \n",year);
    }
    return 0;
}
