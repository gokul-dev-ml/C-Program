#include<stdio.h>
int main()
{
    int a=22;
    printf(" a= %d\n",a);
    printf(" memory used = %d\n",sizeof(a));
    float b=55.33;
    printf(" b= %.1f\n",b);
    printf(" memory used = %d\n",sizeof(b));
    char c[] ="hello i am a new programmer";
    printf(" c = %s\n",c);
    printf(" memory used = %d\n",sizeof(c));
    
}


//output:
 a= 22
 memory used = 4
 b= 55.3
 memory used = 4
 c = hello i am a new programmer
 memory used = 28
