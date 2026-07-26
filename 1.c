#include<stdio.h>
int main(){
  int a[3][3],b[3][3],sum[3][3],i,j;
  printf("enter elements for 1st matrix:\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&a[i][j]);}}
  printf("enter elements for 2nd matrix:\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&b[i][j]);}}
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      sum[i][j]=a[i][j]+b[i][j];}}
  printf("The sum of the matrices is:\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d\t",sum[i][j]);}
    printf("\n");}
  return 0;}
