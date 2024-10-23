#include <stdio.h>

void forhello() {
    for(int i = 0; i < 5; i++){
	printf("Hello, World!\n");
    }
}

void whilehello() {
    int i = 0;
    while(i < 5){
	printf("Hello, World!\n");
	i++;
    }
}

void ntimeshello(int n) {
    for(int i = 0; i < n; i++){
	printf("Hello, World!\n");
    }
}

int main() {
    forhello();
    whilehello();
    ntimeshello(10);
}
