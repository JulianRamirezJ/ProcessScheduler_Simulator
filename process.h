#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;

class Process{
    private:
        string id;
        string content;
        int n;
    
    public:
        Process(string _id, string _content, int _n){
            id = _id; 
            content = _content; 
            n  = _n;
        }
        string getID(){return id;}
        string getContent(){return content;}
        int getN(){return n;}
};
