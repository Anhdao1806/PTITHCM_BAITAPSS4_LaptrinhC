#include <stdio.h>
 int main(){
     int a,b,c;
     
     printf("nhap so a: ");
     scanf("%d",&a);
     
     printf("nhap so b: ");
     scanf("%d",&b);
     
     printf("nhap so c: ");
     scanf("%d",&c);
     
     if(a<b && c<b && a<c){
         printf("so %d nam trong khoang %d va %d", c,a,b);
     }else{
         printf("so %d khong nam trong khoang %d va %d ", c,a,b);
     }
     return 0;
     
     }
