//This program is an example of advanced target distances.

//task main
task main()
{
	nMotorEncoder[motorA] = 0;
	nMotorEncoder[motorB] = 0;
	//reset the motor encoder values
	nMotorEncoderTarget[motorA] = 1800;
	nMotorEncoderTarget[motorB] = 1800;
	//set the motor encoder target for 5 rotations
	motor[motorA] = 50;
	motor[motorB] = 50;
	//Set the motor power value

	while (nMotorRunState[motorA]!=runStateIdle ||nMotorRunState[motorB]!=runStateIdle)
	{
	}
	//Idle loop to check to see if nMotorEncoder has reached target or not (runStateIdle)
}
