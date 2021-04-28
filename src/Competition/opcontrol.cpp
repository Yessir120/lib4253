#include "main.h"
#include "lib4253/Utility/declarations.hpp"
using namespace lib4253;


void opcontrol() {
	pros::lcd::clear_line(5); pros::lcd::print(1, "OPCONTROL");
	matchState = OPCONTROL;
	Robot::startTask("Drive", Drive::driveTask, &drive);

	/*
	tracker->setPos({0, 0, 0});
  Robot::startTask("Odometry", CustomOdometry::odomTask, tracker);
	Robot::startTask("OPControl", Drive::driveTask, &drive);
	*/


	//Robot::endTask("Odometry");
}
