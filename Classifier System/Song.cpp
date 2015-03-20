#include "Song.h" 
#include <iostream> 

using namespace std;

Song::Song()

{
	songNumber = 0;
	loveValue = 0;
	sadValue = 0;
	angryValue = 0;
	happyValue = 0;
}

Song::Song(int songNum, int love, int sad, int angry, int happy)
{
	//Song Data
	songNumber = songNum;
	loveValue = love;
	sadValue = sad;
	angryValue = angry;
	happyValue = happy;
}

int Song::getLoveValue()

{
	return loveValue;
}


int Song::getSadValue()

{
	return sadValue;
}

int Song::getAngryValue()

{
	return angryValue;
}

int Song::getHappyValue()

{
	return happyValue;
}

void Song::printSongDescription()

{
	cout << "" << endl;
	cout << "For this song, the best match is " << "Song Number:  " << songNumber << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "Love Value:\t" << loveValue << endl;
	cout << "Sad Value:\t" << sadValue << endl;
	cout << "Angry Value:\t" << angryValue << endl;
	cout << "Happy Value:\t" << happyValue << endl;
}


