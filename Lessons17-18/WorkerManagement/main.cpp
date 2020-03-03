#include <iostream>
#include "WorkerCollection.h"

using namespace std;

int main()
{
    WorkerCollection wc(1);
    Worker w, x;

    cout << wc.numberOfWorkers() << endl;
    wc.addWorker(w);
    cout << wc.numberOfWorkers() << endl;
    wc.addWorker(x);
    cout << wc.numberOfWorkers() << endl;
    return 0;
}
