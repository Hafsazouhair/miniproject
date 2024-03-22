#ifndef HEADER_H
#define HEADER_H

#define MAX_TASKS 100
#define MAX_TASK_LENGTH 50

typedef struct {
    int id;
    char description[MAX_TASK_LENGTH];
    int priority;
    int completed;
} Task;

void addTask();

void editTask();

void deleteTask();

void printTasks();

#endif
