//standard function
void n(int note)
{
	wait1Msec(300);
	PlayTone(note, 30);
	wait1Msec(300);
}

void q(int note)
{
	wait1Msec(300);
	PlayTone(note, 60);
	wait1Msec(300);
}

task main()
{
	//defining int tone values for all of the notes

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

	nNxtButtonTask = 0;
	int tune = 1;
	while(true)
	{
		switch(tune)
		{
		case 1:
			{
				n(C);
				n(C);
				n(G);
				n(G);
				n(A);
				n(A);
				q(G);
				n(F);
				n(F);
				n(E);
				n(E);
				n(D);
				n(D);
				n(C);
				while(nNxtButtonPressed == -1)
				{
					if(nNxtButtonPressed == 3)
					{
						tune = 2;
						break;
					}
					else
					{
						wait1Msec(5000);
						break;
					}
				}
				break;
			case 2:
				n(G);
				n(A);
				n(C2);
				n(A);
				n(G);
				n(G);
				n(A);
				n(G);
				n(F);
				n(A);
				while(nNxtButtonPressed == -1)
				{
					if(nNxtButtonPressed == 3)
					{
						tune = 1;
						break;
					}
					else
					{
						wait1Msec(5000);
						break;
					}
					break;
				}
				}
			}
		}
	}
