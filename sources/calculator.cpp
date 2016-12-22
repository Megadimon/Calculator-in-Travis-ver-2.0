double sum ( float a, float b )
{
return a+b; 
}

double sub (float a, float b)

{ 
return a-b;
}

double mult (float a, float b)
{
	return a*b;
}

double *div (float a, float b, int* c)
{
	if (b != 0 && a != 0) return (float)a/b;
		else if (a == 0 && b != 0) return 0;
			else if (b == 0) 
			{
				*c = 1;
				return nullptr;
			}
}

float pow (float a, float b, int* c)
{
	float a2 = a;
	
	if (a != 0)
	{
		*c = 0;
		if (b < 0)
		{
	    	for (int i = 1; i <-b ; i++)
		 	{
		 	a*=a2;
		 	}
			a=(float)1/a;
			}
				else if (b>0)
				{
					for (int i = 1; i < b; i++)
					{
						a*=a2;
					}
				}
		else a == 1.0;
		return (double) a;
		}
		else if ( a == 0 && b < 0 ) *c = 1;
			else if ( a == 0 && b > 0 ) return 0;
				else if ( a == 0 && b == 0 ) return 1;
	}


double *sq (float a, int* c)
{	
	float n = 1.0;  
	float t = 2.0;
	
	if ( a >= 0 )
	{
		*c = 0;
		if ( a != 1 && a != 0 )
		{
			while ( (t - n) > 0.000001 || (t - n) < -0.000001  )
			{
		 		n = t;
		 		t = (float)(n + (float)a/n)/2;
			}	

		}
			else if ( a == 1 ) t = 1;
				else if ( a == 0 ) t = 0;
				return t;
	}
		else 
		{
			*c = 1;
	   		return nullptr;
		}
		
}
