#include <stdio.h>
 
    int main(){
        
    // Definição das variáveis para armazenar as propriedades das cidades
    char estadoA , estadoB;
    char codigo_cartaA[4] , codigo_cartaB[4];
    char cidadeA[20], cidadeB[20];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontos_turisticosA, pontos_turisticosB;
    float densidade_Demografica1 , densidade_Demografica2;
    float percapita1 , percapita2 ;
    
    areaA = 50000;
    areaB = 60000;


// PREENCHIMENTO DE CADASTRO CARTA 1.

    printf("CADASTRO CARTA 1:\n");
    printf("Insira estado carta: ");
    scanf(" %c", &estadoA);
    printf("Insira codigo da carta: ");
    scanf(" %s", &codigo_cartaA);
    printf("Nome da Cidade: ");
    scanf(" %s", &cidadeA);
    printf("População: ");
    scanf(" %d", &populacaoA);
    printf("Area km: %.3f\n", areaA);
    printf("PIB: ");
    scanf(" %f", &pibA);
    printf("Numero de pontos turísticos: ");
    scanf(" %d", &pontos_turisticosA);
    printf("\n\n");

    // PREENCHIMENTO DE CADASTRO CARTA 2.

    printf("CADASTRO CARTA 2:\n");
    printf("Insira estado carta: ");
    scanf(" %c", &estadoB);
    printf("Insira codigo da carta: ");
    scanf(" %s", &codigo_cartaB);
    printf("Nome da Cidade: ");
    scanf(" %s", &cidadeB);
    printf("População: ");
    scanf(" %d", &populacaoB);
    printf("Area km: %.3f\n", areaB);
    printf("PIB: ");
    scanf(" %f", &pibB);
    printf("Numero de pontos turísticos: ");
    scanf(" %d", &pontos_turisticosB);
    printf("\n\n");

    //CALUCULOS DE ATRIBUTOS DENSIDADE POPULACIONAL E PIB PER CAPITA
    densidade_Demografica1 =  (float) populacaoA / areaA;
    percapita1 = ( float) pibA / populacaoA;
    densidade_Demografica2 =  (float) populacaoB / areaB;
    percapita2 = ( float) pibB / populacaoB;

    printf("densidade demorgrafica1 e %.3f\n", densidade_Demografica1);
    printf("percapita1 e %.3f\n", percapita1);
    printf("densidade demorgrafica2 e %.3f\n", densidade_Demografica2);
    printf("percapita2 e %.3f\n", percapita2);
     
    printf("comparando de carta (atributo: AREA) \n");
      
    printf("carta 1 - sao paulo: 50.000\n", areaA);
    printf("carta 2 - rio de janeiro: 60.000\n", areaB);

    if (areaA > areaB){
        printf("carta 1  vence\n");

    } else{
        printf("carta 2  vence");
    }
    
     
  
    return 0;
    }