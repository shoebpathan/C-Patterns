#include <stdio.h>

struct Car {
    int carId;
    char carName[20];
    char carFuelType[10];
    int carCapacity;
};

void scanCar(struct Car *car) {
    printf("Enter Car ID: ");
    scanf("%d", &car->carId);
    
    printf("Enter Car Name: ");
    scanf("%s", car->carName);
    
    printf("Enter Car Fuel Type (petrol or diesel): ");
    scanf("%s", car->carFuelType);
    
    printf("Enter Car Capacity: ");
    scanf("%d", &car->carCapacity);
}


void displayCar(struct Car car) {
    printf("Car ID: %d\n", car.carId);
    printf("Car Name: %s\n", car.carName);
    printf("Car Fuel Type: %s\n", car.carFuelType);
    printf("Car Capacity: %d\n", car.carCapacity);
}

int main() {
    struct Car myCar;
    
    printf("Enter Car Details:\n");
    scanCar(&myCar);
    
    printf("\nCar Details Entered:\n");
    displayCar(myCar);
    
    return 0;
}
