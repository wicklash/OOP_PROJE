#pragma once

#include "Pose.h"
#include <iostream>

struct Node {
	Node* next;
	Pose pose;
	Node() {
		next = NULL;
		pose.setPose(0, 0, 0);
	}
	~Node() {
		delete next;
	}
};