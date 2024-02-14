#include <stdio.h>
#include <string.h>

char *MORSE_CODE[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
    ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", 
    "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
};

void text_to_morse(char *text) {
    while(*text) {
        if(*text >= 'a' && *text <= 'z') {
            printf("%s ", MORSE_CODE[*text - 'a']);
        } else if(*text >= 'A' && *text <= 'Z') {
            printf("%s ", MORSE_CODE[*text - 'A']);
        } else {
            printf(" ");
        }
        text++;
    }
    printf("\n");
}

void morse_to_text(char *morse) {
    char *token = strtok(morse, " ");
    while(token) {
        for(int i = 0; i < 26; i++) {
            if(strcmp(token, MORSE_CODE[i]) == 0) {
                printf("%c", 'A' + i);
                break;
            }
        }
        token = strtok(NULL, " ");
    }
    printf("\n");
}

int main() {
    char text[] = "Hello World";
    text_to_morse(text);

    char morse[] = ".... . .-.. .-.. --- / .-- --- .-. .-.. -..";
    morse_to_text(morse);

    return 0;
}
