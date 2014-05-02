//PlayNotes
//header for playing musical notes on NXT Mindstorms

//basically a eigth (standard length) note
//good for melodies that repeat notes in a row
void n(int note)
{
	wait1Msec(250);
	PlayTone(note, 30);
	wait1Msec(250);
}

//shorter than n, good for melodies that don't repeat notes in a row
void s(int note)
{
	wait1Msec(145);
	PlayTone(note, 25);
	wait1Msec(145);
}

//basically a quarter note
void q(int note)
{
	wait1Msec(325);
	PlayTone(note, 60);
	wait1Msec(335);
}

//integer values for the middle C scale
//replace note with any of these variables
	int lowB = 247;
	int C = 262;
	int Csharp = 277;
	int D = 294;
	int Dsharp = 311;
	int E = 330;
	int F = 349;
	int Fsharp = 370;
	int G = 392;
	int Gsharp;
	int A = 440;
	int Asharp = 466;
	int B = 494;
	int C2 = 523;
