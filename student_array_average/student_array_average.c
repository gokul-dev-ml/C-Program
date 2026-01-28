#include<stdio.h>
int main()
{
    char student_name[3][50];
    int student_mark[3][3];
    int i,k;
    float sum;
    for(i=0;i<3;i++)
    {
        printf("enter student name:");
        scanf("%s",student_name[i]);
        for(k=0;k<3;k++)
        {
            printf("enter student mark %d:",k+1);
            scanf("%d",&student_mark[i][k]);
        }
    }
    for(i=0;i<3;i++){
        sum=0;
        printf("student :%s\n",student_name[i]);
                for(k=0;k<3;k++){
                    
                    printf("mark:%d\n",student_mark[i][k]);
                    sum+=student_mark[i][k];
                    
                    
                }
                printf("avrage :%.2f\n",sum/3);
    }
    return 0;
}
