typedef struct
{
	int maxSpeed;
	int measureTime;
	int speed;
	long lightSensorThreshold;
	int maxArm;
	string hello;
}myRobot;




typedef struct
{
	string lcdDisplay;
	string lcdRemove;
	string lcdhello;
}myLCD;

void moveRobot()
{
	motor[motorA] = myRobot.speed;
	motor[motorB] = myRobot.speed;
}
