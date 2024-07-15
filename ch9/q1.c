#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *evenFile, *oddFile;

    int i;
    evenFile = fopen("even_numbers.txt", "w");
    if (evenFile == NULL) {
        perror("Failed to open even_numbers.txt");
        return EXIT_FAILURE;
    }

    oddFile = fopen("odd_numbers.txt", "w");
    if (oddFile == NULL) {
        perror("Failed to open odd_numbers.txt");
        fclose(evenFile); 
        return EXIT_FAILURE;
    }

    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
           
            fprintf(evenFile, "%d\n", i);
        } else {
         
            fprintf(oddFile, "%d\n", i);
        }
    }
    
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers from 50 to 70 have been written to even_numbers.txt and odd_numbers.txt.\n");

    return 0;
}

