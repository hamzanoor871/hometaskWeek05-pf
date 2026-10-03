#include <stdio.h>

int main() {
    int totalContainers;
    int weight, cargoType;
    int trackingCode;

    printf("Enter number of containers: ");
    scanf("%d", &totalContainers);

    for (int containerNumber = 1;containerNumber <= totalContainers;containerNumber++) {
        printf("\nContainer %d\n", containerNumber);
        printf("Enter weight: ");
        scanf("%d", &weight);
        printf("Enter cargo type (1-General, 2-Hazardous, 3-Refrigerated): ");
        scanf("%d", &cargoType);

       
        if (cargoType == 1) {
            if (weight <= 20000) {
                printf("Loading allowed\n");
            }
            else {
                printf("Loading not allowed\n");
            }
        }
        else if (cargoType == 2) {
            if (weight <= 15000 && containerNumber % 2 != 0) {
                printf("Loading allowed\n");
            }
            else {
                printf("Loading not allowed\n");
            }
        }
        else if (cargoType == 3) {
            if (weight <= 18000) {
                printf("Loading allowed\n");
            }
            else {
                printf("Loading not allowed\n");
            }
        }

        
        trackingCode = (weight % 97) % 100;

        printf("Tracking code: %02d\n", trackingCode);
    }

    return 0;
}
