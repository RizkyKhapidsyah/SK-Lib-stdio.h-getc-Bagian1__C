#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile;
    int c;
    int n = 0;
    pFile = fopen("myfile.txt", "r");

    if (pFile == NULL) {
        perror("Error opening file");
    } else {
        do {
            c = getc(pFile);
            
            if (c == '$') {
                n++;
            }
        } while (c != EOF);

        fclose(pFile);
        printf("File contains %d$.\n", n);
    }

    _getch();
    return 0;
}