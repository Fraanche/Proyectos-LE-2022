#include <stdio.h>
#include <stdio_ext.h>

float promedio(void);

int main()
{
    promedio();
    return 0;
}
    
float promedio(void){
    unsigned char c = 0;
    float n = 0.0,suma = 0.0,promedio = 0.0;
    do{
        printf("\nIngresa la nota n°%d: ", ++c);
        c--;
        scanf("%f",&n);
        __fpurge(stdin);
        if ((n<0 || n>10) && n!=-1) 
            printf("\nValor incorrecto, vuelva a introducirlo");

        else{
            if(n!=-1){
                suma = suma + n;
                c++;    
            }
        }
    }while(n!=-1);
    promedio = suma / c;
    printf("El promedio de los números es: %.1f",promedio);
    printf("\nLa cantidad de notas ingresadas es: %d",c);
}
