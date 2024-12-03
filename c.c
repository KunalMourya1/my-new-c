#include<stdio.h>


int stair(int n);

int main(){
int n;
printf("enter n : "); 
scanf("%d",&n);

int ways = stair(n);

printf("total ways of n is : %d",stair(n));
    return 0;
}

int stair(int n){

    if (n==1){return 1;}
if (n==2){ return 2;}
if (n==3){return 4;}
int stairnm1=stair(n-1);
int stairnm2=stair(n-2);
int stairnm3=stair(n-3);
int stairn= stairnm1 + stairnm2 + stairnm3;

return stairn;

}

