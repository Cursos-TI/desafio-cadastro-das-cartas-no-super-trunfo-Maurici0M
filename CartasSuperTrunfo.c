#include <stdio.h>

//bibliotecas para utilizar o gerador de numeros da linguagem C
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));  // necessario para iniciar o gerador de números aleatórios

    //carta 1
    char 
    estado_1, 
    nome_cidade_1[25];
    
    int 
    codigo_carta_1, 
    populacao_1, 
    pontos_turisticos_1;
    
    float 
    area_cidade_1, 
    pib_cidade_1;

    //carta 2
    char 
    estado_2, 
    nome_cidade_2[25];
    
    int 
    codigo_carta_2, 
    populacao_2, 
    pontos_turisticos_2;

    float 
    area_cidade_2, 
    pib_cidade_2;

    //Gerando valores para os codigos das cartas automaticamente
    codigo_carta_1 = (rand() % 10) + 1;      // de 1 a 10
    codigo_carta_2 = (rand() % 19) + 2;      // de 2 a 20


    /*-----------------------------Iniciando a aplicação-----------------------------*/

    printf(
        "\nBem vindo ao Super Trunfo!"
        "\nVamos iniciar o processo de cadastramento das cartas.\n"
    );

    //declarando o estado
    printf("\nDigite uma letra que representará o estado da carta 1: ");

    scanf("%c", &estado_1);

    printf("\nBeleza! Digite outra letra, agora para representar o estado da carta 2: ");

    scanf(" %c", &estado_2);

    //declarando a cidade
    printf("\nAgora, digite o nome da cidade da carta 1: ");

    scanf("%s", nome_cidade_1);

    printf("\nQual será o nome da cidade da carta 2? ");

    scanf("%s", nome_cidade_2);


    //declarando quantidade de habitantes
    printf(
        "\nLegal, já temos as letras que representarão os estados, e também os nomes das cidades que representarão as cartas 1 e 2."
        "\nVamos continuar! Digite o número de habitantes que terá em %s: ", nome_cidade_1
    );

    scanf("%d", &populacao_1);
    
    printf ("\nE na cidade de %s? Digite o número de habitantes: ", nome_cidade_2);

    scanf("%d", &populacao_2);

    //declarando a área das cidades
    printf(
        "\nPensando que %s terá aproximadamente %d habitantes, qual será a área em m² dessa cidade? (Digite somente números) ", 
        nome_cidade_1, populacao_1);

    scanf("%f", &area_cidade_1);

    printf(
        "\nLegal! E a cidade de %s? Terá quantos m²? ", nome_cidade_2
    );

    scanf("%f", &area_cidade_2);

    //declarando o PIB
    printf(
        "\nMuito bem! Pensando que a cidade de %s terá aproximadamente %d habitantes e uma área aproximada de %.2f m², qual será o valor do PIB (Produto Interno Bruto) produzido anualmente por essa cidade? ", 
        nome_cidade_1, populacao_1, area_cidade_1
    );

    scanf("%f", &pib_cidade_1);

    printf(
        "\nJá a cidade de %s, com seus %d habitantes e área aproximada de %.2f m², terá um PIB anual equivalente a quanto? ",
        nome_cidade_2, populacao_2, area_cidade_2
    );

    scanf("%f", &pib_cidade_2);

    //declarando quantidade pontos turísticos
    printf(
        "\nQuase terminando!\n" 
        "\nLevando em conta que a cidade de %s terá %d habitantes, e uma área de %.2f m², quantos pontos turísticos teremos nela? ", 
        nome_cidade_1, populacao_1, area_cidade_1
    );

    scanf("%d", &pontos_turisticos_1);
    
    
    printf("E na cidade de %s, com seus %d habitantes e área aproximada de %.2f m², terá quantos pontos turísticos? ", nome_cidade_2, populacao_2, area_cidade_2
    );

    scanf("%d", &pontos_turisticos_2);

    //imprimindo as cartas no terminal
    
    printf(
        "\nGerando suas cartas...\n"

        "\nCarta 1: \n"

        "\nEstado: %c"
        "\nCódigo: %c%d"
        "\nNome da Cidade: %s"
        "\nPopulação: %d"
        "\nÁrea: %.2f m²" 
        "\nPIB: R$ %.2f"
        "\nNúmero de Pontos Turísticos: %d\n", 

        estado_1, 
        estado_1, codigo_carta_1, 
        nome_cidade_1, 
        populacao_1, 
        area_cidade_1, 
        pib_cidade_1, 
        pontos_turisticos_1
    );

    printf(
        "\nCarta 2: \n"

        "\nEstado: %c"
        "\nCódigo: %c%d"
        "\nNome da Cidade: %s"
        "\nPopulação: %d"
        "\nÁrea: %.2f m²" 
        "\nPIB: R$ %.2f"
        "\nNúmero de Pontos Turísticos: %d\n", 

        estado_2, 
        estado_2, codigo_carta_2, 
        nome_cidade_2, 
        populacao_2, 
        area_cidade_2, 
        pib_cidade_2, 
        pontos_turisticos_2
    );


    return 0;
}