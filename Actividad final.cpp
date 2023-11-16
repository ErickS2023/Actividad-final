
//ejercicio 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int i, j, n = 5, opc;
    srand(time(NULL));

    int A[5][7];
    
    printf("Matriz A:\n");
    for(i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            A[i][j] = rand() % 10;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    while (1) {
        printf("\nElija la opcion que desea\n");
        printf("1. Suma de la diagonal principal.\n");
        printf("2. Suma de la primera fila.\n");
        printf("3. Suma de la ultima columna.\n");
        printf("4. Suma de las filas pares.\n");
        printf("5. Suma de las columnas impares.\n");
        printf("6. Suma del triangular superior y la diagonal principal.\n");
        printf("7. Suma del triangular inferior y la diagonal principal.\n");
        printf("8. Terminar el programa.\n");
        printf("Opcion: ");
        scanf("%d", &opc);

        if (opc == 8) {
            break;
        }

        int suma = 0;
        switch (opc) {
            case 1:
                for (i = 0; i < n; i++) {
                    suma += A[i][i];
                }
                printf("La suma de la diagonal principal es: %d\n", suma);
                break;

            case 2:
                for (j = 0; j < 7; j++) {
                    suma += A[0][j];
                }
                printf("La suma de la primera fila es: %d\n", suma);
                break;

            case 3:
                for (i = 0; i < 5; i++) {
                    suma += A[i][6];
                }
                printf("La suma de la última columna es: %d\n", suma);
                break;

            case 4:
                for (i = 0; i < 5; i += 2) {
                    for (j = 0; j < 7; j++) {
                        suma += A[i][j];
                    }
                }
                printf("La suma de las filas pares es: %d\n", suma);
                break;

            case 5:
                for (i = 0; i < 5; i++) {
                    for (j = 1; j < 7; j += 2) {
                        suma += A[i][j];
                    }
                }
                printf("La suma de las columnas impares es: %d\n", suma);
                break;

            case 6:
                for (i = 0; i < n; i++) {
                    for (j = i; j < 7; j++) {
                        suma += A[i][j];
                    }
                }
                printf("La suma del triangular superior y la diagonal principal es: %d\n", suma);
                break;

            case 7:
                for (i = 0; i < n; i++) {
                    for (j = 0; j <= i; j++) {
                        suma += A[i][j];
                    }
                }
                printf("La suma del triangular inferior y la diagonal principal es: %d\n", suma);
                break;

            default:
                printf("Opcion no valida. Por favor, elija otra opcion valida.\n");
                break;
        }
    }
    
    printf("\a");
    return 0;
}

/*
//ejercicio 2
#include <stdio.h>

void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int esMatrizMagica(int matriz[3][3]) {
 
    int sumaFila = matriz[0][0] + matriz[0][1] + matriz[0][2];

    for (int i = 1; i < 3; i++) {
        int sumaFilaActual = matriz[i][0] + matriz[i][1] + matriz[i][2];
        if (sumaFilaActual != sumaFila) {
            return 0;
        }
    }

    for (int j = 0; j < 3; j++) {
        int sumaColumna = matriz[0][j] + matriz[1][j] + matriz[2][j];
        if (sumaColumna != sumaFila) {
            return 0; 
        }
    }

    int sumaDiagonal1 = matriz[0][0] + matriz[1][1] + matriz[2][2];
    int sumaDiagonal2 = matriz[0][2] + matriz[1][1] + matriz[2][0];

    if (sumaDiagonal1 != sumaFila || sumaDiagonal2 != sumaFila) {
        return 0; 
    }

    return 1; 
}

int main() {
    int matriz[3][3];

    printf("Ingrese los elementos de la matriz de 3x3 por filas no por columnas:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz ingresada:\n");
    imprimirMatriz(matriz);

    if (esMatrizMagica(matriz)) {
        printf("La matriz es magica.\n");
    } else {
        printf("La matriz no es magica.\n");
    }
    
    printf("\a");
    return 0;
}
|*/


























