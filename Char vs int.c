#include <stdio.h>
#include <time.h>

#define ARRAY_SIZE 1000000
int main(int argc, char *argv[])
{
	
    unsigned char charArray[ARRAY_SIZE];
    int intArray[ARRAY_SIZE];

    // Fill arrays with random values
    for (int i = 0; i < ARRAY_SIZE; i++) {
        charArray[i] = (unsigned char)(i % 256); // Range 0-255
        intArray[i] = i;
    }

    // Measure time for summing char array
    clock_t startChar = clock();
    unsigned int charSum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        charSum += charArray[i];
    }
    clock_t endChar = clock();

    // Measure time for summing int array
    clock_t startInt = clock();
    unsigned int intSum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        intSum += intArray[i];
    }
    clock_t endInt = clock();

    // Calculate elapsed time for both arrays
    double charTime = ((double)(endChar - startChar)) / CLOCKS_PER_SEC;
    double intTime = ((double)(endInt - startInt)) / CLOCKS_PER_SEC;

    printf("Summing char array took: %f seconds\n", charTime);
    printf("Summing int array took: %f seconds\n", intTime);

    return 0;
}
