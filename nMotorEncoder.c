
task main()
{
	nMotorEncoder[motorA] = 0;
	nMotorEncoder[motorB] = 0;

	while (nMotorEncoder[motorA] <1800)
{
	motor[motorA] = 50;
	motor[motorB] = 50;
}
}
