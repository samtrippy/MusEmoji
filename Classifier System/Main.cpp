#include <iostream>
#include "Song.h"
#include <string>
#include "LoadTurkData.h"
#include "TestData.h"

using namespace std;



int main()

{
	LoadTurkData sim;
	sim.loadSongs("C:/Users/Randall/Desktop/TurkData.txt"); //load Turk songs data
	sim.loadTestSongs("C:/Users/Randall/Desktop/TestSongs.txt"); //load test songs to test comparison
	sim.compareSongs(); 
	

	system("PAUSE");

	return 0;

}