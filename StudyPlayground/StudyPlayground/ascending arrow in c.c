# include <stdio.h>

#define IN 1
#define OUT 0
void main()
{
	int c;
	int state = 0;
	int maxLength, curLength, pnum, startPos, curPos, maxPos, temp;
	temp = maxPos = curPos = startPos = curLength = maxLength = 1;
	state = 0;

	while (scanf_s("%d", &c) == 1)
	{
		if (state == 0)
		{
			pnum = c;
			state = 1;
			continue;
		}
		curPos++;
		if (c > pnum)
		{
			curLength++;
		}
		else
		{
			curLength = 1;
			startPos = curPos;
		}

		if (curLength > maxLength)
		{
			maxLength = curLength;
			maxPos = startPos;
		}
		pnum = c;
	}

	printf("the longest arrow is %d starting at %d", maxLength, maxPos);

}
