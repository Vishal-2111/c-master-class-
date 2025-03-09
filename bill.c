#include <stdio.h>

int main() {
    int customer_id, units;
    char name;
    double charge, total_bill;
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    
    printf("Enter units consumed:  ");
    scanf(" %d", &units); 
    
    printf("Enter customer name: ");
    scanf("%d", &name);
    
   
    if (units <= 199) {
        charge = units * 1.20;
    } else if (units >= 200 && units < 400) {
        charge = units * 1.50;
    } else if (units >= 400 && units < 600) {
        charge = units * 1.80;
    } else {
        charge = units * 2.00;
    }
    
    // Applying surcharge if bill exceeds Rs. 400
    if (charge > 400) {
        charge += charge * 0.15;
    }
    
    // Ensuring minimum bill amount is Rs. 100
    total_bill = (charge < 100) ? 100 : charge;
    
    // Displaying the bill
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill: Rs. %.2f\n", total_bill);
    
    return 0;
}

