#include <stdio.h>
int calculatetotal(int,int,int);
float calculatepercentage(int);
char calculategrade(float);
void display(int,float,char,int,int,int);
int main() {
  int m1,m2,m3;
  char grade;
  int total;
  float percentage;
  printf("Enter mark1:");
  scanf("%d",&m1);
  printf("Enter mark2:");
  scanf("%d",&m2);
  printf("Enter mark3:");
  scanf("%d",&m3);
  total=calculatetotal(m1,m2,m3);
  percentage=calculatepercentage(total);
  grade=calculategrade(percentage);
  display(total,percentage,grade,m1,m2,m3);
    return 0;
}

int calculatetotal(int m1,int m2,int m3){
    int sum;
    sum=m1+m2+m3;
    return sum;
}

float calculatepercentage(int total){
    float average=(total/300.0)*100;
    return average;
}

char calculategrade(float percentage){
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 75)
        return 'B';
    else if (percentage >= 60)
        return 'C';
    else
        return 'F';
}

void display(int total,float percentage,char grade,int m1,int m2,int m3){
    printf("m1: %d\n",m1);
    printf("m2: %d\n",m2);
    printf("m3: %d\n",m3);
    printf("total mark: %d\n",total);
     printf("percentage: %.2f%\n",percentage);
      printf("grade: %c\n",grade);
    
}
