#ifndef NODE_H
#define NODE_H
#include <string>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

class Node
{
    public:
        Node();
        virtual ~Node();

        int GetID() { return ID; }
        void SetID(int val) { ID = val; }
        string GetColor() { return Color; }
        void SetColor(string val) { Color = val; }
        int Getposition() { return position; }
        void Setposition(int val) { position = val; }
        void Display();
        void newpos(default_random_engine*ptr);

    protected:

    private:
        int ID;
        string Color;
        int position;
};

#endif // NODE_H
