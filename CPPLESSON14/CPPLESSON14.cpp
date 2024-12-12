#include <iostream>
#include "BinTree.h"
#include "Train.h"
#include <set>
#include <algorithm>

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
    /*cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    string number;
    cout << "Enter train number: "; cin >> number;
    bool isFound = false;
    for (auto item : schedule)
    {
        if (item.getNumber() == number)
        {
            item.show();
            isFound = true;
            break;
        }
    }
    if (!isFound)
    {
        cout << "Not found\n";
    }
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << "Enter time(hh-mm):\n";
    cin >> number;
    auto found = find_if(schedule.begin(), schedule.end(), [number](const Train obj) {return obj.getDepartureTime() > number; });
    if (found == schedule.end())
    {
        cout << "Not found\n";
    }
    else
    {
        found->show();
    }*/
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    string time = "";
    cout << "Enter time: "; cin >> time;
    bool isFound = false;
    auto item = find_if(schedule.begin(), schedule.end(), [time](const Train obj) {
        return obj.getDepartureTime() == time;
        });
    if (item == schedule.end())
    {
        cout << "Not found\n";
    }
    else
    {
        cout << "Canceled " << item->getNumber() << " " << item->getStation() << endl;
        schedule.erase(item);
    }
    cout << endl;
    for (auto obj : schedule)
    {
        obj.show();
    }
    cout << "-----------------------------------------\n";

}


