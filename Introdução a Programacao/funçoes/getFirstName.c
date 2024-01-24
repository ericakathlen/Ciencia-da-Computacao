#include <stdio.h>
#include <string.h>

// Função para obter o primeiro nome
    char* getFirstName() {
    static char firstName[50]; // Assumindo que o primeiro nome terá no máximo 50 caracteres
    scanf("%s", firstName);
    return firstName;
}

int main() {
    char* userName = getFirstName();
    printf("Seja bem vindo(a) %s\n", userName);

    return 0;
}