// Define a structure type auto t to represent an automobile. Include components for the make and model (strings), the odometer reading, the manufacture and purchase dates (use another user-defined type called date t ), and the gas tank (use a user-defined type tank t with components for tank ca-pacity and current fuel level, giving both in gallons). Write I/O functions scan date , scan tank , scan auto , print date , print tank , and print auto , and also write a driver function that repeatedly fills and displays an auto structure variable until EOF is encountered in the input file. Here is a small data set to try:
// Mercury Sable 99842 1 18 2001 5 30 1991 16 12.5
// Mazda Navajo 123961 2 20 1993 6 15 1993 19.3 16.7
#include <stdio.h>

// Structure definition for date
typedef struct
{
    int month, day, year;
} date_t;

// Structure definition for gas tank
typedef struct
{
    double capacity;
    double currentFuelLevel;
} tank_t;

// Structure definition for automobile
typedef struct
{
    char make[50];
    char model[50];
    int odometerReading;
    date_t manufactureDate;
    date_t purchaseDate;
    tank_t gasTank;
} auto_t;

// Function to scan a date
void scanDate(date_t *date)
{
    scanf("%d %d %d", &date->month, &date->day, &date->year);
}

// Function to scan a tank
void scanTank(tank_t *tank)
{
    scanf("%lf %lf", &tank->capacity, &tank->currentFuelLevel);
}

// Function to scan an automobile
void scanAuto(auto_t *autoMobile)
{
    scanf("%s %s %d", autoMobile->make, autoMobile->model, &autoMobile->odometerReading);
    scanDate(&autoMobile->manufactureDate);
    scanDate(&autoMobile->purchaseDate);
    scanTank(&autoMobile->gasTank);
}

// Function to print a date
void printDate(date_t date)
{
    printf("%d/%d/%d", date.month, date.day, date.year);
}

// Function to print a tank
void printTank(tank_t tank)
{
    printf("%.2lf/%.2lf", tank.capacity, tank.currentFuelLevel);
}

// Function to print an automobile
void printAuto(auto_t autoMobile)
{
    printf("%s %s %d ", autoMobile.make, autoMobile.model, autoMobile.odometerReading);
    printDate(autoMobile.manufactureDate);
    printf(" ");
    printDate(autoMobile.purchaseDate);
    printf(" ");
    printTank(autoMobile.gasTank);
    printf("\n");
}

int main()
{
    auto_t automobile;

    while (scanf("%s", automobile.make) != EOF)
    {
        scanAuto(&automobile);
        printAuto(automobile);
    }

    return 0;
}
