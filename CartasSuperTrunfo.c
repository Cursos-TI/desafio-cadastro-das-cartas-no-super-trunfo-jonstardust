#include <stdio.h>

int main(){
    char Estado1, Estado2;
    char Codigo1[15], Cidade1[15], Codigo2[15], Cidade2[15];
    unsigned long int Populacao1, Populacao2;
    float Areakm1, Pib1, Areakm2, Pib2;
    int NumPontosTuristicos1, NumPontosTuristicos2;
    float DensPopulacional1, PibPerCapita1, DensPopulacional2, PibPerCapita2;
    float SuperPoder1, Superpoder2;

    //Cadastro Carta 1
    printf("Carta 1\n");
    printf("Digite o estado: \n");
    scanf(" %c", &Estado1);

    printf("Digite o código: \n");
    scanf(" %s", Codigo1);

    printf("Digite a cidade: \n");
    scanf(" %s", Cidade1);

    printf("Digite o número da população: \n");
    scanf(" %lu", &Populacao1);

    printf("Digite a Área em km²: \n");
    scanf(" %f", &Areakm1);

    printf("Digite o pib: \n");
    scanf(" %f", &Pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &NumPontosTuristicos1);

    DensPopulacional1 = (float) Populacao1 / Areakm1;
    PibPerCapita1 = (float) Pib1 /Populacao1;
    SuperPoder1 = (float) Populacao1 + Areakm1 + NumPontosTuristicos1 + PibPerCapita1 + DensPopulacional1 + (1.0f / DensPopulacional1);

    //Cadastro Carta 2
    printf("Carta 2\n");
    printf("Digite o estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o código: \n");
    scanf(" %s", Codigo2);

    printf("Digite a cidade: \n");
    scanf(" %s", Cidade2);

    printf("Digite o número da população: \n");
    scanf(" %lu", &Populacao2);

    printf("Digite a Área em km²: \n");
    scanf(" %f", &Areakm2);

    printf("Digite o pib: \n");
    scanf(" %f", &Pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &NumPontosTuristicos2);

    DensPopulacional2 = (float) Populacao2/ Areakm2;
    PibPerCapita2 = (float) Pib2 / Populacao2;
    Superpoder2 = (float) Populacao2 + Areakm2 + NumPontosTuristicos2 + PibPerCapita2 + DensPopulacional2 +(1.0f / DensPopulacional2);

    //exibição carta 1
    printf("Carta1\n");
    printf("Estado: %c\n", Estado1);
    printf("Código; %s\n", Codigo1);
    printf("Nome da cidade %s\n", Cidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.3f\n", Areakm1);
    printf("PIB: %.3f\n", Pib1);
    printf("Número de pontos turísticos: %d\n", NumPontosTuristicos1);
    printf(" Densidade Populacional: %.1f\n", DensPopulacional1);
    printf(" PIB por capital: %.1f\n", PibPerCapita1);


    //exibição carta 2
    printf("Carta2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("População %lu\n", Populacao2);
    printf("Área: %.3f\n", Areakm2);
    printf("PIB: %.3f\n", Pib2);
    printf("Número de pontos turísticos %d\n", NumPontosTuristicos2);
    printf("Densidade Populacional: %.1f\n", DensPopulacional2);
    printf("PIB por capital: %.1f\n", PibPerCapita2);

     // comparando cartas
     printf("Comparação de Cartas:\n");
     printf("Populacao: Carta %lu venceu (%lu)\n", (Populacao1 < Populacao2) + 1, (Populacao1 > Populacao2)); 
     printf("Area: Carta %d venceu (%d)\n", (Areakm1 < Areakm2) + 1, (Areakm1 > Areakm2)); 
     printf("PIB: Carta %d venceu (%d)\n", (Pib1 < Pib2) + 1, (Pib1 > Pib2)); 
     printf("Pontos Turisticos: Carta %d venceu (%d)\n", (NumPontosTuristicos1 < NumPontosTuristicos2) + 1, (NumPontosTuristicos1 > NumPontosTuristicos2)); 
     printf("Densidade Populacional: Carta %d venceu (%d)\n", (DensPopulacional1> DensPopulacional2) + 1, (DensPopulacional1 < DensPopulacional2)); 
     printf("PIB per Capita: Carta %d venceu (%d)\n", (PibPerCapita1 < PibPerCapita2) + 1, (PibPerCapita1 > PibPerCapita2)); 
     printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 < Superpoder2) + 1, (SuperPoder1 > Superpoder2)); 


    return 0;

}
