#include "WorkerCollection.h"

WorkerCollection::WorkerCollection(int amountOfWorkers)
{
    // Create a collection of workers
    this->collection = new Worker[amountOfWorkers];
    this->length = amountOfWorkers;
    Worker a;
    this->collection[0] = a;
}

WorkerCollection::~WorkerCollection()
{
    //dtor
}

// Get number of workers
int WorkerCollection::numberOfWorkers() {
    return this->length;
}

// Add a WORKER
void WorkerCollection::addWorker(Worker w) {
    // Create new worker
    Worker* new_worker = new Worker[this->length + 1];

    // Add previous data
    for(int i = 0; i < this->length; i++){
        new_worker[i] = this->collection[i];
    }

    new_worker[this->length] = w; // Add new worker
    delete this->collection; // Remove existing
    this->length++; // Update length
    this->collection = new_worker; // Update the collection
}
