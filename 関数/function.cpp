#include<iostream>

void HelloWorld(int n){
    for(int i = 0; i < n; i++){
        std::cout<<"HelloWorld Function is active" << std::endl;
    }
}

int main(){
    HelloWorld(10);

    return 0;
}