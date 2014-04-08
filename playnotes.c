void dance(int beat, int power)
{
	ClearTimer(T1);
	while(time1[T1]<beat)
	{
		motor[motorA] = power;
		motor[motorB] = power;
	}
}

void n(int note, int time)
{
	PlayTone(note,time);
}

void p(int note, int time)
{
	PlayTone(note, time);
	dance(50, 50);
}
void l(int note, int time)
{
	PlayTone(note, time);
	dance(50, -50);
}

task main()
{
	//defining int tone values for all of the notes
	int C = 262;
	int Csharp = 277;
	int Eb = 311;
	int D = 294;
	int E = 330;
	int F = 349;
	int Fsharp = 370;
	int G = 392;
	int Asharp = 466;
	int A = 440;
	int B = 494;
	int highC = 523;
	int highCsharp = 554;

	int h = 30; //half note
	int w = 60; //whole note

	//switch case to different tunes
	int routine = 1;
	switch(routine)
	{
	case 1:
		if(nNxtButtonPressed == 1)
		{
			routine=2;
		}
		else {
			//random tune
			p(A, w);
			l(Asharp, h);
			p(B, h);
			l(Fsharp, h);
			p(highCsharp, h);
			l(B, h);
			p(Fsharp, w);
			l(A, h);
		}
		break;
	case 2:
		if(nNxtButtonPressed == 1)
		{
			routine = 3;
		}
		else {
			//twinkle twinkle little star
			n(C, h);
			n(C, h);
			n(G, h);
			n(G, h);
			n(A, h);
			n(A, h);
			n(G, w);
			n(F, h);
			n(F, h);
			n(E, h);
			n(E, h);
			n(D, h);
			n(D, h);
			n(C, w);
		}
		break;
	}
}
