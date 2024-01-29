#include <stdio.h>

struct food {

    int quantity;
    
    float unit_price;

};

int main(){

    struct food paratha, vegetable, water;


    // Paratha

    printf("Quantity Of Paratha: ");

    scanf("%d", &paratha.quantity);
    
    printf("Unit Price: ");
    
    scanf("%f", &paratha.unit_price);


    // Vegetables
    
    printf("Quantity Of Vegetables: ");
    
    scanf("%d", &vegetable.quantity);
    
    printf("Unit Price: ");
    
    scanf("%f", &vegetable.unit_price);


    // Water
    
    printf("Quantity Of Mineral Water: ");
    
    scanf("%d", &water.quantity);
    
    printf("Unit Price: ");
    
    scanf("%f", &water.unit_price);


    // people



    int people;
    
    printf("Number of People: ");

    scanf("%d", &people);


    // total bill




    float total;

    total = (paratha.quantity * paratha.unit_price) + (vegetable.quantity * vegetable.unit_price) + (water.quantity * water.unit_price);


    // Individual


    float per_person;
    
    per_person = total / people;
        
    printf("Individual people will pay: %.2f tk\n", per_person);
    
    return 0;
    
}
