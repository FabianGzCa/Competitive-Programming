#include <stdio.h>

int main() {
    int val1 = 0, val2 = 0, val3 = 0;
    scanf("%d %d %d", &val1, &val2, &val3);

    char buffer[64]; // Tamaño suficiente para almacenar un entero
    int result = val2;
    int length = 0;

    for (int i = 1; i < val3; i++) {
        result += val1;
        length += sprintf(buffer + length, "%d ", result);
    }
    
    sprintf(buffer + length, "%d", result + val1);
    fputs(buffer, stdout);

    return 0;
}

