#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addSupplies(char ***speciesSupplies, int *numSpecies, int speciesIndex, int *numSupplies) {
    printf("Enter the number of supplies for species %d: ", speciesIndex + 1);
    scanf("%d", &numSupplies[speciesIndex]);

    speciesSupplies[speciesIndex] = (char **)malloc(numSupplies[speciesIndex] * sizeof(char *));
    
    for (int i = 0; i < numSupplies[speciesIndex]; i++) {
        speciesSupplies[speciesIndex][i] = (char *)malloc(100 * sizeof(char));
        printf("Enter supply %d for species %d: ", i + 1, speciesIndex + 1);
        getchar();  
        fgets(speciesSupplies[speciesIndex][i], 100, stdin);
        speciesSupplies[speciesIndex][i][strcspn(speciesSupplies[speciesIndex][i], "\n")] = 0;
    }
}

void updateSupply(char ***speciesSupplies, int speciesIndex, int supplyIndex) {
    printf("Enter new name for supply %d for species %d: ", supplyIndex + 1, speciesIndex + 1);
    getchar();  
    fgets(speciesSupplies[speciesIndex][supplyIndex], 100, stdin);
    speciesSupplies[speciesIndex][supplyIndex][strcspn(speciesSupplies[speciesIndex][supplyIndex], "\n")] = 0;
}

void removeSpecies(char ***speciesSupplies, int *numSpecies, int speciesIndex, int *numSupplies) {
    for (int i = 0; i < numSupplies[speciesIndex]; i++) 
    {
        free(speciesSupplies[speciesIndex][i]);
    }
    free(speciesSupplies[speciesIndex]);
    
    for (int i = speciesIndex; i < *numSpecies - 1; i++) {
        speciesSupplies[i] = speciesSupplies[i + 1];
        numSupplies[i] = numSupplies[i + 1];
    }
    (*numSpecies)--;
}

void displayInventory(char ***speciesSupplies, int numSpecies, int *numSupplies) {
    for (int i = 0; i < numSpecies; i++) {
        printf("Species %d supplies:\n", i + 1);
        for (int j = 0; j < numSupplies[i]; j++) {
            printf("%d. %s\n", j + 1, speciesSupplies[i][j]);
        }
    }
}

int main() {
    int numSpecies;
    printf("Enter the number of species: ");
    scanf("%d", &numSpecies);
    
    char ***speciesSupplies = (char ***)malloc(numSpecies * sizeof(char **));
    int *numSupplies = (int *)malloc(numSpecies * sizeof(int));

    for (int i = 0; i < numSpecies; i++) {
        speciesSupplies[i] = NULL;
        numSupplies[i] = 0;
    }

    int choice, speciesIndex, supplyIndex;

    do {
        printf("\nMenu:\n");
        printf("1. Add Supplies\n");
        printf("2. Update Supply\n");
        printf("3. Remove Species\n");
        printf("4. Display Inventory\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter species index (0 to %d): ", numSpecies - 1);
                scanf("%d", &speciesIndex);
                if (speciesIndex >= 0 && speciesIndex < numSpecies) {
                    addSupplies(speciesSupplies, &numSpecies, speciesIndex, numSupplies);
                } else {
                    printf("Invalid species index.\n");
                }
                break;
            case 2:
                printf("Enter species index (0 to %d): ", numSpecies - 1);
                scanf("%d", &speciesIndex);
                if (speciesIndex >= 0 && speciesIndex < numSpecies) {
                    printf("Enter supply index to update (0 to %d): ", numSupplies[speciesIndex] - 1);
                    scanf("%d", &supplyIndex);
                    if (supplyIndex >= 0 && supplyIndex < numSupplies[speciesIndex]) {
                        updateSupply(speciesSupplies, speciesIndex, supplyIndex);
                    } else {
                        printf("Invalid supply index.\n");
                    }
                } else {
                    printf("Invalid species index.\n");
                }
                break;
            case 3:
                printf("Enter species index to remove (0 to %d): ", numSpecies - 1);
                scanf("%d", &speciesIndex);
                if (speciesIndex >= 0 && speciesIndex < numSpecies) {
                    removeSpecies(speciesSupplies, &numSpecies, speciesIndex, numSupplies);
                } else {
                    printf("Invalid species index.\n");
                }
                break;
            case 4:
                displayInventory(speciesSupplies, numSpecies, numSupplies);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    
    for (int i = 0; i < numSpecies; i++) {
        for (int j = 0; j < numSupplies[i]; j++) {
            free(speciesSupplies[i][j]);
        }
        free(speciesSupplies[i]);
    }
    free(speciesSupplies);
    free(numSupplies);

    return 0;
}
