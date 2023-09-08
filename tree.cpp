#include "tree.h"
#include "node.h"

template <typename T>
tree<T>::tree() {
	mValue = nullptr;
	tree = nullptr;
	tree = nullptr;
}

template <typename T>
tree<T>::~tree() {
	destroyTree(this);
}

template <typename T>
void tree<T>::destroyTree(tree<T>*& root) {
	//check if the current tree object exists
	//if it does exist, and left exists, go left
	//if it does exist, and right exists, go right
	//if this is the leaf, delete it
	if (root) {
		if (root->mLeft) {
			destroyTree(root->mLeft);
			delete root->mLeft;
			root->mLeft = nullptr;
		}
		if (root->mRight) {
			destroyTree(root->mRight);
			delete root->mRight;
			root->mRight = nullptr;
		}
		delete root->mValue;
		root->mValue = nullptr;
	}
}

template <typename T>
T tree<T>::Value() { return mValue->Value(); }

template <typename T>
void tree<T>::Insert(T& value) {
	//check if this tree has data
	if (mValue) {
		//if new value is less than base, call on mLeft
		if (mValue->Value() > value) {
			Insert(mLeft, value);
		}
		else if (mValue->Value() < value) {
			Insert(mRight, value);
		}
	}
	//if there is not, new value becomes root
	else {
		mValue = new node<T>(value);
	}
}

template <typename T>
void tree<T>::Insert(tree<T>*& root, T& value) {
	if (root) {
		//check value and recursively call in proper direction if root exists
		if (root->mValue->Value() > value) {
			Insert(root->mLeft, value);
		}
		else if (root->mValue->Value() < value) {
			Insert(root->mRight, value);
		}
	}
	else {
		//otherwise root becomes a new tree object with the value on mValue node
		root = new tree;
		root->mValue = new node<T>(value);
	}
}

template <typename T>
bool tree<T>::Contains(T& value) {
	bool result{ false };
	//check if there is a value here
	if (mValue) {
		if (mValue->Value() == value) {
			return true;
		}
		else if (mValue->Value() < value) {
			result = Contains(mRight, value);
		}
		else if (mValue->Value() > value) {
			result = Contains(mLeft, value);
		}
	}
	// if this value is equal to comparison value, return true
	//if this value is less than comparison value, go right
	//if this value is greater than comparison value, go left
	return result;
}

template <typename T>
bool tree<T>::Contains(tree<T>*& root, T& value) {
	bool result{ false };
	if (root)[
		if (root->mValue->Value() == )
	]
}
