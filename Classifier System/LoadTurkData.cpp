#include "LoadTurkData.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>
#include <string>

using namespace std;


void LoadTurkData::loadSongs(std::string file)

{
	ifstream songReader(file, ios::in); // access the input file

	//song data variables
	int songNum = 0;
	int love = 0;
	int sad = 0;
	int angry = 0;
	int happy = 0;

	songReader >> numberOfSongs; //40
	songs = new Song[numberOfSongs];

	for (int i = 0; i < numberOfSongs; i++) //load song data into array

	{
		songReader >> songNum >> love >> sad >> angry >> happy; 
		Song b(songNum, love, sad, angry, happy);
		songs[i] = b;
	}

}

void LoadTurkData::loadTestSongs(std::string file)

{
	ifstream songReader(file, ios::in); // access the input file

	int songNum = 0;
	int love = 0;
	int sad = 0;
	int angry = 0;
	int happy = 0;

	songReader >> numberOfTestSongs;
	testSongs = new Song[numberOfTestSongs];

	for (int i = 0; i < numberOfTestSongs; i++)

	{
		songReader >> songNum >> love >> sad >> angry >> happy;
		Song s(songNum, love, sad, angry, happy);
		testSongs[i] = s;
	}

}
void LoadTurkData::compareSongs()
{
	for (int i = 0; i < numberOfTestSongs; i++)
	{
		double distance = 1000; //initialize distance
		int song_number = 0;

		//get values for each test song
		int test_love = testSongs[i].getLoveValue();
		int test_sad = testSongs[i].getSadValue();
		int test_angry = testSongs[i].getAngryValue();
		int test_happy = testSongs[i].getHappyValue();
			for (int j = 0; j < numberOfSongs; j++)
			{
				//get Turk data for each song
				int love = songs[j].getLoveValue();
				int sad = songs[j].getSadValue();
				int angry = songs[j].getAngryValue();
				int happy = songs[j].getHappyValue();

				//calculate euclidean distance
				double current_distance = sqrt((love - test_love) ^ 2 + (sad - test_sad) ^ 2 + (angry - test_angry) ^ 2 + (happy - test_happy) ^ 2);
				
				if (current_distance < distance) //if closer to test song, save song data
				{
					distance = current_distance;
					song_number = j;
				}
			}
			songs[song_number].printSongDescription(); //print closest song
	}
}