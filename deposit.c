#include <stdio.h>

enum {
    srok = 365,
    depos = 10000
};

void check(int sum, int time, int *n){
    if (time > srok || sum < depos){
        *n = 0;
    }
    else{
        *n = 1;
    }
}

enum Periods{
    lessone = 0,
    one = 30,
    lessfour = 31,
    four = 120,
    lesseight = 121,
    eight = 240,
    lesstwenty = 241,
    twenty = 365
};

int main(){
    int sum, n, time;
    float res;

    n = 0;

    while (n == 0){
        printf("\nВведите сумму вклада:");
        scanf("%d", &sum);
        printf("Введите срок:");
        scanf("%d", &time);

        check(sum, time, &n);
    }

    if (sum<100000) {
        if (time > lessone && time <= one) {
            res = (sum * 0.1);
            printf("-%f", res);
        }
        if (time >= lessfour && time <= four) {
            res = (sum * 0.02);
            printf("%f", res);
        }
        if (time >= lesseight && time <= eight) {
            res = (sum * 0.06);
            printf("%f", res);
        }
        if (time >= lesstwenty && time <= twenty) {
            res = (sum * 0.12);
            printf("%f", res);
        }
    }
    else{
        if (time > lessone && time <= one) {
            res = (sum * 0.1);
            printf("-%f", res);
        }
        if (time >= lessfour && time <= four) {
            res = (sum * 0.03);
            printf("%f", res);
        }
        if (time >= lesseight && time <= eight) {
            res = (sum * 0.08);
            printf("%f", res);
        }
        if (time >= lesstwenty && time <= twenty) {
            res = (sum * 0.15);
            printf("%f", res);
        }
    }

    return 0;
}
