#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Função para calcular o IRPF
    double calcularIRPF(double rendaAnual) {
    double imposto = 0.0;

    if (rendaAnual <= 50000.0) {
        imposto = (rendaAnual * 0.10) - 1000.0; // 10% - dedução
    } 
    else if (rendaAnual <= 100000.0) {
        imposto = (rendaAnual * 0.20) - 2500.0; // 20% - dedução
    } 
    else {
        imposto = (rendaAnual * 0.30) - 5000.0; // 30% - dedução
    }

    // Se o imposto calculado for negativo, considera como zero
    if (imposto < 0) {
        imposto = 0.0;
    }

    return imposto;
}

// Programa principal para testar a função
int main() {
    double renda;
    system("clear");  // use "cls" se for Windows
    
    printf("=== CALCULO DO IRPF ===\n");
    printf("Digite a renda anual do contribuinte: R$ ");
    scanf("%lf", &renda);

    double imposto = calcularIRPF(renda);

    printf("Renda Anual: R$ %.2lf\n", renda);
    printf("Imposto devido: R$ %.2lf\n", imposto);

    // Exemplos de teste fixos
    /*printf("\n--- Exemplos de teste ---\n");
    printf("Renda: 30.000 -> Imposto: R$ %.2lf\n", calcularIRPF(30000));
    printf("Renda: 75.000 -> Imposto: R$ %.2lf\n", calcularIRPF(75000));
    printf("Renda: 150.000 -> Imposto: R$ %.2lf\n", calcularIRPF(150000));
    */


    return 0;
}
