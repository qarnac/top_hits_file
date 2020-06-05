#include <iostream>
#include <fstream>
#include "library.h" 
using namespace std;

int main() {
	ifstream fin("songs.csv");
    Song top_hit;	//to store info for one Song

    while (!fin.eof()) {
		//Prompts for and collect information about one song.
		getline(fin, top_hit.song_title, ',');
		getline(fin, top_hit.artists, ',');
		fin >> top_hit.ranking_this_week;
		fin.ignore();	//to ignore the comma
		fin >> top_hit.ranking_last_week;
		fin.ignore();   //to extract and discard newline character at the end
        print(top_hit);

    }   //end of while, no semicolon

  return 0;
}