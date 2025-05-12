#include <stdio.h>
#include <math.h>
#include <string.h>

void problem1_hello_world() {
    printf("Hello World\n");
}

int problem2_topla(int num1, int num2) {
    return num1 + num2;
}

int problem3_tek_cift(int num) {
    return (num % 2 != 0) ? 1 : 0; // sayının 2' ye modu 0' sa çifttir ve 0 (Çift) döndürür. Diğer durumda 1 (Tek) döndürür.
}

int problem4_rectangle_area(int edge1, int edge2) {
    return edge1 * edge2;
}

double problem5_celcius_to_fahrenheit(double celcius) {
    return celcius * 1.8 + 32;
}

double problem6_squareroot(double number) {
    return sqrt(number);
}

void problem7_swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    // &degisken : adres belirtir (0x1000).
    // pointer nasıl tanımlanır: int *pointer (int * veri tipi);
    // pointerlar adres tutar, adreslerindeki değere erişmek için başına '*' koyarız. | pointer = adres (0x1000) | *pointer = deger (5)
    // (void *) num1 : int * | char * veri tiplerindede olabilirdi fakat 'void' ile genel bir pointer tanımı yapmış oluyoruz.
    // void * : Genel bir işaretçi tipi olduğunu derleyiciye söylüyor yani. printf() fonksiyonu belirli bir pointer yerine "void *" bekliyor.
}

char * problem8_ucgen_form(int edge1, int edge2, int edge3) {
    if (edge1 == edge2 && edge2 == edge3) {
        return "eskenar";
    }
    else if (edge1 == edge2 || edge1 == edge3 || edge2 == edge3) {
        return "ikizkenar";
    }
    else {
        return "cesitkenar";
    }
}

double problem9_calculator(double num1, double num2, char * operator) {
    if (strcmp(operator, "+") == 1) {
        return num1 + num2;
    } else if (strcmp(operator, "-") == 1) {
        return num1 - num2;
    } else if (strcmp(operator, "*") == 1) {
        return num1 * num2;
    } else if (strcmp(operator, "/") == 1) {
        return num1 / num2;
    }
    return 0;
}

double problem10_vize_final_hesaplama(int vize_notu, int final_notu) {
    return (0.4 * vize_notu) + (0.6 * final_notu);
}

int problem10_ders_muafiyet(int vize_notu, int final_notu) {

    if (final_notu < 55) {
        return 0;
    } else if (problem10_vize_final_hesaplama(vize_notu, final_notu) < 45) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    problem1_hello_world();
    printf("problem2: toplama islemi sonucu: %d\n", problem2_topla(10, 34));
    printf("problem3: Teklik Ciftlik durumu: %d\n", problem3_tek_cift(3));
    printf("problem4: Dikdortgenin alani: %d\n", problem4_rectangle_area(3, 4));
    printf("problem5: %.2f Fahrenheit\n", problem5_celcius_to_fahrenheit(30));
    printf("problem6: karakok sonucu: %.2f\n", problem6_squareroot(64));

    int sayi1 = 7;
    int sayi2 = 5;
    problem7_swap(&sayi1, &sayi2);
    printf("problem7: sayi1=%d  sayi2=%d\n", sayi1, sayi2);

    printf("problem8: %s\n", problem8_ucgen_form(3, 3, 3));
    printf("problem9: Islem sonucu: %.3f\n", problem9_calculator(3, 4, "*"));
    printf("problem10: Dersden gecme durumu: %d\n", problem10_ders_muafiyet(30, 55));

    return 0;
}
