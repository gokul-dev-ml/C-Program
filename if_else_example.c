#include <stdio.h>

int main() {
    int a;
    printf("enter the values ");
    scanf("%d",&a);
    printf("%d\n",a);
    if(a<=50)
    printf("below 50");
    else
    printf("above 50");
    return 0;
}


//output:
enter the values 90
90
above 50
