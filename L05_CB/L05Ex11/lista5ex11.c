#include <string.h>
#include <stdio.h>

/*
                                        LISTA DE EXERC�CIO 05.
NESTE EXERC�CIO VOC� DEVE:
    1 - CODIFICAR A SUBROTINA(S) SOLICITADA(S) NO LOCAL APONTADO
    2 - REALIZAR A(S) CHAMADA(S) DESTA(S) SUBROTINA(S) DE FORMA CORRETA (COLOCAR OS PAR�METROS DE ENTRADA, QUANDO FOR O CASO)
        NO(S) LOCAL(AIS) CORRETO(S) (DENTRO DA MAIN)
*/

// ############### Codifique sua(s) solu��o(��es) aqui. ###################################

void SubstituiLetra(char* palavra, int tamanho, char letra, char nova_letra)
{
    int i;
    if(!isupper(nova_letra))
    {
        for(i = 0; i < tamanho; i++)
        {
            if(palavra[i] == letra)
            {
                palavra[i] = nova_letra;
            }
        }
    }
    else
    {
        for(i = 0; i < tamanho; i++)
        {
            if(palavra[i] == letra)
            {
                palavra[i] = nova_letra;
            }
        }
    }
}



// ##############################################################################


// INSIRA A(S) CHAMADA(S) �(S) SUBROTINA(S) DENTRO DA MAIN. N�O ALTERE NENHUMA OUTRA PARTE DA MAIN.

int main()
{
    char Palavra[11], Letra, NovaLetra;
    int pi;

    for(pi=0; pi<11; pi++)
        Palavra[pi] = '\0';

    scanf("%s", Palavra);
    Palavra[10] = '\0';

    scanf(" %c", &Letra);

    scanf(" %c", &NovaLetra);

    SubstituiLetra(Palavra, 11, Letra, NovaLetra);

    printf("%s\n", Palavra);

    return 0;
}
