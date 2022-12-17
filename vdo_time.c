#include<stdio.h>
int main()
{
	float duration,speed,final_time,seconds_or_minutes,final_time_in_minutes,initial_time_in_seconds,initial_time_in_minutes;
	
	
	printf("DURATION OF THE VIDEO : \n");
	scanf("%f",&duration);
	
	printf("If entered duration is in seconds enter'1',if in minutes,enter '0': \n");
	scanf("%f",&seconds_or_minutes);
	
	
	
	printf("DESIRED SPEED : \n");
	scanf("%f",&speed);
	
	
	if(seconds_or_minutes==1)
	{
	    initial_time_in_seconds=duration;
	    initial_time_in_minutes=duration/60;
	    printf("Your video is %f seconds or %f minutes long.\n",initial_time_in_seconds,initial_time_in_minutes);
		final_time=duration/speed;
		final_time_in_minutes=final_time/60;
		printf("Time to be taken to watch the video at %fx speed is %f seconds or %f minutes.\n",speed,final_time,final_time_in_minutes);
	}
	else if(seconds_or_minutes==0)
	{
	    
	    initial_time_in_minutes=duration;
	    initial_time_in_seconds=duration*60;
	    printf("Your video is %f seconds or %f minutes long.\n",initial_time_in_seconds,initial_time_in_minutes);
		final_time=(duration*60)/speed;
		final_time_in_minutes=final_time/60;
		printf("Time to be taken to watch the video at %fx speed is %f seconds or %f minutes.\n",speed,final_time,final_time_in_minutes);
	}
	
	
	return 0;
}