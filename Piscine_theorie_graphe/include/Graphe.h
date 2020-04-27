#ifndef GRAPHE_H
#define GRAPHE_H

#include <Sommet.h>
#include <Arete.h>
#include <vector>

class Graphe
{
    public:
        Graphe();
        ~Graphe();

    private:
        int m_ordre;
        int m_taille;
        std::vector<Sommet*> m_som;
        std::vector<Arete*> m_aret;
};

#endif // GRAPHE_H
