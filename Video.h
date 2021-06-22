#pragma once

#include "FileMultimedia.h"

class Video :
    public FileMultimedia
{
public:
    Video();
    Video(string _title, string _artist, float _duration);
    string toString();
    void writeOndisc();
    ~Video();
private:

};

