#include<stdio.h>
#define MAX_MARKS 100
int main()
{
int regno;
char name[30];
float m1,m2,me,total,average;
printf("Enter register number:");
printf("%d",regno);
printf("enter sutdentname:");
scanf("%s",name);
printf("enter marks in three subjects:");
scanf("%f%f%f",&m1,&m2,&m3);
total=m1+m2+m3;
average=total/3;
printf("STUDENT MARK SHEET\n");
printf("register no:%d\n",regno);
printf("name:%s\n",name);
printf("subject 1:%.2f\n",m1);
printf("subject 2:%.2f\n",m2);
printf("subject 3:%.2f\n",m3);
printf("total marks :%.2f\n",total);
printf("average:%.2f\n",average);
printf("MAXIMUM MARK PER SUBJECT %d\n"MAX_MARKS);
return 0;
}

