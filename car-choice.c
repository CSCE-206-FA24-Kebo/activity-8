#include <stdio.h>
#include <string.h>

// Struct definitions
struct Date
{
    int day;
    int month;
    int year;
};

struct Engine
{
    float displacement;
    int cylinders;
    char *fuel_type;
};

struct Car
{
    char *name;
    char *color;
    float price;
    int mileage;
    float mpg;
    struct Date manufacture_date;
    struct Engine engine;
};

// Function prototypes
int set_price(struct Car *c, float price);
int set_manufacture_date(struct Car *c, int day, int month, int year);
int set_engine(struct Car *c, float displacement, int cylinders, char *fuel_type);
void print_car(struct Car *c);
void inspect_car(struct Car *c);

// DO NOT MODIFY THE MAIN() FUNCTION
int main()
{
    struct Car toyota_corolla = {.name = "Toyota Corolla", .color = "Silver", .mileage = 5000, .mpg = 32};
    struct Car tesla_model_3 = {.name = "Tesla Model 3", .color = "Red", .mileage = 10000, .mpg = 134};
    struct Car ford_f150 = {.name = "Ford F-150", .color = "Blue", .mileage = 15000, .mpg = 20};
    struct Car honda_civic = {.name = "Honda Civic", .color = "White", .mileage = 8000, .mpg = 33};
    struct Car chevrolet_bolt = {.name = "Chevrolet Bolt", .color = "Green", .mileage = 12000, .mpg = 118};
    struct Car bmw_x5 = {.name = "BMW X5", .color = "Black", .mileage = 20000, .mpg = 25};

    // Toyota Corolla (Valid case)
    if (set_price(&toyota_corolla, 22000) &&
        set_manufacture_date(&toyota_corolla, 15, 6, 2022) &&
        set_engine(&toyota_corolla, 1.8, 4, "gasoline"))
    {
        print_car(&toyota_corolla);
        inspect_car(&toyota_corolla);
    }

    // Tesla Model 3 (Electric car, high MPG)
    if (set_price(&tesla_model_3, 45000) &&
        set_manufacture_date(&tesla_model_3, 1, 3, 2023) &&
        set_engine(&tesla_model_3, 0, 0, "electric"))
    {
        print_car(&tesla_model_3);
        inspect_car(&tesla_model_3);
    }

    // Ford F-150 (Large engine, low MPG)
    if (set_price(&ford_f150, 55000) &&
        set_manufacture_date(&ford_f150, 10, 9, 2021) &&
        set_engine(&ford_f150, 5.0, 8, "gasoline"))
    {
        print_car(&ford_f150);
        inspect_car(&ford_f150);
    }

    // Honda Civic (Valid case, different year)
    if (set_price(&honda_civic, 21000) &&
        set_manufacture_date(&honda_civic, 5, 4, 2019) &&
        set_engine(&honda_civic, 1.5, 4, "gasoline"))
    {
        print_car(&honda_civic);
        inspect_car(&honda_civic);
    }

    // Chevrolet Bolt (Electric car, price at upper limit)
    if (set_price(&chevrolet_bolt, 60000) &&
        set_manufacture_date(&chevrolet_bolt, 20, 11, 2022) &&
        set_engine(&chevrolet_bolt, 0, 0, "electric"))
    {
        print_car(&chevrolet_bolt);
        inspect_car(&chevrolet_bolt);
    }

    // BMW X5 (Invalid price - too high)
    if (set_price(&bmw_x5, 65000) &&
        set_manufacture_date(&bmw_x5, 1, 1, 2023) &&
        set_engine(&bmw_x5, 3.0, 6, "diesel"))
    {
        print_car(&bmw_x5);
        inspect_car(&bmw_x5);
    }

    return 0;
}

// Function implementations
int set_price(struct Car *c, float price)
{
    // TODO
}

int set_manufacture_date(struct Car *c, int day, int month, int year)
{
    // TODO
}

int set_engine(struct Car *c, float displacement, int cylinders, char *fuel_type)
{
    // TODO
}

void print_car(struct Car *c)
{
    // TODO
}

void inspect_car(struct Car *c)
{
    // TODO
}