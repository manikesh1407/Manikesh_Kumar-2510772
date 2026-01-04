#include <stdio.h>

#define VEHICLE_TYPES 4

// Function to display final report
void displayReport(int count[]) {
    int total = 0;

    printf("\n--- Toll Booth Vehicle Report ---\n");
    printf("Cars   : %d\n", count[0]);
    printf("Bikes  : %d\n", count[1]);
    printf("Trucks : %d\n", count[2]);
    printf("Buses  : %d\n", count[3]);

    for (int i = 0; i < VEHICLE_TYPES; i++) {
        total += count[i];
    }

    printf("Total Vehicles: %d\n", total);
}

int main() {
    int vehicleCount[VEHICLE_TYPES] = {0}; // Step 1 & 2
    int n, choice;

    printf("Toll Booth Vehicle Count System\n");
    printf("Vehicle Types:\n");
    printf("1. Car\n");
    printf("2. Bike\n");
    printf("3. Truck\n");
    printf("4. Bus\n");

    printf("\nEnter number of vehicles: ");
    scanf("%d", &n);

    // Step 3 to 6
    for (int i = 0; i < n; i++) {
        printf("Enter vehicle type (1-4): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            vehicleCount[choice - 1]++;
        } else {
            printf("Invalid choice! Try again.\n");
            i--; // retry entry
        }
    }

    // Step 7 & 8
    displayReport(vehicleCount);

    return 0;
}
