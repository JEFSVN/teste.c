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
    float superpoderA;
    float superpoderB;

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
    printf("Area km: ");
    scanf(" %f", &areaA);
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
    printf("Area km: ");
    scanf(" %f", &areaB);
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
    printf("densidade dmorgrafica2 e %.3f\n", densidade_Demografica2);
    printf("percapita2 e %.3f\n", percapita2);

    superpoderA = populacaoA + areaA + pibA + percapita1 + 1/ densidade_Demografica1 + pontos_turisticosA;

    printf("superpoder 1 e %3.f\n", superpoderA);

    superpoderB = populacaoB + areaB + pibB + percapita2 + 1/ densidade_Demografica2 + pontos_turisticosB;

    printf("superpoder B e %3.f\n", superpoderB);

    printf("comparacao das cartas\n");

    if (populacaoA > populacaoB) {
        printf("populacao  carta 1 vence\n");

    } else {
        printf("populacao carta 2 vence\n");
        }
        if (areaA > areaB) {
            printf("areaA  carta 1 vence\n");
    
        } else {
            printf("area  carta 2 vence\n");
    }

    if (pibA > pibB) {
        printf("PIB  carta 1 vence\n");

    } else {
        printf("PIB carta 2 vence\n");
        }
        if (pontos_turisticosA > pontos_turisticosB) {
            printf("pontos turisticos  carta 1 vence\n");
    
        } else {
            printf("pontos turisticos carta 2 vence\n");
           }
            if (densidade_Demografica1 < densidade_Demografica2) {
                printf("densidade demografrica  carta 1 vence\n");
        
            } else {
                printf("densidade demografica carta 2 vence\n");
                }
                if (percapita1 > percapita2) {
                    printf("percapita  carta 1 vence\n");
            
                } else {
                    printf("percapita carta 2 vence\n");
                    }
                    if (superpoderA > superpoderB) {
                        printf("superpoder  carta 1 vence\n");
                
                    } else {
                        printf("superpoder carta 2 vence");
                    }
    return 0;
    }
     
    