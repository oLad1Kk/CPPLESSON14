#include <iostream>
#include "BinTree.h"
#include "Train.h"
#include <set>

int main()
{
    //BinTree<int> tree;

    //tree.insert(5);
    //tree.insert(0);
    //tree.insert(7);
    //tree.insert(17);
    //tree.insert(-4);
    //tree.insert(21);

    //auto p = tree.search(5);
    //if (p != nullptr)
    //{
    //    cout << p->info << endl;
    //}
    //else
    //{
    //    cout << "Error\n";
    //}

    //tree.showTree();

    set<Train> schedule;
    schedule.insert(Train("123a", "Lviv", "12:00"));
    schedule.insert(Train("321e", "Kyiv", "07:00"));
    schedule.insert(Train("222b", "Odessa", "14:00"));
    schedule.insert(Train("777s", "Luzk", "08:30"));
    schedule.insert(Train("345j", "Dnipro", "13:30"));

    set<Train>::iterator p;
    for (p = schedule.begin(); p != schedule.end(); p++)
    {
        cout << p->getDepartureTime() << " " << p->getNumber() << " " << p->getStation() << endl;


    }


}


