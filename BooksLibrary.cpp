// BooksLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

#include <iostream>
#include "LibBook.h"
#include "LibDisc.h"
#include "FileMultimedia.h"
#include "Video.h"
#include "Audio.h"

int main()
{
	LibDisc *ptr = new LibDisc("title","ISBN", LibDisc::DISC_TYPES::CD);

	std::cout << ptr->toString() << "\n";

	delete ptr;
}

/**
This library offers books, CDs, DVDs and Blue-ray discs,

*/