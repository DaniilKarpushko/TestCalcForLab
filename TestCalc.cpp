#include <iostream>
#include <cassert>
int Multiply(int a,int b){
    return a*b;
}
int Sum(int a,int b){
    return a+b;
}
int Diff(int a ,int b){
    return a-b;
}
void TestsMath(){
    assert(Sum(123,16)==139);
    assert(Multiply(11,11)==121);
    assert(Diff(55,15)==40);
    std::cout<<"Math done!"<<'\n';
}

int main() {
    TestsMath();
}