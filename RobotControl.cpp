#include "RobotControl.h"

RobotControl::~RobotControl() { delete position; }

void RobotControl::turnLeft() { 
	robotAPI->moveRobot(LEFT);
	position->setPose(robotAPI->getX(), robotAPI->getY(), robotAPI->getTh());
}

void RobotControl::turnRight() { 
	robotAPI->moveRobot(RIGHT); 
	position->setPose(robotAPI->getX(), robotAPI->getY(), robotAPI->getTh());
}

void RobotControl::forward() { 
	robotAPI->moveRobot(FORWARD);
	position->setPose(robotAPI->getX(), robotAPI->getY(), robotAPI->getTh());
}

void RobotControl::backward() {
	robotAPI->moveRobot(BACKWARD); 
	position->setPose(robotAPI->getX(), robotAPI->getY(), robotAPI->getTh());
}

void RobotControl::moveLeft() { 
	robotAPI->turnRobot(LEFT); 
	position->setPose(robotAPI->getX(), robotAPI->getY(), robotAPI->getTh());
}

void RobotControl::moveRight() { 
	robotAPI->turnRobot(RIGHT); 
	position->setPose(robotAPI->getX(), robotAPI->getY(), robotAPI->getTh());
}

void RobotControl::stop() { robotAPI->stopRobot(); }

Pose* RobotControl::getPose() { return position; }