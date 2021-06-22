#include "LibDisc.h"
#include "Audio.h"
#include "Video.h"

LibDisc::LibDisc() : LibItem()
{
    this->t = DISC_TYPES::CD;
    std::cout << "constructor de LibDisc \n";
}

LibDisc::LibDisc(string title, string ISBN, DISC_TYPES _t) : LibItem(title, ISBN)
{
    this->t = _t;
    std::cout << "constructor de LibDisc \n";
}

string LibDisc::toString()
{
    /* 
    Return a string with all information about a disc: like the disc type 
    also return parent::tostring to show title and ISBN 
    finally must iterat the vector of Files Multimedia and dynamically cast the objects into video or audio
    to show the correspondent string of the object file multimedia
    */
    return string();
}

const std::vector<FileMultimedia*> LibDisc::getFiles()
{
    /*
    Return all files on the disc
    */
    return this->files;
}

void LibDisc::download()
{
    /* Download all files from LibDisc to local disc */
}

LibDisc::~LibDisc()
{
    std::cout << "destructor de LibDisc \n";
}
