
#include <stdio.h>
int main(){
    int matriz[3][3]; 
    int principal = 0, secundaria = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Quais os valores da matriz[%d][%d]?:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        principal += matriz[i][i];
        secundaria += matriz[i][3 - 1 - i];
    }
    
    printf("Soma da diagonal principal: %d \nSoma da diagonal secundaria: %d\n", principal, secundaria);
    
    return 0;
}