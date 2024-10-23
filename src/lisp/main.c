#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32

static char buffer[2048];

char* readline(char* prompt){
    printf("%s", prompt);
    fgets(buffer, 2048, stdin);
    char *cpy = malloc(strlen(buffer)+1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;

}

void add_history(char* unused){}
#else

#include <editline/readline.h>
#endif

int main() {


    printf("Jelly 0.0.1 (2024) \n");
    printf("Press Ctrl+C to exit.\n\n");

    //Main prompt loop
    while (1) {

	char* input = readline("jelly> ");
	add_history(input);
	printf("Recieved %lu characters: %s\n", strlen(input), input);
	free(input);

    }

    return 0;
}
