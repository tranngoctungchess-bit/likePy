//
// Created by Admin on 5/1/2026.
//
#import "likePy.h"
def sayHello(str name){
    if(len(name)==0){
        raise "Name cannot be empty!";
    }
    print("Hello ") andprint(name);
}

MAIN{
    sayHello("World");
}