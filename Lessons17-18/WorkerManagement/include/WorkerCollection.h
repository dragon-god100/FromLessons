#ifndef WORKERCOLLECTION_H
#define WORKERCOLLECTION_H
#include <iostream>
#include <string>

enum Role {
    DIRECTOR,
    MANAGER,
    ENGINEER,
    WORKER
};

typedef struct{
    int id;
    Role role;
    int salary;
    int months;
} Worker;


class WorkerCollection
{
    public:
        WorkerCollection(int amountOfWorkers = 1); // Constructor
        virtual ~WorkerCollection(); // Destructor

        // Return number of workers
        int numberOfWorkers();
        // Add a worker
        void addWorker(Worker w);
        // Remove a worker
        void removeWorker(int index);
        // Show a worker
        void showWorker(int index);
        // Show all workers
        void showAllWorkers();

    protected:

    private:
        Worker* collection;
        int length;
};

#endif // WORKERCOLLECTION_H
