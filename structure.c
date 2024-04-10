//this code had been tested and work propely

#include <stdio.h>

#include <stdlib.h>

#include <string.h>



//---------------------------structures-------------------------------

typedef enum {

    first = 1,

    second,

    third,

    fourth,

    fifth

} number;



typedef struct {

    int soni;

    int shieh;

} culture;



struct meleat {

    int irani;

    int arab;

    int amiricaee;

    culture dini;

};



typedef struct {

    char name[15];

    char lastname[15];

    int age;

    float height;

    struct meleat eslame;

} name;



//---------------------------------functions-----------------------------------------

int counter(const char *name) {

    int count = 0;

    while (name[count] != '\0') {

        count += 1;

    }

    return count;

}



void read_detail(name a) {

    printf("Name: %s %s\n", a.name, a.lastname);

    printf("Age: %d\n", a.age);

    printf("Height: %.2f cm\n", a.height);

    printf("Cultural Details:\n");

    printf("Soni: %d\n", a.eslame.dini.soni);

    printf("Shieh: %d\n", a.eslame.dini.shieh);

}



name write_detail(void) {

    name user;

    printf("Enter the first name (max 14 characters): ");

    scanf("%14s", user.name);



    printf("Enter the last name (max 14 characters): ");

    scanf("%14s", user.lastname);



    printf("Enter the age: ");

    scanf("%d", &user.age);



    printf("Enter the height (in cm): ");

    scanf("%f", &user.height);



    printf("Enter cultural details:\n");

    printf("Enter Soni value: ");

    scanf("%d", &user.eslame.dini.soni);

    printf("Enter Shieh value: ");

    scanf("%d", &user.eslame.dini.shieh);



    return user;

}



float calculate_average_height(name *people, int num_people) {

    float total_height = 0.0;

    for (int i = 0; i < num_people; ++i) {

        total_height += people[i].height;

    }

    return total_height / num_people;

}



//-----------------------------------------main-----------------------------------------

int main(int argc, char *argv[]) {



    // Example usage

    name wahid;

    wahid.age = 20;

    strcpy(wahid.name, "Wahid");

    strcpy(wahid.lastname, "Shirdel");

    wahid.height = 175.0;

    wahid.eslame.dini.soni = 10;

    wahid.eslame.dini.shieh = 20;



    printf("Displaying details of wahid:\n");

    read_detail(wahid);



    int num_people = 3;

    name *people = malloc(num_people * sizeof(name));



    printf("\n");



    // Reading details of multiple people

    for (int i = 0; i < num_people; ++i) {

        printf("Enter details of person %d:\n", i + 1);

        people[i] = write_detail();

        printf("\n");

    }



    // Displaying details of all people

    printf("Details of all people:\n");

    for (int i = 0; i < num_people; ++i) {

        printf("Person %d:\n", i + 1);

        read_detail(people[i]);

        printf("\n");

    }



    // Calculating average height

    float average_height = calculate_average_height(people, num_people);

    printf("Average height of all people: %.2f cm\n", average_height);



    // Free dynamically allocated memory

    free(people);



    return 0;

}
