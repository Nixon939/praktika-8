#define ROWS 4
#define COLS 4
#define MAXNUMBER 100
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int m[ROWS][COLS] = {{11, 12, 13, 14},
                     {21, 22, 23, 24},
                     {31, 32, 33, 34},
                     {41, 42, 43, 44}};
int i=0,j=0;
int min=MAXNUMBER,max=0;
int a[COLS];

for (j=0;j<ROWS;j++){
  for (i=0;i<COLS;i++){

    if (m[i][j]>max && j%2!=0){
      max=m[i][j];
      a[j]=max;}

    if (m[i][j]<min && j%2==0){
      min=m[i][j];
      a[j]=min;}

    printf(" %d",m[j][i]);}
   min=MAXNUMBER;
   max=0;
  printf("\n");}

printf("\n");

for (j=0;j<ROWS;j++){
   printf(" %d",a[j]);
   }
}
