/*
 * Este arquivo é parte de grafinho.cbp.

 * Desenvolvido para o trabalho da disciplina de Teoria dos Grafos (DCC059),
 * da UFJF, do professor Stênio Sã. O programa é capaz de armazenar dados pa-
 * ra construção de algoritmos de busca para problemas relacionados a Grafos.
 *
 * Este programa é um software livre e pode ser modificado. Não possui garan-
 * tias de qualquer tipo de ocorrências - excludente as documentadas - e fei-
 * to com intenções particulares.
 *
 * Para acessar a documentação com os requisitos de construção do pro-
 * grama, acesse <https://www.github.com/fabricioguidine/...>.
 */

/**
 * Declaração do header da classe Grafo
 *
 * Um grafo é uma estrutura que armazena informações sobre conjuntos, es-
 * crito como G(V,A) com V significando vértice e A aresta.
 */

#include <iostream>
#include <Grafo.cpp>

using namespace std;

class Grafo{

    public:
        Grafo();
        ~Grafo();
        int size() const;

    private:

};
