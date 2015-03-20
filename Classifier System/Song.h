#ifndef SONG_H
#define SONG_H

#include <string>

class Song
{
	//variables
	int songNumber;  
	int loveValue; 
	int sadValue; 
	int angryValue;
	int happyValue;

public:

	//Constructors
	Song();
	Song(int songNum, int love, int sad, int angry, int happy);

	//Get functions
	int getLoveValue(); 
	int getSadValue();
	int getAngryValue();
	int getHappyValue();
	
	// Output functions
	void printSongDescription();  
};
#endif