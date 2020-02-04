using namespace std;

class Aresta{
private:
    int idAlvo;
    Aresta* proxAresta;
    float peso;

public:
    Aresta(int idAlvo);
    ~Aresta();
    int getIdAlvo();
    Aresta* getProxAresta();
    float getPeso();
    void setProxAresta(Aresta* aresta);
    void setPeso(float peso);

};
