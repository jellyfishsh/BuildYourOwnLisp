#include <stdio.h>


typedef struct {
    int x;
    int y;
} point;

void printPoint( point a ){
    printf("(%d, ", a.x);
    printf("%d)", a.y);
}

int main() {
    point p;
    p.x = 5;
    p.y = 6;
    printPoint(p);

}
