#include <stdio.h> 
#include <limits.h> 
#include <locale>

int main() {
    setlocale(LC_ALL, "");
    int n = 10;
    int i;
    int* array = (int*)malloc(n * sizeof(int));

    srand((unsigned int)time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 201 - 100;
        if (array[i] % 2 == 0) {
            array[i] = 0;
        }
        printf("%d\n", array[i]);
    }

    return 0;
}