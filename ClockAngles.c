#include<stdio.h>

int main(int argn, char *argv[])
{
	int temp,i,h,m,s;
	float hposition,mposition,sposition;
	float anglehs,anglehm,anglems;
	char seek[9]; 
	//FILE *inp;
	//inp = fopen(argv[1],"r");
	//fread(&temp,sizeof(int),1,inp);
	printf("Please enter the number of conversions to be performed:\n", temp);
	scanf("%d",&temp);
	printf("Enter the time in the format hh:mm:ss e.g. 10:45:27\n", temp);
	//seek=(char *) malloc(temp*sizeof(char));
	for(i=0;i<temp;i++)
	{
		
		scanf("%s", seek);
		h=(seek[0]-'0')*10+(seek[1]-'0');
		m=(seek[3]-'0')*10+(seek[4]-'0');
		s=(seek[6]-'0')*10+(seek[7]-'0');
		if(h<1||h>12||m<0||m>59||s<0||s>59)
		{
			printf("Invalid time\n");
			break;
		}
		//printf("%d %d %d",h,m,s);
		sposition=(s*6);
		mposition=(double)((m*6)+(double)s/10);
		hposition=(double)((h*30)+(double)m/2+(double)s/120);
		//printf("%f %f %f\n",hposition,mposition,sposition);
		anglehs=hposition-sposition;
		anglehm=hposition-mposition;
		anglems=mposition-sposition;
		if(anglehs<0)
		{
			anglehs=360+anglehs;
		}
		if(anglehs>180)
		{

			anglehs=360-anglehs;

		}
		
		
		if(anglehm<0)
		{
			anglehm=360+anglehm;
		}
		if(anglehm>180)
		{

			anglehm=360-anglehm;

		}

		
		if(anglems<0)
		{
			anglems=360+anglems;
		}
		if(anglems>180)
		{

			anglems=360-anglems;

		}

		printf("Angle between hour and minute: %.2f\nAngle between hour and second: %.2f\nAngle between minute and second: %.2f\n",anglehm,anglehs,anglems);


	}
}
