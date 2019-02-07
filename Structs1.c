#include<stdio.h>
int main(){
	typedef struct {
	  int lengthInSeconds;
	  int yearRecorded;
	} Song;
	Song song1;

	song1.lengthInSeconds =  213;
	song1.yearRecorded    = 1994;
	
	Song song2;
	
	song2.lengthInSeconds =  248;
	song2.yearRecorded    = 1998;
	printf("Song1 details: lengthInseconds:%i and yearRecorded:%i\n",song1.lengthInSeconds,song1.yearRecorded);
	printf("Song2 details: lengthInseconds:%i and yearRecorded:%i\n",song2.lengthInSeconds,song2.yearRecorded);
		return 0;
}
