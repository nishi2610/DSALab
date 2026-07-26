#include<stdio.h>
int main(){
    int a[10],i,j,temp;
    printf("enter elements in the array:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);}
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if (a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;}}}
    printf("the maximum number is: %d\n",a[9]);
    printf("the minimum number is:%d\n",a[0]);
    printf("the second maximum number is:%d\n",a[8]);
    printf("the second minimum number is:%d\n",a[1]);
    return 0;}
