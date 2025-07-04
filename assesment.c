#include <stdio.h>

int main() {
    // Menu items and their prices
    int code, quantity, choice;
    float price, total = 0;

    // Start of program
    printf("\n******** Welcome to the Food Billing System ********\n");

    do {
        // Display the Menu
        printf("\n------- MENU -------\n");
        printf("Code\tItem\t\tPrice (Rs)\n");
        printf("1\tBurger\t\t80\n");
        printf("2\tPizza\t\t150\n");
        printf("3\tPasta\t\t120\n");
        printf("4\tSandwich\t60\n");
        printf("5\tCoffee\t\t50\n");
        printf("--------------------\n");

        // Take user input
        printf("Enter the code of the item you want to order: ");
        scanf("%d", &code);
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        // Use if-else to map code to price
        if (code == 1) {
            price = 80 * quantity;
            printf("You ordered %d Burger(s) - Rs. %.2f\n", quantity, price);
        } else if (code == 2) {
            price = 150 * quantity;
            printf("You ordered %d Pizza(s) - Rs. %.2f\n", quantity, price);
        } else if (code == 3) {
            price = 120 * quantity;
            printf("You ordered %d Pasta(s) - Rs. %.2f\n", quantity, price);
        } else if (code == 4) {
            price = 60 * quantity;
            printf("You ordered %d Sandwich(es) - Rs. %.2f\n", quantity, price);
        } else if (code == 5) {
            price = 50 * quantity;
            printf("You ordered %d Coffee(s) - Rs. %.2f\n", quantity, price);
        } else {
            printf("Invalid code! Please try again.\n");
            continue; // Skip the rest of the loop
        }

        // Add to total bill
        total = total + price;

        // Ask if the user wants to order more
        printf("Do you want to order more? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1); // Loop if user wants to order more

    // Final bill
    printf("\n******** Final Bill ********\n");
    printf("Total Amount to Pay: Rs. %.2f\n", total);
    printf("Thank you for visiting! Come again.\n\n");

    return 0;
}