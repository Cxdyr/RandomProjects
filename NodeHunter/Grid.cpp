#include "Grid.h"

Grid::Grid()
{
    //ctor
}

Grid::~Grid()
{
    //dtor
}

void Grid::shownodes()
{
    nitr = NodeList.begin();
    while(nitr!=NodeList.end())
    {
        nitr->Display();
        nitr++;
    }

}

void Grid::createnodes(int nodeam)
{
    int idtemp = 1;
    while(nodeam>0)
    {
        Node newNode;
        newNode.SetID(idtemp);
        newNode.SetColor("GREEN");
        newNode.Setposition(1);

        NodeList.push_back(newNode);

        idtemp++;
        nodeam--;
    }
}

int Grid::gridscan(int pos,default_random_engine*ptr)
{
   int foundCtr = 0;
    nitr = NodeList.begin();
    while(nitr!=NodeList.end())
    {
        if(nitr->Getposition()==pos && nitr->GetColor()=="GREEN")
        {
            nitr->SetColor("RED");
            foundCtr++;
        }

        nitr->newpos(ptr);
        nitr++;
    }
    return foundCtr;

}

