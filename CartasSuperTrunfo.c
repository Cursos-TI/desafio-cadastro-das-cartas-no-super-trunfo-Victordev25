#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     printf("Inserindo Dados das Cartas!\n");

    /*Dados a ser usados:
    
    Carta 1:

    Estado: A (char)

    Código: A01 (char)

    Nome da Cidade: São Paulo (char)

    População: 12325000 (int)

    Área: 1521.11 km²   (float)

    PIB: 699.28 bilhões de reais   (float)

    Número de Pontos Turísticos: 50  (int)

    */

    //Declarando os dados da Primeira Carta ("Unificando os mesmos Tipos de Dados.")
    char carta_estado_1; //Tipo Char com apenas um Carécter.
    char carta_cod_1[20]; //Tipo char com espaço para 20 caracteres.
    char carta_nome_cidade_1[20]; //Tipo char com espaço para 20 caracteres.

    int carta_populacao_1; //Tipo int 
    int carta_pontos_turismo_1;//Tipo int 

    float carta_area_1;//Tipo Float
    float carta_pib_1;//Tipo Floar

    //Inserir densidade populacional e o PIB per capita.

    //Dados da Primeira Carta.
    printf("\nCarta 1: ");

    printf("\nQual o estado? "); //Pergunta o nome do Estado da Primeira Carta.
        scanf("%c", &carta_estado_1); //Guarde a letra do Estado da Primeira Carta no char carta_estado_1 apenas um único caractere.

    printf("Qual o Código da Carta? ");//Pergunta o Código da Primeira Carta.
        scanf("%s", carta_cod_1);//Guarde o Código da Primeira Carta no char carta_cod_1.

    printf("Qual o Nome da Cidade? ");//Pergunte o nome da Cidade da Primeira Carta.
        scanf("%s", carta_nome_cidade_1);//Guarde o nome da Cidade da Primeira Carta no char carta_nome_cidade_1, não foi defini

    printf("Qual a população da Cidade %s? ", carta_nome_cidade_1);//Pergunte a quantidade da população da Cidade.
        scanf("%d", &carta_populacao_1);//Guarde a quantidade da população da Cidade no espaço carta_populacao_1.
    
    printf("Qual a área da cidade? ");//Pergunte qual a área da cidade.
        scanf("%f", &carta_area_1);//Guarde o valor da área da cidade em carta_area_1.

    printf("Qual o PIB (Produto Interno Bruto) da cidade? "); //Pergunte o PIB da cidade.
        scanf("%f", &carta_pib_1);//Guarde o valor do PIB em carta_pib_1.

    printf("Quantos pontos turismo existe em %s? ", carta_nome_cidade_1);//Pergunta quantos pontos de turismo existe na cidade.
        scanf("%d", &carta_pontos_turismo_1);//Armazena a quantidade em carta_pontos_turismo_1.

    //Calcular da Densidade Populacional (População dividido pelo espaço territorial):
    float densidade_populacional_1 = carta_populacao_1 / carta_area_1;

    //Calcular o PIB per capita (Divide o PIB pela sua população):
    float pib_per_capita_1 = carta_pib_1 / carta_populacao_1;


    printf(" - Dados da Primeira Carta: Cidade %s inseridos com sucesso.\n", carta_nome_cidade_1);//Exibição de Confirmação da Primeira carta, com o nome da cidade.



    // --------------- // ------------------ //


    //Declarando os dados da Segunda Carta. ("Unificado os Tipos de Dados Iguais")
    char carta_estado_2; //Tipo Char com apenas um Carécter.
    char carta_cod_2[20]; //Tipo char com espaço para 20 caracteres.
    char carta_nome_cidade_2[20]; //Tipo char com espaço para 20 caracteres.

    int carta_populacao_2; //Tipo int 
    int carta_pontos_turismo_2; //Tipo int 

    float carta_area_2;//Tipo Float
    float carta_pib_2;//Tipo Floar



    //Dados da Segunda Carta.
    printf("\nCarta 2:");

    printf("\nQual o estado? "); //Pergunta a Letra do Estado da Primeira Carta.
        scanf(" %c", &carta_estado_2); //Guarde a Letra do Estado da Primeira Carta no char carta_estado_2.

    printf("Qual o código da carta? ");//Pergunta o código da Segunda Carta.
        scanf("%s", carta_cod_2);//Armazena o código da Segunda Carta em carta_cod_2.

    printf("Qual o nome da cidade? ");//Pergunta o nome da cidade da Segunda Carta.
        scanf("%s", carta_nome_cidade_2);//Armazena o nome da Segunda Cidade em carta_nome_cidade2. 

    printf("Qual a população da cidade? ");//Pergunta a quantidade populacional da cidade da Segunda Carta. 
        scanf("%d", &carta_populacao_2);//Armazena a quantidade populacional da Segunda Carta em carta_populacao_2.

    printf("Qual a área da cidade? ");//Pergunta a área da Cidade da Segunda Carta.
        scanf("%f", &carta_area_2);//Armazena a área da Segunda Carta em carta_area2.

    printf("Qual o PIB (Produto Interno Bruto) da cidade? "); //Pergunte o valor do PIB da Segunda Cidade.
        scanf("%f", &carta_pib_2);//Armazena o valor do PIB da Segunda Cidade em carta_pib_2.

    printf("Quantos pontos turismo existe em %s? ", carta_nome_cidade_2);//Pergunta a quantidade de Pontos Turisticos da Cidade da Segunda Carta.
        scanf("%d", &carta_pontos_turismo_2);//Armazena a quantidade de pontos turisticos da Segunda Carta em carta_pontos_turismo_2.



     //Calcular da Densidade Populacional (População dividido pelo espaço territorial):
    float densidade_populacional_2 = carta_populacao_2 / carta_area_2;

    //Calcular o PIB per capita (Divide o PIB pela sua população):
    float pib_per_capita_2 = carta_pib_2 / carta_populacao_2;


    //Exibição de Confirmação da Segunda carta, com o nome da cidade.
    printf(" - Dados da Segunda Carta: Cidade %s inseridos com sucesso.\n\n", carta_nome_cidade_2);


    //Exibindo as cartas e seus respectivos atributos.
    printf("Exibindo Cartas:\n");

    printf("1° Carta: \n");//Informação referente a Primeira Carta.
    printf(" - Estado da Carta: %c", carta_estado_1);//Mostra a letra Estado da Primeira Carta.
    printf("\n - Código da Carta: %s", carta_cod_1);//Mostra o Código da Primeira Carta. 
    printf("\n - Nome da Cidade: %s", carta_nome_cidade_1);//Mostra o Nome da Primeira Carta.
    printf("\n - População da Cidade: %d", carta_populacao_1);//Mostra a quantidade populacional da Primeira Carta.
    printf("\n - Área da Cidade: %.3f", carta_area_1);//Mostra a Área da Cidade da Primeira Carta (Com 3 Zeros após o ponto).
    printf("\n - PIB da Cidade: %.3f", carta_pib_1);//Mostra o valor do PIB da Primeira Carta (Com 3 Zeros após o ponto).
    printf("\n - Pontos Turistico da Cidade: %d", carta_pontos_turismo_1);//Mostra a quantidade de pontos turisticos da Cidade da Primeira Carta.
    
    printf("\n - Densidade Populacional: %.2f hab/km²", densidade_populacional_1);//Mostra a Densidade Populaconal da Cidade da Primeira Carta.
    printf("\n - PIB per Capita: R$%.2f", pib_per_capita_1);//Mostra o PIB per Capita da Cidade da Primeira Carta.




    printf("\n\n2° Carta: \n");//Informação referente a Segunda Carta.
    printf(" - Estado da Carta: %c", carta_estado_2);//Mostra a letra Estado da Segunda Carta.
    printf("\n - Código da Carta: %s", carta_cod_2);//Mostra o Código da Segunda Carta. 
    printf("\n - Nome da Cidade: %s", carta_nome_cidade_2);//Mostra o Nome da Segunda Carta.
    printf("\n - População da Cidade: %d", carta_populacao_2);//Mostra a quantidade populacional da Segunda Carta.
    printf("\n - Área da Cidade: %.3f", carta_area_2);//Mostra a Área da Cidade da Segunda Carta (Com 3 Zeros após o ponto).
    printf("\n - PIB da Cidade: %.3f", carta_pib_2);//Mostra o valor do PIB da Segunda Carta (Com 3 Zeros após o ponto).
    printf("\n - Pontos Turistico da Cidade: %d", carta_pontos_turismo_2);//Mostra a quantidade de pontos turisticos da Cidade da Segunda Carta.
   
    printf("\n - Densidade Populacional: %.2f hab/km²", densidade_populacional_2);//Mostra a Densidade Populaconal da Cidade da Segunda Carta.
    printf("\n - PIB per Capita: R$%.2f", pib_per_capita_2);//Mostra o PIB per Capita da Cidade da Segunda Carta.


/*Exemplo de Saída (após a entrada dos dados):


        Comparação de Cartas:

        1° População: Carta 1 venceu (1)

        2° Área: Carta 1 venceu (1)

        3° PIB: Carta 1 venceu (1)

        4° Pontos Turísticos: Carta 1 venceu (1)

        5° Densidade Populacional: Carta 2 venceu (0)

        6° PIB per Capita: Carta 1 venceu (1)

        Super Poder: Carta 1 venceu (1)*/



    int roundOne_C1, roundTwo_C1, roundThree_C1, roundFour_C1, roundFive_C1, roundSix_C1;//Rounds Vitórias 1° Carta 

    int roundOne_C2, roundTwo_C2, roundThree_C2, roundFour_C2, roundFive_C2, roundSix_C2;//Rounds Vitórias 2° Carta

    roundOne_C1 = carta_populacao_1 > carta_populacao_2;
    roundTwo_C1 = carta_area_1 > carta_area_2;
    roundThree_C1 = carta_pib_1 > carta_pib_2;
    roundFour_C1 = carta_pontos_turismo_1 > carta_pontos_turismo_2;
    roundFive_C1 = densidade_populacional_1 < densidade_populacional_2;
    roundSix_C1 = pib_per_capita_1 > pib_per_capita_2;

    roundOne_C2 = carta_populacao_2 > carta_populacao_1;
    roundTwo_C2 = carta_area_2 > carta_area_1;
    roundThree_C2 = carta_pib_2 > carta_pib_1;
    roundFour_C2 = carta_pontos_turismo_2 > carta_pontos_turismo_1;
    roundFive_C2 = densidade_populacional_2 < densidade_populacional_1;
    roundSix_C2 = pib_per_capita_2 > pib_per_capita_1;
    

    printf("\n\n - Pontuação:\n1°Round Carta: %s Pontos: %d | Carta: %s Pontos: %d", carta_nome_cidade_1, roundOne_C1, carta_nome_cidade_2, roundOne_C2);
    printf("\n2°Round Carta: %s Pontos: %d | Carta: %s Pontos: %d", carta_nome_cidade_1, roundTwo_C1, carta_nome_cidade_2, roundTwo_C2);
    printf("\n3°Round Carta: %s Pontos: %d | Carta: %s Pontos: %d", carta_nome_cidade_1, roundThree_C1, carta_nome_cidade_2, roundThree_C2);
    printf("\n4°Round Carta: %s Pontos: %d | Carta: %s Pontos: %d", carta_nome_cidade_1, roundFour_C1, carta_nome_cidade_2, roundFour_C2);
    printf("\n5°Round Carta: %s Pontos: %d | Carta: %s Pontos: %d", carta_nome_cidade_1, roundFive_C1, carta_nome_cidade_2), roundFive_C2;
    printf("\n6°Round Carta: %s Pontos: %d | Carta: %s Pontos: %d", carta_nome_cidade_1, roundSix_C1, carta_nome_cidade_2, roundSix_C2);

    float superPoder_C1, superPoder_C2;

    superPoder_C1 = carta_populacao_1 + carta_area_1 + carta_pib_1 + carta_pontos_turismo_1 + densidade_populacional_1 + pib_per_capita_1;

    superPoder_C2 = carta_populacao_2 + carta_area_2 + carta_pib_2 + carta_pontos_turismo_2 + densidade_populacional_2 + pib_per_capita_2;

    printf("\n\n Fatalité!! SUPER PODER!\n Carta: %s Pontos: %d | Carta: %s Pontos: %d", carta_nome_cidade_1, superPoder_C1 > superPoder_C2, carta_nome_cidade_2, superPoder_C2 > superPoder_C1);


    


    printf("\n\n - Execução finalizada.\n\n");


    return 0;
}
