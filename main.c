#include <stdio.h>
#include "header.h"

void main() {
    int choice;

    while (1) {
        printf("\nGestionnaire de t�ches\n");
        printf("1. Ajouter une t�che\n");
        printf("2. Modifier une t�che\n");
        printf("3. Supprimer une t�che\n");
        printf("4. Afficher les t�ches\n");
        printf("5. Quitter\n");

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
                printf("Au revoir !\n");


            default:
                printf("Choix invalide. Veuillez r�essayer.\n");
                break;
        }
    }

����
}
