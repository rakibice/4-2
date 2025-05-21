#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fin, *fout;
    int a, b, caseNum = 1;

    // Open input and output files
    fin = fopen("input.txt", "r");
    fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read input in pairs
    while (fscanf(fin, "%d %d", &a, &b) == 2) {
        int sum = a + b;
        int diff = a - b;
        int prod = a * b;
        int div = (b != 0) ? a / b : 0; // Prevent division by zero

        fprintf(fout, "Case-%d: %d %d %d %d\n", caseNum, sum, diff, prod, div);
        caseNum++;
    }

    // Close files
    fclose(fin);
    fclose(fout);

    printf("Results written to output.txt successfully.\n");
    return 0;
}
