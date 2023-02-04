#include<iostream>
#include<stdlib.h>

class Process{
    private:
        char* id;
        char* content;
        int n;
    
    public:
        Process(char*,char*,int)
        char* getID(){return id;}
        char* getContent(){return content;}
        int getN(){return n;}
}

Process:Process(char* _id, char* _content, int _n){
    id = _id; 
    content = _content; 
    n = _n;
}
