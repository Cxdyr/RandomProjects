#include "Node.h"

Node::Node()
{
    //ctor
}

Node::~Node()
{
    //dtor
}

void Node::Display()
{
    cout << "Node " << this->ID << ", " << this->Color << ", Position: " << this->position << endl;
}

void Node::newpos(default_random_engine*ptr)
{
    uniform_int_distribution<int>position(1,25);
    int newp = position(*ptr);
    this->position = newp;
}
