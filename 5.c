#include <stdio.h>
#include <stdlib.h>

int main() {
    int holaa;
    int dias_por_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes, dia;
    int dia_del_ano = 365;
    int h;
    
    printf("Ingrese el mes (1-12): ");
    scanf("%d", &mes);
    char *nom_mes[12] = {"Enero", 
    "Febrero", 
    "Marzo", 
    "Abril", 
    "Mayo", 
    "Junio", 
    "Julio", 
    "Agosto",  
    "Septiembre", 
    "Octubre",
    "Noviembre", 
    "Diciembre"};
    
    printf("Ingrese el dia (1-31): ");
    scanf("%d", &dia);
    
    // Verificar si el mes y el dia son válidos
    if (mes < 1 || mes > 12 || dia < 1 || dia > dias_por_mes[mes-1]) {
        printf("Fecha invalida\n");
        return 1;
    }
    
    // Calcular el número de días transcurridos antes del mes actual
    for (int i = 0; i < mes-1; i++) {
        dia_del_ano -= dias_por_mes[i];
    }
    
    // Agregar el número de días transcurridos en el mes actual
    dia_del_ano -= dia;
    
    printf("El dia %d de %s y faltan %d dias para que termine el ano\n", dia, nom_mes[mes-1], dia_del_ano);
    
    return 0;
    }
