#include <stdio.h>
#include <stdlib.h>

struct Person {
    int age;
    float weight;
    char name[30];
};
char number[10][8] = {"first","second","third","fourth","fifth","sixth","seventh","eigth","ninth","tenth"};

int main() {
    struct Person *ptr, person1;
    ptr = &person1; // Store the address of person1 in ptr
    int i, n;
    int count = 0;
 
    printf("Enter the number of persons:\n");
    scanf("%d", &n);

    // Allocate memory for n struct Person
    ptr = (struct Person*) malloc(n * sizeof(struct Person));

    for (i = 0; i < n; ++i) {
        printf("Enter %s name and age respectively:\n",number[count]);
        count +=1;
        scanf("%s %d", (ptr + i)->name, &(ptr + i)->age);
    }

    printf("Displaying Information:\n");//printing
    for (i = 0; i < n; ++i)
        printf("Name: %s\tAge: %d\n", (ptr + i)->name, (ptr + i)->age);

    return 0;
}
  
