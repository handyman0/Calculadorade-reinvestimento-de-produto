#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int valorproduto = 0, investimento = 0, rep = 0, precoproduto = 0;
    
    printf("Informe o valor da compra do produto: ");
    scanf("%d", &valorproduto);
    
    printf("Informe o valor de venda do produto: ");
    scanf("%d", &precoproduto);
    
    printf("Informe o valor de investimento: ");
    scanf("%d", &investimento);
    
    printf("Informe a quantidade de reinvestimentos: ");
    scanf("%d", &rep);
    
    int lucro;
    int saldo_dinheiro = investimento;
    int cont;
    system("clear");

    for(cont = 0; cont < rep; cont++) {
        int quantidade = investimento / valorproduto;
        int valorcompra = valorproduto * quantidade;
        int retorno = quantidade * precoproduto;
        lucro = retorno - valorcompra;

        float retornopercentual = ((float)retorno / valorcompra - 1) * 100;

        printf("Quantidade comprada: %d\n", quantidade);
        printf("Valor da compra: %d reais\n", valorcompra);
        printf("Lucro da compra: %d reais \n", lucro);
        printf("Retorno do produto: %d reais\n", retorno);
        printf("Lucro: %.2f%%\n", retornopercentual);
        
        saldo_dinheiro += lucro; // Atualizando o saldo em dinheiro
        printf("Saldo em dinheiro: %d reais\n\n", saldo_dinheiro);

        investimento += lucro;
    }
    return 0;
}

