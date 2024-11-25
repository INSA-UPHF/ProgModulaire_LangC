// string_utils.c

#include <ctype.h>
#include <string.h>
#include "string_utils.h"

void capitalize_words(char *sentence) {
    int capitalize = 1; // Pour capitaliser le premier caractère du mot
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            capitalize = 1;
        } else if (capitalize) {
            sentence[i] = toupper(sentence[i]);
            capitalize = 0;
        }
    }
}

int count_words(const char *sentence) {
    int count = 0;
    int in_word = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
    }
    return count;
}
