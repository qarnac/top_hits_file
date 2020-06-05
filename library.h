#include <string>       //needed for the string data type
using namespace std;

struct Song {
  string song_title;
  string artists;
  int ranking_this_week;
  int ranking_last_week;
};

//This function aims to display details about a song object
void print(Song s);