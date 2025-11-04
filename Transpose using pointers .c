#include <stdio.h>
#include <stdlib.h>
int main() {
    int R, C, i, j;
    scanf("%d %d", &R, &C);
    int *A = malloc(R * C * sizeof(int));
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            scanf("%d", A + i * C + j);
    if (R == C) {
        for (i = 0; i < R; i++) {
            for (j = 0; j < C; j++)
                printf("%d ", *(A + j * C + i));
            printf("\n");
        }
    } else {
        int *T = malloc(C * R * sizeof(int));
        for (i = 0; i < R; i++)
            for (j = 0; j < C; j++)
                *(T + j * R + i) = *(A + i * C + j);

        for (i = 0; i < C; i++) {
            for (j = 0; j < R; j++)
                printf("%d ", *(T + i * R + j));
            printf("\n");
        }
        free(T);
    }

    free(A);
    return 0;
}
