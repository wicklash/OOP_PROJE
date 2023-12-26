#pragma once

#include "Pose.h"
#include "NaoRobotAPI.h"

class RobotControl {
	Pose* position;
	NaoRobotAPI* robotAPI;
	int state;

public:
	~RobotControl();
	void turnLeft();
	void turnRight();
	void forward();
	void backward();
	void moveLeft();
	void moveRight();
	void stop();
	Pose* getPose();
	void print();
};