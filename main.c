#include <stdio.h>
#include "header.h"

int main() {
    int choice;

    while (1) {
        printf("\nGestionnaire de tâches\n");
        printf("1. Ajouter une tâche\n");
        printf("2. Modifier une tâche\n");
        printf("3. Supprimer une tâche\n");
        printf("4. Afficher les tâches\n");
       printf("5. filtre par priority les tâches\n");
        printf("6. Quitter\n");

        printf("Choix : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                editTask();
                break;
            case 3:
                deleteTask();
                break;
            case 4:
                printTasks();
                break;
            case 5:
                 {
                    int priority;
                    printf("Entrez la prioriter: ");
                    scanf("%d", &priority);
                    filtre(priority);
                }

                break;
            case 6:
                 printf("Au revoir !\n");
                return 0;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    }

    return 0;
}
