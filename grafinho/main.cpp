#include <iostream>
#include <Grafo.h>

using namespace std;

int main()
{
    int selecao = 0;
    cout << "*------------------------------------------------------------------------------*" << endl;
    cout << "|                         M E N U    P R I N C I P A L                         |" << endl;
    cout << ".------------------------------------------------------------------------------." << endl;
    cout << "|                                                                              |" << endl;
    cout << "|          DIGITE O NÚMERO CORRESPONDENTE A FUNÇÃO                             |" << endl;
    cout << "|                                                                              |" << endl;
    cout << "|          1   :   CAMINHAMENTO EM LARGURA                                     |" << endl;
    cout << "|          2   :   CAMINHAMENTO EM PROFUNDIDADE                                |" << endl;
    cout << "|          3   :   COMPONENTES FORTEMENTES CONEXAS                             |" << endl;
    cout << "|          4   :   ORDENAÇÃO TOPOLÓGICA                                        |" << endl;
    cout << "|          5   :   DIJKSTRA: CAMINHO MÍNIMO                                    |" << endl;
    cout << "|          6   :   FLOYD: CAMINHO MÍNIMO                                       |" << endl;
    cout << "|          7   :   PRIM: ÁRVORE GERADORA MÍNIMA                                |" << endl;
    cout << "|          8   :   KRUSKAL: ÁRVORE GERADORA MÍNIMA                             |" << endl;
    cout << "|          9   :   FECHO TRIÁDICO                                              |" << endl;
    cout << "|          0   :   SAIR                                                        |" << endl;
    cout << "|                                                                              |" << endl;
    cout << ".------------------------------------------------------------------------------." << endl;
    cout << "|               a u t o r :    f a b r í c i o    g u i d i n e                |" << endl;
    cout << ".------------------------------------------------------------------------------." << endl << endl;;
    cout << "Digite o número da função desejada: ";
    cin >> selecao;
    switch(selecao)
    {

    case 1 :
        {
            cout << endl;
            cout << "*------------------------------------------------------------------------------*" << endl;
            cout << "|               C A M I N H A M E N T O    E M    L A R G U R A                |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          A função deve receber como parâmetro o id de um nó e im-            |" << endl;
            cout << "|          primir o conjunto de arestas visitadas a partir do mesmo em         |" << endl;
            cout << "|          um percurso em largura indicando, para cada uma, se trata           |" << endl;
            cout << "|          -se ou não de uma aresta de retorno.                                |" << endl;
            cout << "|                                                                              |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            //caminhamentoEmLargura();
        }

    case 2 :
        {
            cout << endl;
            cout << "*------------------------------------------------------------------------------*" << endl;
            cout << "|          C A M I N H A M E N T O    E M    P R O F U N D I D A D E           |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          A função deve receber como parâmetro o id de um nó e impri-         |" << endl;
            cout << "|          mir o conjunto de arestas visitadas a partir do mesmo em um         |" << endl;
            cout << "|          percurso em profundidade indicando, para cada uma, se tra-          |" << endl;
            cout << "|          ta-se ou não de uma aresta de retorno.                              |" << endl;
            cout << "|                                                                              |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            //caminhamentoEmProfundidade();
        }

    case 3 :
        {
            cout << endl;
            cout << "*------------------------------------------------------------------------------*" << endl;
            cout << "|        C O M P O N E N T E S    F O R T E M E N T E    C O N E X A S         |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          Para um dado grafo orientado G, a função não recebe nenhum          |" << endl;
            cout << "|          parâmetro e deve imprimir o número de componentes forte-            |" << endl;
            cout << "|          mente conexas de G e, para cada componente, mostrar quais           |" << endl;
            cout << "|          nós a compõem.                                                      |" << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          Obs.: Para grafos orientados.                                       |" << endl;
            cout << "|                                                                              |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            //componentesFortementeConexas();
        }

    case 4 :
        {
            cout << endl;
            cout << "*------------------------------------------------------------------------------*" << endl;
            cout << "|                    O R D E N A Ç Ã O    T O P O L Ó G I C A                  |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          Para um dado grafo orientado acíclico, a função deve im-            |" << endl;
            cout << "|          primir uma ordenação topológica do mesmo.                           |" << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          Obs.: Para grafos orientados.                                       |" << endl;
            cout << "|                                                                              |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            //ordenacaoTopologica();
        }

    case 5 :
        {
            cout << endl;
            cout << "*------------------------------------------------------------------------------*" << endl;
            cout << "|               D I J K S T R A :    C A M I N H O    M Í N I M O              |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          Para um dado grafo (orientado ou não, ponderado ou                  |" << endl;
            cout << "|          não), a função deve receber o Id de dois vértices u e v             |" << endl;
            cout << "|          e mostrar um caminho mínimo entre u e v, bem como o                 |" << endl;
            cout << "|          custo deste caminho calculado a partir do algoritmo de              |" << endl;
            cout << "|          Djikstra. O caminho a ser mostrado consiste na sequên-              |" << endl;
            cout << "|          cia de vértices entre u e v tal que o somatório dos pe-             |" << endl;
            cout << "|          sos das arestas entre vértices consecusecutivos na se-              |" << endl;
            cout << "|          quência seja mínima. Note que, para grafos não ponde-               |" << endl;
            cout << "|          rados, um caminho mínimo entre dois vértices consiste               |" << endl;
            cout << "|          numa sequência de vértices entre os mesmos com o menor              |" << endl;
            cout << "|          número de arestas.                                                  |" << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          Obs.: Para grafos orientados ou não orientados.                     |" << endl;
            cout << "|                                                                              |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            //dijkstraCaminhoMinimo();
        }

    case 6 :
        {
            cout << endl;
            cout << "*------------------------------------------------------------------------------*" << endl;
            cout << "|                 F L O Y D :    C A M I N H O    M Í N I M O                  |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          Para um dado grafo (orientado ou não, ponderado ou                  |" << endl;
            cout << "|          não), a função deve receber o Id de dois vértices u e v             |" << endl;
            cout << "|          e mostrar um caminho mínimo entre u e v, bem como o                 |" << endl;
            cout << "|          custo deste caminho calculado a partir do algoritmo de              |" << endl;
            cout << "|          Djikstra. O caminho a ser mostrado consiste na sequên-              |" << endl;
            cout << "|          cia de vértices entre u e v tal que o somatório dos pe-             |" << endl;
            cout << "|          sos das arestas entre vértices consecusecutivos na se-              |" << endl;
            cout << "|          quência seja mínima. Note que, para grafos não ponde-               |" << endl;
            cout << "|          rados, um caminho mínimo entre dois vértices consiste               |" << endl;
            cout << "|          numa sequência de vértices entre os mesmos com o menor              |" << endl;
            cout << "|          número de arestas.                                                  |" << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          Obs.: Para grafos orientados ou não orientados.                     |" << endl;
            cout << "|                                                                              |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            //floydCaminhoMinimo();
        }

    case 7 :
        {
            cout << endl;
            cout << "*------------------------------------------------------------------------------*" << endl;
            cout << "|          P R I M :    Á R V O R E    G E R A D O R A    M Í N I M A          |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          Para um dado grafo não orientado (ponderado ou não) uti-            |" << endl;
            cout << "|          lizando o algoritmo de Prim, a função deve retornar um              |" << endl;
            cout << "|          conjunto com n-1 arestas que conecte todos os nós do                |" << endl;
            cout << "|          grafo e cujo somatório dos pesos das arestas seja míni-             |" << endl;
            cout << "|          mo. No caso de grafos não ponderados, qualquer conjunto             |" << endl;
            cout << "|          n-1 arestas que conecte o grafo é solução do problema.              |" << endl;
            cout << "|                                                                              |" << endl;
            cout << "|          Obs.: Para grafos não orientados ponderados ou não.                 |" << endl;
            cout << "|                                                                              |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            //primArvoreGeradoraMinima();
        }

    case 8 :
        {
            cout << endl;
            cout << "*------------------------------------------------------------------------------*" << endl;
            cout << "|        K R U S K A L :    Á R V O R E    G E R A D O R A    M Í N I M A      |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            cout << "|                                                                              |" << endl;
            cout << "|      Para um dado grafo não orientado (ponderado ou não), uti-               |" << endl;
            cout << "|      lizando o algoritmo de Kruskal, a função deve retornar um               |" << endl;
            cout << "|      conjunto com n-1 arestas que conecte todos os nós do grafo              |" << endl;
            cout << "|      e cujo somatório dos pesos das arestas seja mínimo. No ca-              |" << endl;
            cout << "|      so  de grafos não ponderados, qualquer conjunto n-1 arestas             |" << endl;
            cout << "|      conecte o grafo é solução do problema.                                  |" << endl;
            cout << "|                                                                              |" << endl;
            cout << "|      Obs.: Para grafos não orientados ponderados ou não.                     |" << endl;
            cout << "|                                                                              |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            //kruskalArvoreGeradoraMinima();
        }

    case 9 :
        {
            cout << endl;
            cout << "*------------------------------------------------------------------------------*" << endl;
            cout << "|                          F E C H O    T R I Á D I C O                        |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            cout << "|                                                                              |" << endl;
            cout << "|      Um fecho triádico ocorre em uma rede social se duas pessoas             |" << endl;
            cout << "|      que tem um amigo em comum também são amigas entre si. O co-             |" << endl;
            cout << "|      eficiente de agrupamento (clustering coefficient) de uma re-            |" << endl;
            cout << "|      de é uma métrica que indica a frequência com que este fenô-             |" << endl;
            cout << "|      meno ocorre na rede.                                                    |" << endl;
            cout << "|      Dado um grafo G, chamamos de tríade um par de vértices {u,v}            |" << endl;
            cout << "|      com um vizinho em comum w. Se os vértices u e v são vizinhos,           |" << endl;
            cout << "|      dizemos que a tríade é fechada (este é um caso onde há um)              |" << endl;
            cout << "|      fecho triádico). Caso contrário, dizemos que a tríade é aber-           |" << endl;
            cout << "|      ta. Note que para cada três vértices u, v e w mutuamente ad-            |" << endl;
            cout << "|      jacentes, existem três tríades fechadas. O coeficiente de a-            |" << endl;
            cout << "|      grupamento de um grafo é dado pelo número de tríades fecha-             |" << endl;
            cout << "|      das dividido pelo total de tríades (incluindo tríades abertas           |" << endl;
            cout << "|      e fechadas). Convencionamos que o coeficiente de agrupamento            |" << endl;
            cout << "|      de um grafo sem tríades é zero.                                         |" << endl;
            cout << "|                                                                              |" << endl;
            cout << ".------------------------------------------------------------------------------." << endl;
            //fechoTriadico();
        }

    case 0 :
        {

        }
        break;

    /*default:
        cout << "[ ! ] O valor inserido é inválido." << endl;
        break;*/
     }

    return 0;
}
