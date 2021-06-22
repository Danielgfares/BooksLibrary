#include "Video.h"

Video::Video() : FileMultimedia()
{
    std::cout << "constructor de Video \n";
}

Video::Video(string _title, string _artist, float _duration) : FileMultimedia(_title, _artist, _duration)
{
    std::cout << "constructor de Video \n";
}

string Video::toString()
{
    return "Video. Title: " + this->getTitle() + " Artist : " + this->getArtist() + " Duration : " + std::to_string(this->getDuration()) + "\n";
}

void Video::writeOndisc()
{
    std::cout << "downloading video on disc \n";
}

Video::~Video()
{
    std::cout << "destructor de Video \n";
}
