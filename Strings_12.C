#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#define LONGITUD_MAX 51

    
int main(void) {
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
    char palabra1[LONGITUD_MAX],
    palabra2[LONGITUD_MAX],
    palabra3[LONGITUD_MAX],
    palabra4[LONGITUD_MAX],
    palabra5[LONGITUD_MAX];
    printf("\nIngrese la primera palabra: ");
    scanf("%s", palabra1);
    __fpurge(stdin);
    printf("\nIngrese la segunda palabra: ");
    scanf("%s", palabra2);
    __fpurge(stdin);
    printf("\nIngrese la tercer palabra: ");
    scanf("%s", palabra3);
    __fpurge(stdin);
    printf("\nIngrese la cuarta palabra: ");
    scanf("%s", palabra4);
    __fpurge(stdin);
    printf("\nIngrese la quinta palabra: ");
    scanf("%s", palabra5);
    __fpurge(stdin);
    cont1 = strcmp(palabra2, palabra1) + strcmp(palabra3, palabra1) + strcmp(palabra4, palabra1) + strcmp(palabra5, palabra1);
    printf("%d\n", cont1);
    cont2 = strcmp(palabra1, palabra2) + strcmp(palabra3, palabra2) + strcmp(palabra4, palabra2) + strcmp(palabra5, palabra2);
    printf("%d\n", cont2);
    cont3 = strcmp(palabra1, palabra3) + strcmp(palabra2, palabra3) + strcmp(palabra4, palabra3) + strcmp(palabra5, palabra3);
    printf("%d\n", cont3);
    cont4 = strcmp(palabra1, palabra4) + strcmp(palabra2, palabra4) + strcmp(palabra3, palabra4) + strcmp(palabra5, palabra4);
    printf("%d\n", cont4);
    cont5 = strcmp(palabra1, palabra5) + strcmp(palabra2, palabra5) + strcmp(palabra3, palabra5) + strcmp(palabra4, palabra5);
    printf("%d\n", cont5);
    
}


