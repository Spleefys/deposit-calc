#include <stdio.h>

void check(int sum, int time, int *n){
    if (time > 365 && sum < 10000){
        *n = 0;
    }
    else{
        *n = 1;
    }
}

int main(){
    int sum, n, time, res;
    
    n = 0;
    
    while (n == 0){
    
    printf("\nВведите сумму вклада:");
    scanf("%d", &sum);
    printf("Введите срок:");
    scanf("%d", &time);
    
    check(sum, time, &n);}
    
    if(sum<100000){
        if(time > 0 && time <= 30){
            res=sum-(sum*0.1);
            printf("%d", res);
        }
        if(time >= 31 && time <= 120){
            res=sum+(sum*0.02);
            printf("%d", res);
        }
        if(time >= 121 && time <= 240){
            res=sum+(sum*0.06);
            printf("%d", res);
        }
        if(time >= 241 && time <= 365){
            res=sum+(sum*0.12);
            printf("%d", res);
        }
    }
    else{
        if(time > 0 && time <= 30){
            res=sum-(sum*0.1);
            printf("%d", res);
        }
        if(time >= 31 && time <= 120){
            res=sum+(sum*0.03);
            printf("%d", res);
        }
        if(time >= 121 && time <= 240){
            res=sum-(sum*0.08);
            printf("%d", res);
        }
        if(time >= 241 && time <= 365){
            res=sum-(sum*0.15);
            printf("%d", res);
        }
    }
    
    return 0;
}