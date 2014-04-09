//useless dance code
void dance(int beat, int power)
{
	ClearTimer(T1);
	while(time1[T1]<beat)
	{
		motor[motorA] = power;
		motor[motorB] = power;
	}
}

//no dance
void n(int note, int time)
{
	PlayTone(note,time);
}

//dance forward for 50 ms
void p(int note, int time)
{
	PlayTone(note, time);
	dance(50, 50);
}

//dance bakward for 50 ms
void l(int note, int time)
{
	PlayTone(note, time);
	dance(50, -50);
}

task main()
{
	//defining int tone values for all of tee notes

	int lowB = 247;
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

	int e = 30; //eigth note
	int q = 60; //quarter note
	int h = 120; //half note

	//switch case to different tunes
	while(true)
	{
		int routine = 1;
		switch(routine)
		{
		case 1:
			if(nNxtButtonPressed == 1)
			{
				routine = 2;
			}
			else {
				//random tune
				p(A, q);
				l(Asharp, e);
				p(B, e);
				l(Fsharp, e);
				p(highCsharp, e);
				l(B, e);
				p(Fsharp, q);
				l(A, e);
			}
			break;
		case 2:
			if(nNxtButtonPressed == 1)
			{
				routine = 3;
			}
			else {
				//twinkle twinkle little star
				n(C, e);
				n(C, e);
				n(G, e);
				n(G, e);
				n(A, e);
				n(A, e);
				n(G, q);
				n(F, e);
				n(F, e);
				n(E, e);
				n(E, e);
				n(D, e);
				n(D, e);
				n(C, q);
			}
			break;
		case 3:
			if (nNxtButtonPressed == 1)
			{
				routine = 1;
			}
			else {
				//counting stars
				n(E, q);
				n(F, q);
				n(A, q);
				n(E, q);
				n(E, e);
				n(F, e);
				n(E, e);
				n(D, e);
				n(F, h);
				n(E, e);
				n(E, e);
				n(E, e);
				n(G, e);
				n(F, e);
				n(E, e);
				n(D, e);
				n(F, q);
				n(lowB, q);
				n(D, q);
			}
		}
	}
}
