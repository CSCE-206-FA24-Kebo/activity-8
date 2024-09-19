#include <stdio.h>
#include <string.h>

// Struct definitions
struct Date {
    int day;
    int month;
    int year;
};

struct Engine {
    float displacement;
    int cylinders;
    char fuel_type[20];
};

struct Car {
    char name[50];
    char color[20];
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
void calculate_total_value(struct Car *c, int num_years);
void calculate_annual_fuel_cost(struct Car *c, int num_years, int annual_mileage, float initial_fuel_price, float annual_price_increase);

// DO NOT MODIFY THE MAIN() FUNCTION
int main() {
    struct Car my_car;
    
    strcpy(my_car.name, "Toyota Corolla");
    strcpy(my_car.color, "Silver");
    set_price(&my_car, 22000);
    my_car.mileage = 15000;
    my_car.mpg = 32;
    set_manufacture_date(&my_car, 15, 6, 2022);
    set_engine(&my_car, 1.8, 4, "gasoline");

    printf("Car Details:\n");
    print_car(&my_car);
    inspect_car(&my_car);

    calculate_total_value(&my_car, 5);
    calculate_annual_fuel_cost(&my_car, 5, 12000, 3.50, 0.03);

    return 0;
}

int set_price(struct Car *c, float price) {
    if (price >= 5000 && price <= 60000) {
        c->price = price;
        return 1;
    }
    return 0;
}

int set_manufacture_date(struct Car *c, int day, int month, int year) {
    if (year >= 1886 && year <= 2024 && month >= 1 && month <= 12 && day >= 1 && day <= 31) {
        c->manufacture_date.day = day;
        c->manufacture_date.month = month;
        c->manufacture_date.year = year;
        return 1;
    }
    return 0;
}

int set_engine(struct Car *c, float displacement, int cylinders, char *fuel_type) {
    if (displacement > 0 && displacement <= 10 && cylinders > 0 && cylinders <= 16) {
        c->engine.displacement = displacement;
        c->engine.cylinders = cylinders;
        strcpy(c->engine.fuel_type, fuel_type);
        return 1;
    }
    return 0;
}

void print_car(struct Car *c) {
    printf("Name: %s\n", c->name);
    printf("Color: %s\n", c->color);
    printf("Price: $%.2f\n", c->price);
    printf("Mileage: %d\n", c->mileage);
    printf("MPG: %.1f\n", c->mpg);
    printf("Manufacture Date: %d/%d/%d\n", c->manufacture_date.day, c->manufacture_date.month, c->manufacture_date.year);
    printf("Engine: %.1fL, %d cylinders, %s\n", c->engine.displacement, c->engine.cylinders, c->engine.fuel_type);
}

void inspect_car(struct Car *c) {
    if (c->price >= 5000 && c->price <= 60000 &&
        c->mpg > 30 &&
        c->manufacture_date.year > 2016 &&
        c->engine.displacement < 2.0 &&
        c->manufacture_date.year >= 2020) {
        printf("Inspection Result: Pass\n");
    } else {
        printf("Inspection Result: Fail\n");
    }
}

void calculate_total_value(struct Car *c, int num_years) {
    // TODO
}

void calculate_annual_fuel_cost(struct Car *c, int num_years, int annual_mileage, float initial_fuel_price, float annual_price_increase) {
    // TODO
}