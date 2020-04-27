#ifndef SOMMET_H
#define SOMMET_H


class Sommet
{
    public:
        Sommet();
        ~Sommet();
        int get_id();
        void afficher()const;

    private:
        int m_id;
};

#endif // SOMMET_H
