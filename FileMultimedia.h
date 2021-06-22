#pragma once

#include "LibFile.h"

class FileMultimedia :
	public LibFile
{
public:
	FileMultimedia();
	FileMultimedia(string _title, string _artist, float _duration);

	const string getTitle();
	const string getArtist();
	const float getDuration();

	virtual string toString() { return ""; };
	virtual void writeOndisc() {};

	~FileMultimedia();
private:
	string title;
	string artist;
	float duration;
};

