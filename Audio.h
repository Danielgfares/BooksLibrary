#pragma once

#include "FileMultimedia.h"

class Audio :
    public FileMultimedia
{
public:
    Audio();
    Audio(string _title, string _artist, float _duration);
    string toString();
    void writeOndisc();
    ~Audio();
};

