
task main()
{
	nMotorEncoder[motorA] = 0;
	nMotorEncoderTarget[motorA] = 1800;
	motor [motorA] = 100;
	wait1Msec (30000);

}
