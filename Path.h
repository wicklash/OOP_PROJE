#ifndef PATH_H
#define PATH_H

#include "Pose.h"
#include <iostream>

class Path {
private:
    struct Node {
        Node* next;
        Pose pose;
        Node() : next(nullptr), pose() {}
        ~Node() {
            delete next;
        }
    };

    Node* tail;
    Node* head;
    int number;

public:
    Path();
    ~Path();

    void addPos(const Pose& pose);
    void print() const;
    Pose operator[](int index) const;
    Pose getPos(int index) const;
    bool removePos(int index);
    void insertPos(int index, const Pose& pose);
    friend std::ostream& operator<<(std::ostream& out, const Path& path);
    friend std::istream& operator>>(std::istream& in, Path& path);
};

#endif // PATH_H
