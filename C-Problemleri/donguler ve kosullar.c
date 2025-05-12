#include <math.h>
#include <stdio.h>

int problem11_aralik_toplam(int n) {
    int sum = 0;
    for (int i=0; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int problem12_faktorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * problem12_faktorial(num -1);
}

int problem13_asal_kontrol(int num) {
    if (num < 2) {
        return 0;
    }

    int bolen_sayisi = 1;
    for (int i=1; i < num; i++) {
        if (num % i == 0) {
            bolen_sayisi++;
        }
    }

    return bolen_sayisi == 2 ? 1 : 0;
}

// 1 1 2 3 5 8 13 21
void problem14_fibonacci(int num) {
    int num1 = 0, num2 = 1;
    int count = 0;

    while(count < num) {
        printf("%d ", num2);
        num2 = num1 + num2;
        num1 = num2 - num1;
        count++;
    }
    printf("\n");
}

int problem15_num_reverser(int num) {
    int remain = 0;
    int new_num = 0;

    while (num != 0) {
        remain = num % 10;
        num -= remain;
        num = num / 10;
        new_num *= 10;
        new_num += remain;
    }
    return new_num;
}

int problem16_perfect_num(int num) {
    int sum = 0;

    for (int i=0; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num ? 1 : 0;
}

void problem17_star_rectangle(int num) {
    for (int i=0; i <= num; i++) {
        for (int j=0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void problem18_multiplying_table() {
    for (int i=1; i <= 10; i++) {
        for (int j=1; j <= 10; j++) {
            printf("%d * %d = %d  ", i, j, (i * j));
        }
        printf("\n");
    }
}

int problem19_armstrong_num(int num) {
    int sum = 0;
    int remain = 0;
    int tmp = num;

    while (num != 0) {
        remain = num % 10;
        sum += pow(remain, 3);
        num = num - remain;
        num = num / 10;
    }
    return sum == num ? 1 : 0;
}

int problem20_rakam_toplami(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

int main() {
    printf("1 den n e kdr toplam: %d\n", problem11_aralik_toplam(5));
    printf("fak_sonuc: %d\n", problem12_faktorial(4));
    printf("asallik: %d\n", problem13_asal_kontrol(11));
    problem14_fibonacci(10);
    printf("reversed num: %d\n", problem15_num_reverser(3467));
    problem17_star_rectangle(10);
    // problem18_multiplying_table();
    printf("%d\n", problem19_armstrong_num(153));
    printf("%d\n", problem20_rakam_toplami(123));
    return 0;
}
