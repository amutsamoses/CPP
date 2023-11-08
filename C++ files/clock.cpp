#include <stdio.h>

int main()
{
	int hr, min, sec;
	
	for (hr = 1; hr <= 24; hr++)
	{
		for (min=1; min<=60; min++)
		{
			for(sec=1; sec<=60; sec++)
			printf("%d:%d:%d:/n", hr, min, sec);
		}
	}
	
}