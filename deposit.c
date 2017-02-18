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
    int sum, n, time;
    
    n = 0;
    
    while (n == 0){
    
    printf("\nВведите сумму вклада:");
    scanf("%d", &sum);
    printf("Введите срок:");
    scanf("%d", &time);
    
    check(sum, time, &n);}
    
    return 0;
}