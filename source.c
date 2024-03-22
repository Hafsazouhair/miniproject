#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

// Liste des tâches
Task tasks[MAX_TASKS];
int numTasks = 0;

void addTask() {
    if (numTasks >= MAX_TASKS) {
        printf("La liste des tâches est pleine.\n");
        return;
    }
Task newTask;
    newTask.id = numTasks + 1;

    printf("Description de la tâche : ");
    scanf(" %[^\n]", newTask.description);

    printf("Priority de la tache (1 - Faible, 2 - Moyenne, 3 - Haute) : ");
    scanf("%d", &newTask.priority);

    printf("Entrer 0 (terminée) ou 1 (non terminée) : ");
    scanf("%d", &newTask.completed);

    tasks[numTasks++] = newTask;
    printf("Tâche ajoutée avec succès.\n");
}
void editTask() {
    int taskId;
    printf("Entrez l'ID de la tâche à modifier : ");
    scanf("%d", &taskId);

    if (taskId < 1 || taskId > numTasks) {
        printf("ID de tâche invalide.\n");
        return;
    }

    printf("Nouvelle description de la tâche : ");
    scanf(" %[^\n]", tasks[taskId - 1].description);

    printf("Modifier la priorité de la tâche (1 - Faible, 2 - Moyenne, 3 - Haute) : ");
    scanf("%d", &tasks[taskId - 1].priority);

    printf("Modifier l'état de la tâche (0 - Terminée, 1 - Non terminée) : ");
    scanf("%d", &tasks[taskId - 1].completed);

    printf("Tâche modifiée avec succès.\n");
}
void deleteTask() {
    int taskId;
    printf("Entrez l'ID de la tâche à supprimer : ");
    scanf("%d", &taskId);

    if (taskId < 1 || taskId > numTasks) {
        printf("ID de tâche invalide.\n");
        return;
    }

    for (int i = taskId - 1; i < numTasks - 1; i++) {
        tasks[i] = tasks[i + 1];
    }

    numTasks--;
    printf("Tâche supprimée avec succès.\n");
}

void printTasks() {
    printf("Liste des tâches :\n");
    printf("ID Description Priority Completed\n");
    for (int i = 0; i < numTasks; i++) {
        printf("%d %s %d %s\n", tasks[i].id, tasks[i].description, tasks[i].priority, tasks[i].completed ? "Non terminée" : "Terminée");

    }
}
