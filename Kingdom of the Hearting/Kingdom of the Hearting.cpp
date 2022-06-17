// Kingdom of the Hearting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>
#include "PuzzlePiece.h"
using std::cout;
using std::endl;
using std::ios;

void main()
{
    std::vector<PuzzlePiece*> pieces;
    std::string fileDataPath;
    fileDataPath = ".\\15jigsaw.bin";

    cout << "Whenever you're ready." << endl;
    system("pause");

    std::ifstream fileData(fileDataPath, ios::binary | ios::in);
    if (!fileData)
    {
        cout << "ERROR OPENING FILE DATA " << endl << "Make sure the file is in the same folder as the .exe and is named 15jigsaw.bin" << endl;
        system("pause");
        // Informs user of error
        return;
    }

    cout << endl;
    char c;
    int currentByte = 0;
    int currentPiece = 0;

    int picture;
    int piece;
    int displayText1;   // ushort
    int displayText2;
    int worldID;
    int roomID;
    int worldPieceID;
    int unknown1;
    int unknown21;      // ushort
    int unknown22;

    while (fileData.get(c))    // Reads through file bit by bit
    {
        // This deals with the header
        if (currentByte <= 7)
        {
            for (int i = 7; i >= 0; i--)
            {
                std::cout << ((c >> i) & 1);
            }
        }
        else    // Puzzle piece time :)
        {
            if (currentByte % 10 == 8)
            {
                // Makes output look nice
                if (currentPiece < 10) cout << currentPiece << ".   ";
                else if (currentPiece < 100) cout << currentPiece << ".  "; // These if statements make the output look nicer :)
                else cout << currentPiece << ". ";
                
                // 1st byte represents the picture
                picture = c;    // Casts byte into an int for easy processing later
            }
            if (currentByte % 10 == 9)
            {
                // 2nd byte represents piece
                piece = c;
            }
            // 3rd and 4th bytes are a ushort, representing text
            if (currentByte % 10 == 0)
            {
                displayText1 = c;
                if (displayText1 < 0) displayText1 += 256;
            }
            if (currentByte % 10 == 1)
            {
                displayText2 = c;
                if (displayText2 < 0)displayText2 += 256;
            }
            if (currentByte % 10 == 2)
            {
                // 5th byte represents the worldID
                worldID = c;
            }
            if (currentByte % 10 == 3)
            {
                // 6th byte represents the roomID
                roomID = c;
            }
            if (currentByte % 10 == 4)
            {
                // 7th byte represents the worldPieceID
                worldPieceID = c;
            }
            if (currentByte % 10 == 5)
            {
                // 8th byte is unknown
                unknown1 = c;
            }
            // 9th and 10 bytes are a ushort and also unknown
            if (currentByte % 10 == 6)
            {
                unknown21 = c;
                if (unknown21 < 0) unknown21 += 256;
            }
            if (currentByte % 10 == 7)
            {
                unknown22 = c;
                if (unknown22 < 0) unknown22 += 256;
                // pieces.emplace_back(new PuzzlePiece(picture, piece, worldID, roomID, worldPieceID, unknown1));
                pieces.emplace_back(new PuzzlePiece(picture, piece, displayText1, displayText2, worldID, roomID, worldPieceID, unknown1, unknown21, unknown22));
            }
            for (int i = 7; i >= 0; i--)
            {
                cout << ((c >> i) & 1);
            }
        }
        currentByte++;
        // Every 10th byte is a new puzzle piece, so increment
        if (currentByte % 10 == 8)
        {
            currentPiece++;
            cout << endl;
        }
        cout << endl;
    }

    cout << endl << "Raw binary data. Continue to get interpreted data." << endl;
    system("pause");    // Pause and console clear to neaten up the console window
    system("CLS");
    cout << "Puzzle Piece Data:" << std::endl;
    int row = 1;
    for (int i = 0; i < pieces.size(); i++)
    {
        if (row < 10) cout << row << ".   ";
        else if (row < 100) cout << row << ".  ";
        else cout << row << ". ";
        row++;
        pieces[i]->Print();
        // pieces[i]->PrintNoUShort();
        cout << endl << endl;
    }
    cout << "If you see a bunch of 0 data, then that's the padding, scroll up to see non-padded data." << endl;
    system("pause");
}