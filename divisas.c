#include <stdio.h>
#include <stdlib.h>

int main(){
    float mxn;
    float usd = 19.85;
    float gbp = 27.6;
    float eur = 24;
    int divisa;

    printf("\n        CONVERSOR DE PESOS MEXICANOS (MXN)");
    printf("\n\n MEN%c DE OPCIONES", 233);
    printf("\n\n 1. Convertir a D%cLARES AMERICANOS", 224);
    printf("\n 2. Convertir a LIBRAS ESTERLINAS (GBP)");
    printf("\n 3. Convertir a EUROS (EUR)");
    printf("\n\n 4. SALIR");
    printf("\n\n Seleccione una opci%cn: ", 162);
    scanf("%d", &divisa);
    system("cls");
    if(divisa == 4){
        printf("\n      CONVERSOR DE PESOS MEXICANOS (MXN)");
        printf("\n\n Gracias por utilizar el conversor de divisas.\n\n");
        system("pause");
        exit (-1);
    }else{
        switch (divisa){
            case 1:
                    printf("\n\n Ingrese la cantidad de PESOS MEXICANOS (MXN) a convertir: ");
                    scanf("%f", &mxn);
                    system("cls");
                    printf("\n      CONVERSOR DE PESOS MEXICANOS (MXN)");
                    printf("\n      D%cLARES AMERICANOS (USD)", 224);
                    printf("\n\n %.2f MXN equivalen a %.2f USD.\n\n Tipo de cambio actualizado al 26 de abril de 2021.\n\n", mxn, mxn * usd);
                    system("pause");
                    break;
            case 2:
                    printf("\n\n Ingrese la cantidad de PESOS MEXICANOS (MXN) a convertir: ");
                    scanf("%f", &mxn);
                    system("cls");
                    printf("\n      CONVERSOR DE PESOS MEXICANOS (MXN)");
                    printf("\n      LIBRAS ESTERLINAS (GBP)");
                    printf("\n\n %.2f MXN equivalen a %.2f GBP.\n\n Tipo de cambio actualizado al 26 de abril de 2021.\n\n", mxn, mxn * gbp);
                    system("pause");
                    break;
            case 3:
                    printf("\n\n Ingrese la cantidad de PESOS MEXICANOS (MXN) a convertir: ");
                    scanf("%f", &mxn);
                    system("cls");
                    printf("\n      CONVERSOR DE PESOS MEXICANOS (MXN)");
                    printf("\n      EUROS (EUR)");
                    printf("\n\n %.2f MXN equivalen a %.2f EUR.\n\n Tipo de cambio actualizado al 26 de abril de 2021.\n\n", mxn, mxn * eur);
                    system("pause");
                    break;
            default:
                    printf("\n\n Ingrese una opci%cn v%clida.\n\n", 162, 160);
                    system("pause");
                    break;
        }
    }
    return 0;
}