#include <iostream>
#include "BinTree.h"

int main()
{
    BinTree<int> tree;

    tree.insert(5);
    tree.insert(0);
    tree.insert(7);
    tree.insert(17);
    tree.insert(-4);
    tree.insert(21);

    auto p = tree.search(5);
    if (p != nullptr)
    {
        cout << p->info << endl;
    }
    else
    {
        cout << "Error\n";
    }

    tree.showTree();


}


