#pragma once
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class PuzzlePiece
{
private:
	int picture;
	string pictureName;
	
	int piece;

	int displayText1;
	int displayText2;
	string displayTextHex = "";

	int worldID;
	string worldName;
	
	int roomID;
	string roomName;
	
	int worldPieceID;
	
	int unknown1;
	
	int unknown21;
	int unknown22;
	string unknown2Hex = "";

public:
	PuzzlePiece(int pic, int pie, int dT1, int dT2, int wID, int rID, int wpID, int un1, int un21, int un22)
	{
		picture = pic;
		piece = pie;
		displayText1 = dT1;
		displayText2 = dT2;
		worldID = wID;
		roomID = rID;
		worldPieceID = wpID;
		unknown1 = un1;
		unknown21 = un21;
		unknown22 = un22;
		InterpretPicture();
		InterpretDisplayTextCode();
		InterpretWorld();
		InterpretRoom();
		InterpretUnknownUShort();
	}

	PuzzlePiece(int pic, int pie, int wID, int rID, int wpID, int un1)
	{
		picture = pic;
		piece = pie;
		worldID = wID;
		roomID = rID;
		worldPieceID = wpID;
		unknown1 = un1;
		InterpretPicture();
		InterpretWorld();
		InterpretRoom();
	}

	void InterpretPicture();

	void InterpretDisplayTextCode();

	void InterpretWorld();

	void InterpretRoom();

	void InterpretUnknownUShort();

	void Print();
	
	void PrintNoUShort();
};

