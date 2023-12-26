#include "Pose.h"
#include <math.h>

double Pose::getX() { return x; }

double Pose::getY() { return y; }

double Pose::getTh() { return th; }

double Pose::findDistanceTo(Pose pos) {
	double distance_x = x - pos.getX();
	double distance_y = y - pos.getY();
	return sqrt((distance_x * distance_x) + (distance_y * distance_y));
}

double Pose::findAngleTo(Pose pos) {
	double distance_x = x - pos.getX();
	double distance_y = y - pos.getY();
	return atan(distance_x / distance_y);
}

void Pose::setX(double _X) { x = _X; }

void Pose::setY(double _Y) { y = _Y; }

void Pose::setTh(double _Th) { th = _Th; }

void Pose::setPose(double _x, double _y, double _th) {
	x = _x;
	y = _y;
	th = _th;
}

void Pose::getPose(double& _x, double& _y, double& _th) {
	_x = x;
	_y = y;
	_th = th;
}

bool Pose::operator==(const Pose& other) { return ((x == other.x) && (y == other.y) && (th == other.th)); }

bool Pose::operator<(const Pose& other) { return ((x < other.x) && (y < other.y) && (th < other.th)); }

Pose Pose::operator+(const Pose& other) {
	Pose pos;
	pos.x = x + other.x;
	pos.y = y + other.y;
	pos.th = th + other.th;
	return pos;
}

Pose Pose::operator-(const Pose& other) {
	Pose pos;
	pos.x = x - other.x;
	pos.y = y - other.y;
	pos.th = th - other.th;
	return pos;
}

Pose& Pose::operator+=(const Pose& other) {
	x += other.x;
	y += other.y;
	th += other.th;
	return *this;
}

Pose& Pose::operator-=(const Pose& other) {
	x -= other.x;
	y -= other.y;
	th -= other.th;
	return *this;
}