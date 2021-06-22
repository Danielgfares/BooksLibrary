#pragma once

#include "LibItem.h"
#include "FileMultimedia.h"
#include <vector>

class LibDisc :
    public LibItem
{
    /* 
    Discs can hold multiple tracks of audio or video each having a separate title and artist 
    as well as a duration.
    */
public:
    enum DISC_TYPES {
        CD,
        DVD,
        BLUERAY
    };

    LibDisc();
    LibDisc(string title, string ISBN, DISC_TYPES _t);

    string toString();

    const std::vector<FileMultimedia*> getFiles();

    void download();

    ~LibDisc();

private:
    DISC_TYPES t;
    std::vector<FileMultimedia*> files;
};

