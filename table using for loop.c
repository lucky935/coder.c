#include <stdio.h>

int main(){
    float var1;
    printf("enter number\n");
    scanf("%f",&var1);

    for(int i=1; i<=12; i+=1){
        printf("%f x %d = %f\n",var1,i,var1*i);
    }

    return 0;
}
