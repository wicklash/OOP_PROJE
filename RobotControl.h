#pragma once

#include "Pose.h"
#include "NaoRobotAPI.h"

class RobotControl {
	Pose* position = new Pose();
	NaoRobotAPI* robotAPI;
	int state;

public:
	RobotControl(NaoRobotAPI* api);
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
	void connectRobot();
};