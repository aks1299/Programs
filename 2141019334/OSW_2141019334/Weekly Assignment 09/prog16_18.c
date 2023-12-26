#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[30];
    double diameter;
    int moons;
    double or_time, ro_time;
} planet_t;

int main()
{
    // Initialize the variable earth with the values "jupiter", 142.34, 16, 11.9, 9.23
    planet_t var1 = {"jupiter", 142.34, 16, 11.9, 9.23};
    // Initialize the variable earth with the values "jupiter", 142.34, 16, 11.9, 9.23
    planet_t var2 = {.name = "jupiter", .diameter = 142.34, .moons = 16, .or_time = 11.9, .ro_time = 9.23};
    // Declare a pointer to the structure type planet_t
    planet_t *p;

    // Allocate memory for the pointer
    p = malloc(sizeof(planet_t));

    // Check if the allocation was successful
    if (p == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Initialize the structure components with some values
    // Use strcpy to assign a value to the name component
    strcpy(p->name, "saturn");
    p->diameter = 120.536;
    p->moons = 82;
    p->or_time = 29.46;
    p->ro_time = 10.23;

    // Do something with the pointer
    printf("The name of the planet is %s.\n", p->name);

    // Free the memory when the pointer is no longer needed
    free(p);
}