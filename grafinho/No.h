#include <iostream>

using namespace std;

class No{
private:
    int info;
    No *proximo;

public:
    No();
    ~No();
    int getInfo();
    No *getProximo();
    void setInfo(int val);
    void setProx(No *p);
};
