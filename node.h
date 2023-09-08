#pragma once

template <typename T>

class node {
public: 
	node(T value) : mValue(value) {}
	~node() {}
	T Value() { return mValue; }
protected:
	T mValue;
};
