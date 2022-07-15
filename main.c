#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 17\n\n");
    printf("MENU\n\n");
    printf("1-Cachorro quente R$11,00;\n");
    printf("2-Bauru R$8,50;\n");
    printf("3-Misto quente R$8,00;\n");
    printf("4-Hamburguer R$9,00;\n");
    printf("5-Cheeseburguer R$10,00;\n");
    printf("6-Refrigerante R$4,50;\n");
    printf("7-Finalizar;\n");

    int pedido, num1=0, num2=0, num3=0, num4=0, num5=0, num6=0;
    float vtotal;
    char refri[50];
    do{
    printf("Escolha um item:");
    scanf("%d", &pedido);
    switch (pedido){
        case 1:
            printf("Quantidade:");
            scanf("%d", &num1);
            vtotal=vtotal+(num1*11);
            break;
        case 2:
            printf("Quantidade:");
            scanf("%d", &num2);
            vtotal=vtotal+(num2*8.5);
            break;
        case 3:
            printf("Quantidade:");
            scanf("%d", &num3);
            vtotal=vtotal+(num3*8.0);
            break;
        case 4:
            printf("Quantidade:");
            scanf("%d", &num4);
            vtotal=vtotal+(num4*9.0);
            break;
        case 5:
            printf("Quantidade:");
            scanf("%d", &num5);
            vtotal=vtotal+(num5*10.0);
        case 6:
            printf("Quantidade:");
            scanf("%d", &num6);
            printf("Coca, fanta, ou guarana:");
            scanf("%s", refri);
            vtotal=vtotal+(num6*4.5);
            break;
        case 7:
            printf("\nPedido finalizado;\n");
            printf("%d cachorro quente;\n", num1);
            printf("%d Bauru;\n", num2);
            printf("%d Misto quente;\n", num3);
            printf("%d Hamburguer;\n", num4);
            printf("%d Cheeseburguer;\n", num5);
            printf("%d Refrigerante %s;\n", num6, refri);
            printf("Valor total da compra R$%.2f", vtotal);
            break;
        default:
            printf("Numero incorreto, tente novamente;\n");
        }

    }while(pedido!=7);


}
