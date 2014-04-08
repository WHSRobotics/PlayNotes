#pragma config(Sensor, S1,     lightsensor,    sensorLightActive)
#pragma config(Sensor, S2,     touchsensor,    sensorTouch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//for this program to work, the light sensor must start to the right of the black line.


task main()
{
	nMotorEncoder[motorA] = 0; //clear motor encoder
	//ClearTimer(T1); //clear timer
	if(((nMotorEncoder[motorA] < 1800)) || (SensorValue(touchsensor) == 0))//if touchsensor is not pressed or timer1 has not reached 3000
	{

		{
			if(SensorValue(lightsensor) < 40) //when the lightsensor's value is under 40 (bright)
			{
				motor[motorA] = 80; //if motorA is left motor, it will turn the robot left
				motor[motorB] = 0;
			}
			else if(SensorValue(lightsensor) >= 40) //when the lightsensor's value is over 40 (dark)
			{
				motor[motorA] = 0;
				motor[motorB] = 80; //turn right
			}
		}
	}
	motor[motorA] = 0; //stop the robot when the touch sensor is pressed
	motor[motorB] = 0;
}
