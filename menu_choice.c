#include <stdio.h>
 main() 
 {
    int choice, quantity;
    float totalAmount = 0;
    float price;

    while (1) {

        printf("------- Menu -------\n");
        printf("1. Pizza  (Price = 180 Rs/pcs)\n");
        printf("2. Burger (Price = 100 Rs/pcs)\n");
        printf("3. Dosa   (Price = 120 Rs/pcs)\n");
        printf("4. Idli   (Price = 50 Rs/pcs)\n");
        printf("Please enter your choice (1-4): ");
        scanf("%d", &choice);

        
        switch(choice) {
            case 1:
                price = 180;
                printf("You have selected Pizza.\n");
                break;
            case 2:
                price = 100;
                printf("You have selected Burger.\n");
                break;
            case 3:
                price = 120;
                printf("You have selected Dosa.\n");
                break;
            case 4:
                price = 50;
                printf("You have selected Idli.\n");
                break;
            default:
                printf("Invalid choice! Please choose between 1 and 4.\n");
                continue;
        }

        
        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        
        totalAmount += price * quantity;
        printf("Amount for this order: %.2f Rs\n", price * quantity);
        printf("Total amount so far: %.2f Rs\n", totalAmount);

        
        char moreOrders;
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrders); 
        if (moreOrders == 'n' || moreOrders == 'N') {
            break; 
        }
    }

    printf("\n-------------------------\n");
    printf("Your final total amount is: %.2f Rs\n", totalAmount);
    printf("Thank you for your order!\n");

    return 0;
}
