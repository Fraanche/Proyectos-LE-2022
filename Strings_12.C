#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#define LONGITUD_MAX 51
#define CANTIDAD_PAL 5
    
int main(void) {
    int cont[CANTIDAD_PAL];
    unsigned char orden[] = [0, 0, 0, 0, 0];
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
    cont[0] = strcmp(palabra2, palabra1) + strcmp(palabra3, palabra1) + strcmp(palabra4, palabra1) + strcmp(palabra5, palabra1);
    printf("%d\n", cont1);
    cont[1] = strcmp(palabra1, palabra2) + strcmp(palabra3, palabra2) + strcmp(palabra4, palabra2) + strcmp(palabra5, palabra2);
    printf("%d\n", cont2);
    cont[2] = strcmp(palabra1, palabra3) + strcmp(palabra2, palabra3) + strcmp(palabra4, palabra3) + strcmp(palabra5, palabra3);
    printf("%d\n", cont3);
    cont[3] = strcmp(palabra1, palabra4) + strcmp(palabra2, palabra4) + strcmp(palabra3, palabra4) + strcmp(palabra5, palabra4);
    printf("%d\n", cont4);
    cont[4] = strcmp(palabra1, palabra5) + strcmp(palabra2, palabra5) + strcmp(palabra3, palabra5) + strcmp(palabra4, palabra5);
    printf("%d\n", cont5);

    for(unsigned char j = 0; j<CANTIDAD_PAL; j++){
        if(cont[0]>cont[j]){
            orden[++pos[0]] = palabra1;     
        }
    }
    for(unsigned char j = 0; j<CANTIDAD_PAL; j++){
        if(cont[1]>cont[j]){
            orden[++pos[1]] = palabra2;     
        }
    }
    for(unsigned char j = 0; j<CANTIDAD_PAL; j++){
        if(cont[2]>cont[j]){
            orden[++pos[2]] = palabra3;     
        }
    }
    for(unsigned char j = 0; j<CANTIDAD_PAL; j++){
        if(cont[3]>cont[j]){
            orden[++pos[3]] = palabra4;      
        }
    }
    for(unsigned char j = 0; j<CANTIDAD_PAL; j++){
        if(cont[4]>cont[j]){
            orden[++pos[4]] = palabra5;     
        }
    }
    
}

