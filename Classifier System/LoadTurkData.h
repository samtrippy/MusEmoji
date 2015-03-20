#ifndef LOADTURKDATA_H
#define LOADTURKDATA_H

#include "Song.h"
#include <string>

class LoadTurkData
{
	//variables
	Song *songs; //Turk array
	Song *testSongs; //test songs array
	int numberOfSongs = 0;
	int numberOfTestSongs = 0;

public:
	void loadSongs(std::string file);
	void loadTestSongs(std::string file);
	void compareSongs();
};
#endif