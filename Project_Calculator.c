#include <stdio.h>
#include <locale.h>

int controll = 404;
float n1, n2, result;

void resultNotification()
{
    printf("O resultado da operação é: %.2f\n", result);
    printf("Deseja continuar? \n 10. Sim\n 0. Não\n");
    scanf("%i", &controll);
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");

    while (controll != 0)
    {
        printf("=============================\n");
        printf("CALCULADORA\n");
        printf("=============================\n");
        printf("\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("0. Sair\n");
        printf("Selecione a opção desejada: \n");
        scanf("%i", &controll);
        printf("Digite o primeiro número: \n");
        scanf("%f", &n1);
        printf("Digite o segundo número: \n");
        scanf("%f", &n2);

        if (controll == 1)
        {
            result = n1 + n2;
            resultNotification();
        }
        else if (controll == 2)
        {
            result = n1 - n2;
            resultNotification();
        }
        else if (controll == 3)
        {
            result = n1 * n2;
            resultNotification();
        }
        else if (controll == 4)
        {
            result = n1 / n2;
            resultNotification();
        }
        else
        {
            printf("\n");
            printf("ERRO 404!!! A opção solicitada é inválida!!\n");
            controll = 404;
            printf("\n");
        }
    }
    return 0;
}
