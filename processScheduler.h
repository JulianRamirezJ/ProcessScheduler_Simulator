#include <iostream>
#include <stdlib.h>
#include<cstring>
#include "process.h"
using namespace std;

class PScheduler{
public:
    void prepareProcess(Process p);  // (Recieve the processes)
    void runProcess(Process p) {
        cout << "Content: " << p.getContent() << '\n';
    };  // (Start running the process)
    void waitProcess(Process p);  // (Wait while the process is Ready)
    void finishProcess(Process p);  // (Stop the process)
};
