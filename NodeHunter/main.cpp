#include <iostream>
#include <random>
#include <ctime>
#include "Grid.h"


using namespace std;

int main()
{
    cout << "How many nodes would you like to create?" << endl;
    int nodeam;
    cin >> nodeam;


    Grid ourGrid;
    default_random_engine *ptr;
    ptr = new default_random_engine(time(NULL));
    ourGrid.createnodes(nodeam);

    int position, iterations, nodesfound=0;
    while(nodeam>0)
    {

        nodesfound+=ourGrid.gridscan(position,ptr);
        nodeam-=nodesfound;
        cout << "Total nodes found: " << nodesfound << endl;
        cout << "Which position 1-25 would you like to scan for nodes? ";
        cin >> position;
        ///ourGrid.shownodes();
        iterations++;

    }

    cout << "Congrats you have found all " << nodesfound << " nodes, in " << iterations << " tries!" << endl;




    return 0;
}
