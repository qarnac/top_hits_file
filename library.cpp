#include <iostream>     //for cout and endl
#include "library.h"    //for Song and print
using namespace std;

void print(Song s) {
	int difference = s.ranking_this_week - s.ranking_last_week;
  	cout << s.song_title << " by ";
  	cout << s.artists << " is ranked No. ";
  	cout << s.ranking_this_week << " this week.\n";
  	cout << "It has ";
  	if (difference < 0)
  		cout << "gone up by " << difference * (-1);
	else if (difference > 0)
		cout << "dropped by " << difference;
	else
		cout << "remained the same";
	cout << " ranking since last week." << endl;
} //end of print, no semicolon
