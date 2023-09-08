#pragma once
#include "node.h"

template <typename T>
class tree {
public:
	tree();
	~tree();

	void destroyTree(tree<T>*& root);

	void Insert(T& value);

	void Insert(tree<T>*& root, T& value);

	bool Contains(T& value);

	bool Contains(tree<T>*& root, T& value);

	void traverse(void (*func)(int value));

	T Value();
protected:
	node<T>* mValue;
	tree* mLeft;
	tree* mRight;
};