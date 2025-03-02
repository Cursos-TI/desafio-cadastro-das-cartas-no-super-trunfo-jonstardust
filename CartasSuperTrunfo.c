#include <stdio.h>

int main(){
    char Estado1, Estado2;
    char Codigo1[15], Cidade1[15], Codigo2[15], Cidade2[15];
    int Populacao1, Populacao2;
    float Areakm1, Pib1, Areakm2, Pib2;
    int NumPontosTuristicos1, NumPontosTuristicos2;
    float DensPopulacional1, PibPerCapita1, DensPopulacional2, PibPerCapita2;

    //Cadastro Carta 1
    printf("Carta 1\n");
    printf("Digite o estado: \n");
    scanf(" %c", &Estado1);

    printf("Digite o código: \n");
    scanf(" %s", Codigo1);

    printf("Digite a cidade: \n");
    scanf(" %s", Cidade1);

    printf("Digite o número da população: \n");
    scanf(" %d", &Populacao1);

    printf("Digite a Área em km²: \n");
    scanf(" %f", &Areakm1);

    printf("Digite o pib: \n");
    scanf(" %f", &Pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &NumPontosTuristicos1);

    DensPopulacional1 = (float) Populacao1 / Areakm1;
    PibPerCapita1 = (float) Pib1 /Populacao1;

    //Cadastro Carta 2
    printf("Carta 2\n");
    printf("Digite o estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o código: \n");
    scanf(" %s", Codigo2);

    printf("Digite a cidade: \n");
    scanf(" %s", Cidade2);

    printf("Digite o número da população: \n");
    scanf(" %d", &Populacao2);

    printf("Digite a Área em km²: \n");
    scanf(" %f", &Areakm2);

    printf("Digite o pib: \n");
    scanf(" %f", &Pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &NumPontosTuristicos2);

    DensPopulacional2 = (float) Populacao2/ Areakm2;
    PibPerCapita2 = (float) Pib2 / Populacao2;

    //exibição carta 1
    printf("Carta1\n");
    printf("Estado: %c\n", Estado1);
    printf("Código; %s\n", Codigo1);
    printf("Nome da cidade %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.5f\n", Areakm1);
    printf("PIB: %.5f\n", Pib1);
    printf("Número de pontos turísticos: %d\n", NumPontosTuristicos1);
    printf(" Densidade Populacional: %.1f\n", DensPopulacional1);
    printf(" PIB por capital: %.1f\n", PibPerCapita1);


    //exibição carta 2
    printf("Carta2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("População %d\n", Populacao2);
    printf("Área: %.5f\n", Areakm2);
    printf("PIB: %.5f\n", Pib2);
    printf("Número de pontos turísticos %d\n", NumPontosTuristicos2);
    printf("Densidade Populacional: %.1f\n", DensPopulacional2);
    printf("PIB por capital: %.1f\n", PibPerCapita2);


    return 0;

}
