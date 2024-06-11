#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXSIZE  	100

int count_vowels(char []);

int count_vowels(char word[]){
	int counter, i;
	int len = strlen(word);
	counter = 0;
	for (i = 0; i < len; i++){
		switch (word[i]) {
		case 'a':
			counter++;
			continue;
		case 'e':
			counter++;
			continue;
		case 'i':
			counter++;
			continue;
		case 'o':
			counter++;
			continue;
		case 'u':
			counter++;
			continue;
		default:
			continue;
		}
	}

	return counter;
}


int main(int argc, char *argv[]){
	char word[MAXSIZE];

	if (argc < 2) {
        printf("Usage: %s <word>\n", argv[0]);
        return 1;
    }

    strncpy(word, argv[1], MAXSIZE - 1);
    word[MAXSIZE - 1] = '\0';

    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = tolower(word[i]);
    }

	int res = count_vowels(word);
	printf("%d", res);
}