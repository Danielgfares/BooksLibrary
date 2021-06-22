#include "FileMultimedia.h"

FileMultimedia::FileMultimedia() : LibFile()
{
	this->artist = "";
	this->title = "";
	this->duration = 0;
	std::cout << "constructor de FileMultimedia \n";
}

FileMultimedia::FileMultimedia(string _title, string _artist, float _duration) : LibFile()
{
	this->artist = _title;
	this->title = _artist;
	this->duration = _duration;
	std::cout << "constructor de FileMultimedia \n";
}

const string FileMultimedia::getTitle()
{
	return string();
}

const string FileMultimedia::getArtist()
{
	return string();
}

const float FileMultimedia::getDuration()
{
	return 0.0f;
}

FileMultimedia::~FileMultimedia()
{
	std::cout << "destructor de FileMultimedia \n";
}
