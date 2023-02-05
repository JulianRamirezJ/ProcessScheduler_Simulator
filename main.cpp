#include <iostream>
#include <cstdlib>
#include "process.h"
#include "processScheduler.h"
#include<cstring>
using namespace std;

int main(){
    Process p1("111","Process 1",100);
    Process p2("112","Process 2",200);
    Process p3("113","Process 3",150);
    PScheduler ps;
    ps.runProcess(p1);
    return 0;
}