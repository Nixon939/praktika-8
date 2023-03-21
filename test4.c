#define rows 10
#define cols 10
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int a[cols][rows];
int i=0;
int j=0;
int sum_high=0,sum_low=0;

for (i=0;i<cols;i++){
  for (j=0;j<rows;j++){
    a[i][j]=rand()%200-100;
    printf(" %3d ",a[i][j]);}
    printf("\n");}  
printf("\n");

for (i=0;i<cols;i++){
  for (j=0;j<rows;j++){
     if(i>j){
     sum_low=sum_low+a[i][j];}}}
    printf("Sum of the lower numbers is %d\n",sum_low);

for (i=0;i<cols;i++){
  for (j=0;j<rows;j++){
     if(i<j){
     sum_high=sum_high+a[i][j];}}}
    printf("Sum of the higher numbers is %d\n",sum_high);}
