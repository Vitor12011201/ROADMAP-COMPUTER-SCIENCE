/*Objetivo: Abstrair coordenadas geográficas dentro de uma struct anônima.
1. Crie um typedef chamado Coordenada para o tipo double.
2. Crie uma struct anônima com typedef chamada Localizacao que contenha:
Coordenada latitude;
Coordenada longitude;
3. Crie uma função exibirLocal(Localizacao l) que imprime as coordenadas.
4. No main, instancie um local (ex: San Jose: lat -76.30, lon -39.96) e passe para a função.*/

#include <stdio.h>

typedef double Coordenada;

 typedef struct
{
    Coordenada latitude;
    Coordenada longitude;
} Localizacao;

void exibirLocal(Localizacao l)
{
    printf("Local: San Jose (Lat: %.2f),(Lon: %.2f)", l.latitude, l.longitude);
}

int main()
{
    Localizacao l_1 = {.latitude = -76.30, .longitude = -39.96};

    exibirLocal(l_1);

    return 0;
}
