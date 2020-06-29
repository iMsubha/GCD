#include<stdio.h>
void GCD(int n1,int n2){
    //printf("%d",n1);
    int gcd=0,i;
    for(i = 2; i < n1 && i < n2; i++){
      if((n1%i)==0 && (n2%i)==0){
          gcd=i;
      }
    }
    printf("GCD: %d",gcd);
}

int main(){
    int n1,n2;
    printf("Enter two positive number:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    GCD(n1,n2);

}
