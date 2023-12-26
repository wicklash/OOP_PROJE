#pragma once

#include "Node.h"

class Path {
	Node* tail;
	Node* head;
	int number;

public:
	Path();
	void addPos(Pose);
	void print();
	Pose operator[](int);
	Pose getPos(int);
	bool removePos(int);
	bool insertPos(int, Pose);
	friend ostream& operator<<(ostream&, Pose);
	friend istream& operator>>(istream&, Pose);
};