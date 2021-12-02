#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

brain Brain;

motor LeftFrontMotor = motor(PORT1, ratio18_1, false);   
motor LeftBackMotor = motor(PORT16, ratio18_1, false);        // T/F not checked
motor_group LeftDrive(LeftFrontMotor, LeftBackMotor);

motor RightFrontMotor = motor(PORT7, ratio18_1, true);    
motor RightBackMotor = motor(PORT20, ratio18_1, true);          // T/F not checked
motor_group RightDrive(RightFrontMotor, RightBackMotor);

motor LeftLiftMotor = motor(PORT4, ratio18_1, true);  
motor RightLiftMotor = motor(PORT9, ratio18_1, false);  
motor_group LiftMotors(LeftLiftMotor, RightLiftMotor);

drivetrain Drivetrain = drivetrain(LeftDrive, RightDrive, 319.19, 295, 40, mm, 1);

controller Controller1 = controller();
// VEXcode generated functions

/**
* Used to initialize code/tasks/devices added using tools in VEXcode Pro.
*
* This should be called at the start of your int main function.
*/
void vexcodeInit(void) {
  // nothing to initialize
}
