#ifndef ARETE_H
#define ARETE_H

#include <Sommet.h>
#include <vector>


class Arete
{
    public:
        Arete();
        virtual ~Arete();

    private:
        int m_poids;
        std::pair<Sommet*, Sommet*> m_vect;
};

#endif // ARETE_H
