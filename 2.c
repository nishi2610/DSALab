#include<stdio.h>
#include<string.h>
struct students{
    char name[50];
    int roll_no;
    char address[150];};
int main(){
    struct students student[5];
    for(int i=0;i<5;i++){
        printf("enter details of student %d\n", i+1);
        printf("enter name:");
        fgets(student[i].name,50,stdin);
        printf("enter rollno.:");
        scanf("%d",&student[i].roll_no);
        getchar();
        printf("enter address:");
        fgets(student[i].address, 150, stdin);}
    printf("\nSTUDENT DETAILS\n");
    for (int i=0;i<5;i++){
        printf("Student %d:\n", i+1);
        printf("Name:%s",student[i].name);
        printf("Roll Number:%d\n",student[i].roll_no);
        printf("Address:%s\n",student[i].address);}
    return 0;}
