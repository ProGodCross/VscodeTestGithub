#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pont_arq;   // cria variável ponteiro para o arquivo
    char palavra[20]; // variável do tipo string

    //abrindo o arquivo com tipo de abertura w
    pont_arq = fopen("arquivo_palavra.txt", "w");

    //testando se o arquivo foi realmente criado
    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    else
    {
        printf("Escreva uma palavra para testar gravação de arquivo: ");
        fgets(palavra, 20, stdin);
        strtok(palavra, "\n");
        //scanf("%s", palavra);

        //Sintaxe para para armazenar a string no arquivo:
        //fprintf(<nome_do_ponteiro_para_o_arquivo>, “%s”, <variavel_string>);
        fprintf(pont_arq, "%s", palavra);

        //usando fclose para fechar o arquivo
        fclose(pont_arq);

        printf("Dados gravados com sucesso!");
    }
    
    return 0;
}