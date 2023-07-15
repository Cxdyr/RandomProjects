#ifndef GRID_H
#define GRID_H
#include <list>
#include <string>
#include "Node.h"
using namespace std;


class Grid
{
    public:
        Grid();
        virtual ~Grid();
        void createnodes(int nodeam);
        void shownodes();
        int gridscan(int pos, default_random_engine*ptr);

    private:
        list<Node>NodeList;
        list<Node>::iterator nitr;

};

#endif // GRID_H
