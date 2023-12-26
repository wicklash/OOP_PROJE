#pragma once

class Pose {
	double x;
	double y;
	double th;

public:
	double getX();
	void setX(double);
	double getY();
	void setY(double);
	double getTh();
	void setTh(double);
	bool operator==(const Pose&);
	Pose operator+(const Pose&);
	Pose operator-(const Pose&);
	Pose& operator+=(const Pose&);
	Pose& operator-=(const Pose&);
	bool operator<(const Pose&);
	void getPose(double&, double&, double&);
	void setPose(double, double, double);
	double findDistanceTo(Pose);
	double findAngleTo(Pose);
};