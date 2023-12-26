#include "Path.h"
using namespace std;

Path::Path() {
	head = tail = NULL;
	number = 0;
}

void Path::addPos(Pose pos) {
	if (head == NULL) {
		head->pose = pos;
		tail = head;
		number++;
	}

	else {
		Node* node = new Node();
		node->pose = pos;
		tail->next = node;
		number++;
	}
}

void Path::print() {
	Node* temp = head;
	for (int i = 1; i < (number + 1); i++) {
		cout << i << ". Pose's X value is: " << temp->pose.getX() << endl;
		cout << i << ". Pose's Y value is: " << temp->pose.getY() << endl;
		cout << i << ". Pose's Angle value is: " << temp->pose.getTh() << endl;
		temp = temp->next;
	}
}

Pose Path::operator[](int index) {
	Node* node = new Node();

	if (index >= number && index < 0) {
		cout << "Index is invalid!" << endl;
		return node->pose;
	}

	else {
		node = head;

		while (index > 0) {
			node = node->next;
			index--;
		}

		return node->pose;
	}
}

Pose Path::getPos(int index) {
	Node* node = new Node();

	if (index >= number && index < 0) {
		cout << "Index is invalid!" << endl;
		return node->pose;
	}

	else {
		node = head;

		while (index > 0) {
			node = node->next;
			index--;
		}

		return node->pose;
	}
}

bool Path::removePos(int index) {
	if (index >= number || index < 0) { return false; }

	else if (index == 0) { 
		head = head->next; 
		return true;
	}

	else {
		Node* p = head;
		Node* q = NULL;

		int tempIndex = index;

		while (tempIndex > 0) {
			q = p;
			p = p->next;
			tempIndex--;
		}

		q = p->next;
		if (index == number - 1) { tail = q; }
		return true;
	}
}

bool Path::insertPos(int index, Pose pos) {
	Node* node = new Node();
	node->pose = pos;
	if (index < 0 || index > (number + 1)) { 
		cout << "Index is invalid!" << endl;
		return false; 
	}

	else {
		Node* p = head;
		Node* q = new Node();
		
		while (index > 0) {
			q = p;
			p = p->next;
			index++;
		}

		node->next = q->next;
		q->next = node;

		if (p == NULL) { tail = node; }
		else if (q == NULL) { head = node; }

		return true;
	}
}

// operator overloading
#if 0
ostream& operator<<(ostream& out, Pose pos) {
	Node* temp = pos.;
	for (int i = 1; i < (number + 1); i++) {
		out << i << ". Pose's X value is: " << temp->pose.getX() << endl;
		out << i << ". Pose's Y value is: " << temp->pose.getY() << endl;
		out << i << ". Pose's Angle value is: " << temp->pose.getTh() << endl;
		temp = temp->next;
	}
	return out;
}
istream& operator>>(istream& in, Pose pos) {

	return in;
}
#endif