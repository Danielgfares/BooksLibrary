#include "Audio.h"

Audio::Audio() : FileMultimedia()
{
    std::cout << "constructor de Audio \n";
}

Audio::Audio(string _title, string _artist, float _duration) : FileMultimedia(_title, _artist, _duration)
{
    std::cout << "constructor de Audio \n";
}

string Audio::toString()
{
    return "Audio. Title: " + this->getTitle() + " Artist : " + this->getArtist() + " Duration : " + std::to_string(this->getDuration()) + "\n";
}

void Audio::writeOndisc()
{
    std::cout << "downloading audio on disc \n";
}

Audio::~Audio()
{
    std::cout << "destructor de Audio \n";
}
