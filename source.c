#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

// Liste des t�ches
Task tasks[MAX_TASKS];
int numTasks = 0;

void addTask() {
    if (numTasks >= MAX_TASKS) {
        printf("La liste des t�ches est pleine.\n");
        return;
    }
Task newTask;
    newTask.id = numTasks + 1;

    printf("Description de la t�che : ");
    scanf(" %[^\n]", newTask.description);

    printf("Priority de la tache (1 - Faible, 2 - Moyenne, 3 - Haute) : ");
    scanf("%d", &newTask.priority);

    printf("Entrer 0 (termin�e) ou 1 (non termin�e) : ");
    scanf("%d", &newTask.completed);

    tasks[numTasks++] = newTask;
    printf("T�che ajout�e avec succ�s.\n");
}
void editTask() {
    int taskId;
    printf("Entrez l'ID de la t�che � modifier : ");
    scanf("%d", &taskId);

    if (taskId < 1 || taskId > numTasks) {
        printf("ID de t�che invalide.\n");
        return;
    }

    printf("Nouvelle description de la t�che : ");
    scanf(" %[^\n]", tasks[taskId - 1].description);

    printf("Modifier la priorit� de la t�che (1 - Faible, 2 - Moyenne, 3 - Haute) : ");
    scanf("%d", &tasks[taskId - 1].priority);

    printf("Modifier l'�tat de la t�che (0 - Termin�e, 1 - Non termin�e) : ");
    scanf("%d", &tasks[taskId - 1].completed);

    printf("T�che modifi�e avec succ�s.\n");
}
void deleteTask() {
    int taskId;
    printf("Entrez l'ID de la t�che � supprimer : ");
    scanf("%d", &taskId);

    if (taskId < 1 || taskId > numTasks) {
        printf("ID de t�che invalide.\n");
        return;
    }

    for (int i = taskId - 1; i < numTasks - 1; i++) {
        tasks[i] = tasks[i + 1];
    }

    numTasks--;
    printf("T�che supprim�e avec succ�s.\n");
}

void printTasks() {
    printf("Liste des t�ches :\n");
    printf("ID Description Priority Completed\n");
    for (int i = 0; i < numTasks; i++) {
        printf("%d %s %d %s\n", tasks[i].id, tasks[i].description, tasks[i].priority, tasks[i].completed ? "Non termin�e" : "Termin�e");

����}
}
