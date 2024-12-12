#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
	T info;
	Node* left;
	Node* right;

	Node(T value) { info = value; left = right = nullptr; }
	void showNode() {
		cout << "INFO: " << info << endl;
		cout << "\t Left: " << left << " Right: " << right << endl;
	}
};


template <typename U>
class BinTree {
	Node<U>* root; //Вказівник на перший вузол у дереві

	
	void showSubTree(Node<U>*p) {
		if (p != nullptr) {
				showSubTree(p->left);
				cout << p->info << " ";
				showSubTree(p->right);
		}
	}


	void delSubTree(Node<U>* p) {
		if (p != nullptr) {
			delSubTree(p->left);
			delSubTree(p->right);
			cout << "Deleting item: " << p->info << "\n";
			delete p;
		}
	}

public:
	BinTree() { root = nullptr; }
	~BinTree() { delTree(); }

	void insert(U value) {
		Node<U>* el = new Node<U>(value);
		if (root == nullptr) root = el;
		else {
			Node<U>* p = root;
			Node<U>* pPrev = root;
			while (p != nullptr)
			{
				pPrev = p;
				if (value < p->info) p = p->left;
				else p = p->right;
			}
			
			if (value < pPrev->info) pPrev->left = el;
			else pPrev->right = el;
		}
	}

	Node<U>* search(U value) {
		Node<U>* p = root;
		if (root != nullptr)
		{
			while (p != nullptr)
			{
				if (value == p->info)
				{
					return p;
				}
				else if (value > p->info)
				{
					if (p->right == nullptr) break;
					else p = p->right;
				}
				else if (value < p->info)
				{
					if (p->left == nullptr) break;
					else p = p->left;
				}
				else
				{
					cout << "Error";
				}
			}
			return nullptr;
		}
		else
		{
			cout << "Tree is empty";
		}
		
		//Повернути адресу вузла зі значенням value
		//Якщо value немає в дереві, то повернути nullptr		
	}

	//Повний обхід дерева
	void showTree() {
		if (root == nullptr)
			cout << "Дерево контейнерів порожнє!" << endl;
		else {
			showSubTree(root);
		}
	}
	void delTree() {
		if (root == nullptr)
			cout << "Дерево контейнерів порожнє!" << endl;
		else {
			delSubTree(root);
		}
	}

};
