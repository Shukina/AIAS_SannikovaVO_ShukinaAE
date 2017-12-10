#ifndef _TREAP_H 
#define _TREAP_H


#include <iostream>

using namespace std;

struct TreapNode
{
	int key;
	int depth;//глубина(рандом)
	TreapNode *left;
	TreapNode *right;
	
	TreapNode(int w)
	{
		key=w;
		unsigned rand_value = 11;
		srand(rand_value);
		depth = rand() % 10;
		left = NULL;
		right = NULL;
	}
};

class Treap
{
private:
	TreapNode* root;

public:
	Treap()
	{
		root = NULL;
	}

	TreapNode* GetRoot()
	{
		return root;
	}

	TreapNode *merge(TreapNode *l, TreapNode *r) 
	{
		if (!l || !r)
		{
			if (l)
				return l;
			else if (r)
				return r;
		}
		if (l->depth >= r->depth) 
		{
			l->right = merge(l->right, r);
			return l;
		}
		else {
			r->left = merge(l, r->left);
			return r;
		}
	}

	TreapNode* Search(TreapNode* r, int key) //like BST
	{
		if (r == NULL ) return NULL;

		if (key == r->key)
		{
			return r;
		}
		if (key < r->key)
		{
			return Search(r->left, key);
		}
		return Search(r->right, key);
	}

	void split(TreapNode *t, int k, TreapNode *&l, TreapNode *&r) //разделяет дерево T на два дерева L и R
	{
		if (!t)
			l = r = NULL;
		else if (t->key <= k) 
		{
			split(t->right, k, t->right, r);
		l = t;
		}
		else {
			split(t->left, k, l, t->left);
			r = t;
		}
	}

	

	void insert(int tn)
	{
		if (!root)
		{
			root = new TreapNode(tn);
			//root = tn;
			return;
		}
		TreapNode *t1, *t2;
		
		split(root, tn, t1, t2);

		root = merge(t1, new TreapNode(tn));
		root = merge(root, t2);
		
		
	}

	void remove(int key) //удаление всех элементов с ключом key
	{
		TreapNode *t1, *t2, *t3;
		TreapNode *t = this->GetRoot();
		split(t, key-1, t1, t2);
		split(t2, key , t2, t3);
		t = merge(t1, t3);
		dispose(t2);
	}

	void dispose(TreapNode *n) //освобождение памяти от узла n
	{
		if (n == NULL)
			return;
		dispose(n->left);
		dispose(n->right);
		delete n;
	}

	// Делает обход дерева слева-направо и печатает в консоль тройки (ключ узла, приоритет, глубина узла).
	void Show(TreapNode* node, int currentLevel)
	{
		if (node == 0) {
			return;
		}

		Show(node->left, currentLevel + 1);

		cout  << node->key << " " ;

		Show(node->right, currentLevel + 1);
	}
};

#endif
