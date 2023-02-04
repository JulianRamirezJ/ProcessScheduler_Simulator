#include<iostream>
#include<stdlib.h>

class ProcessScheduler{
    public:
        void prepareProcess(Process process);//(Recieve the processes)
        void runProcess(Process process); // (Start running the process)
        void waitProcess(Process process);// (Wait while the process is Ready)
        void finishProcess(Process process);// (Stop the process)
}

void ProcessScheduler::runProcess(Process process){
           cout << "Content: " << process.getContent() << '\n';
}