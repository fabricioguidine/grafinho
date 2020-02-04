#include <iostream>

using namespace std;

No::No(){

}

No::~No(){

}

No::getInfo(){
    return info;
}

No::getProximo(){
    return proximo;
}

No::setInfo(int val){
    info = val;
}

No::setProx(No *p){
    proximo = p;
}
