#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define MAX 10

char quotes[MAX][200]={
	"Dogs have Owners, Cats have Staff.",
	"I do not fear computers. I fear lack of them.",
	"A computer once beat me at chess, but it was no match for me at kick boxing.",
	"Computer Science is no more about computers than astronomy is about telescopes.",
	"The computer was born to solve problems that did not exist before.",
	"Software is like entropy: It is difficult to grasp, weighs nothing, and obeys the Second Law of Thermodynamics; i.e., it always increases.",
	"Software is a gas; it expands to fill its container.",
	"Standards are always out of date.  That’s what makes them standards.",
	"Physics is the universe’s operating system."
};

void main(int argc, char *argv[])
{
	int i;
	srand(time(NULL));
	i=rand()%9;	//0-8 numbers
	/* code */
	if(argc < 2){
		printf("Too Few Parameters\nTry Again\n");
		exit(1);
	}

	if(!(strcmp(argv[1],"random")))
	{
		printf("%s\n", quotes[i]);	
	}

	if(!(strcmp(argv[1],"all")))
	{
		for(i=0;i<MAX;i++)
			printf("%s\n", quotes[i]);	
	}

}