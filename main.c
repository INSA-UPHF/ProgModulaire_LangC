// main.c

#include <stdio.h>
#include "math_utils.h"
#include "string_utils.h"
#include "config.h"

int main() {
    // Utilisation des fonctions mathématiques
    int num1 = 5, num2 = 3;
    printf("Addition: %d + %d = %d\n", num1, num2, add(num1, num2));
    printf("Soustraction: %d - %d = %d\n", num1, num2, subtract(num1, num2));

    // Utilisation des fonctions de manipulation de chaînes
    char sentence[] = "bonjour le monde";
    printf("Phrase originale: %s\n", sentence);
    capitalize_words(sentence);
    printf("Phrase capitalisée: %s\n", sentence);
    printf("Nombre de mots: %d\n", count_words(sentence));

    // Utilisation des configurations
    printf("Application: %s (Version: %s)\n", APP_NAME, VERSION);

    return 0;
}
