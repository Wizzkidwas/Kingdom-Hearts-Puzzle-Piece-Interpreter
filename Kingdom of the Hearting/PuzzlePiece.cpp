#include "PuzzlePiece.h"

void PuzzlePiece::InterpretPicture()
{
	switch (picture)
	{
	case 0:
		pictureName = "Awakening";
		break;
	case 1:
		pictureName = "Heart";
		break;
	case 2:
		pictureName = "Duality";
		break;
	case 3:
		pictureName = "Frontier";
		break;
	case 4:
		pictureName = "Daylight";
		break;
	case 5:
		pictureName = "Sunset";
		break;
	default:
		pictureName = "???";
		break;
	}
}

void PuzzlePiece::InterpretDisplayTextCode()
{
	int tempDisplayText1Value = displayText1;
	int rem1;
	string tempDisplayText1 = "";
	while (tempDisplayText1Value > 0)
	{
		rem1 = tempDisplayText1Value % 16;
		if (rem1 > 9)
		{
			switch (rem1)
			{
			case 10: 
				tempDisplayText1.append("A");
				break;
			case 11: 
				tempDisplayText1.append("B");
				break;
			case 12: 
				tempDisplayText1.append("C");
				break;
			case 13: 
				tempDisplayText1.append("D");
				break;
			case 14: 
				tempDisplayText1.append("E");
				break;
			case 15: 
				tempDisplayText1.append("F");
				break;
			}
		}
		else
		{
			tempDisplayText1.append(std::to_string(rem1));
		}
		tempDisplayText1Value = tempDisplayText1Value / 16;
	}
	if (tempDisplayText1.length() < 2)
	{
		tempDisplayText1.append("0");
	}
	std::reverse(tempDisplayText1.begin(), tempDisplayText1.end());

	int tempDisplayText2Value = displayText2;
	int rem2;
	string tempDisplayText2 = "";
	while (tempDisplayText2Value > 0)
	{
		rem2 = tempDisplayText2Value % 16;
		if (rem2 > 9)
		{
			switch (rem2)
			{
			case 10:
				tempDisplayText2.append("A");
				break;
			case 11:
				tempDisplayText2.append("B");
				break;
			case 12:
				tempDisplayText2.append("C");
				break;
			case 13:
				tempDisplayText2.append("D");
				break;
			case 14:
				tempDisplayText2.append("E");
				break;
			case 15:
				tempDisplayText2.append("F");
				break;
			}
		}
		else
		{
			tempDisplayText2.append(std::to_string(rem2));
		}
		tempDisplayText2Value = tempDisplayText2Value / 16;
	}
	if (tempDisplayText2.length() < 2)
	{
		tempDisplayText2.append("0");
	}
	std::reverse(tempDisplayText2.begin(), tempDisplayText2.end());

	tempDisplayText1.append(tempDisplayText2);
	displayTextHex.append(tempDisplayText1);
}

void PuzzlePiece::InterpretWorld()
{
	switch (worldID)
	{
	case 0:
		worldName = "World ZZ";
		break;
	case 1:
		worldName = "End Of Sea";
		break;
	case 2:
		worldName = "Twilight Town";
		break;
	case 3:
		worldName = "Destiny Island";
		break;
	case 4:
		worldName = "Hollow Bastion";
		break;
	case 5:
		worldName = "Beast's Castle";
		break;
	case 6:
		worldName = "Olympus Coliseum";
		break;
	case 7:
		worldName = "Agrabah";
		break;
	case 8:
		worldName = "The Land of Dragons";
		break;
	case 9:
		worldName = "100 Acre Wood";
		break;
	case 10:
		worldName = "Pride Land";
		break;
	case 11:
		worldName = "Atlantica";
		break;
	case 12:
		worldName = "Disney Castle";
		break;
	case 13:
		worldName = "Timeless River";
		break;
	case 14:
		worldName = "Halloween Town";
		break;
	case 15:
		worldName = "World Map";
		break;
	case 16:
		worldName = "Port Royal";
		break;
	case 17:
		worldName = "Space Paranoids";
		break;
	case 18:
		worldName = "The World That Never Was";
		break;
	default:
		worldName = "???";
		break;
	}
}

// I'm so sorry to whoever reads this function
void PuzzlePiece::InterpretRoom()
{
	switch (worldID)
	{
	case 0:	// World ZZ
		switch (roomID)
		{
		case 0:
			roomName = "The Usual Spot";
			break;
		case 1:
			roomName = "Lobby";
			break;
		case 2:
			roomName = "Girl's Room";
			break;
		case 3:
			roomName = "Underground Concourse";
			break;
		case 4:
			roomName = "Computer Room";
			break;
		case 5:
			roomName = "Capsule Room";
			break;
		case 6:
			roomName = "Main Capsule";
			break;
		case 7:
			roomName = "Beach";
			break;
		case 8:
			roomName = "Roxas's Room";
			break;
		case 9:
			roomName = "Destiny Island";
			break;
		case 10:
			roomName = "Main Street";
			break;
		case 11:
			roomName = "Pier";
			break;
		case 12:
			roomName = "Tron";
			break;
		case 13:
			roomName = "Toy Story";
			break;
		case 14:
			roomName = "Monsters Inc.";
			break;
		case 15:
			roomName = "Vacant";
			break;
		case 16:
			roomName = "Tournament Venue";
			break;
		case 17:
			roomName = "Alley";
			break;
		case 18:
			roomName = "Road to the Mansion";
			break;
		case 19:
			roomName = "Gateway";
			break;
		case 20:
			roomName = "Dining Room";
			break;
		case 21:
			roomName = "DIVETOHEART";
			break;
		case 22:
			roomName = "Main Station";
			break;
		case 23:
			roomName = "Hollow Bastion 1";
			break;
		case 24:
			roomName = "Test Map (Real Time 1)";
			break;
		case 25:
			roomName = "GBA1";
			break;
		case 26:
			roomName = "GBA2";
			break;
		case 27:
			roomName = "Ichibangai";
			break;
		case 28:
			roomName = "Hollow Bastion 2";
			break;
		case 29:
			roomName = "Test Map (Lion King)";
			break;
		case 30:
			roomName = "Test Map (Mulan)";
			break;
		case 31:
			roomName = "GBA3";
			break;
		case 32:
			roomName = "Test Map (Collision)";
			break;
		case 33:
			roomName = "Test Map (Entrance)";
			break;
		case 34:
			roomName = "Test Map (Attribute)";
			break;
		case 35:
			roomName = "Test Map (Carribean)";
			break;
		case 36:
			roomName = "Test Map";
			break;
		case 37:
			roomName = "Character Check";
			break;
		case 38:
			roomName = "Sound Check";
			break;
		case 39:
			roomName = "Test Map (Wall)";
			break;
		case 40:
			roomName = "GBA4";
			break;
		case 41:
			roomName = "Hollow Zenkei";
			break;
		case 42:
			roomName = "Honey Test";
			break;
		case 43:
			roomName = "Test Map (Indoor)";
			break;
		case 44:
			roomName = "Test Map (Outdoor)";
			break;
		case 45:
			roomName = "Test Map (Map Kenshou)";
			break;
		case 46:
			roomName = "Cockpit";
			break;
		case 47:
			roomName = "FM(7)";
			break;
		case 48:
			roomName = "FM(8)";
			break;
		case 49:
			roomName = "FM(9)";
			break;
		case 50:
			roomName = "COM(1)";
			break;
		case 51:
			roomName = "COM(2)";
			break;
		case 52:
			roomName = "COM(3)";
			break;
		case 53:
			roomName = "COM(4)";
			break;
		case 54:
			roomName = "COM(5)";
			break;
		case 55:
			roomName = "COM(6)";
			break;
		case 56:
			roomName = "COM(7)";
			break;
		case 57:
			roomName = "COM(8)";
			break;
		case 58:
			roomName = "COM(9)";
			break;
		case 59:
			roomName = "COM(10)";
			break;
		case 60:
			roomName = "COM(11)";
			break;
		case 61:
			roomName = "COM(12)";
			break;
		case 62:
			roomName = "COM(13)";
			break;
		case 63:
			roomName = "COM(14)";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 1: // End Of Sea
		switch (roomID)
		{
		case 0:
			roomName = "The Dark Margin";
			break;
		case 1:
			roomName = "loop demo";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 2: // Twilight Town
		switch (roomID)
		{
		case 0:
			roomName = "The Empty Realm";
			break;
		case 1:
			roomName = "Roxas's Room";
			break;
		case 2:
			roomName = "The Usual Spot";
			break;
		case 3:
			roomName = "Back Alley";
			break;
		case 4:
			roomName = "Sandlot";
			break;
		case 5:
			roomName = "Sandlot";
			break;
		case 6:
			roomName = "Market Street: Station Heights";
			break;
		case 7:
			roomName = "Market Street: Tram Common";
			break;
		case 8:
			roomName = "Station Plaza";
			break;
		case 9:
			roomName = "Central Station";
			break;
		case 10:
			roomName = "Sunset Terrace";
			break;
		case 11:
			roomName = "Sunset Station";
			break;
		case 12:
			roomName = "Sunset Hill";
			break;
		case 13:
			roomName = "The Woods";
			break;
		case 14:
			roomName = "The Old Mansion";
			break;
		case 15:
			roomName = "Mansion: Foyer";
			break;
		case 16:
			roomName = "Mansion: Dining Room";
			break;
		case 17:
			roomName = "Mansion: Library";
			break;
		case 18:
			roomName = "Mansion: The White Room";
			break;
		case 19:
			roomName = "Mansion: Basement Hall";
			break;
		case 20:
			roomName = "Mansion: Basement Hall";
			break;
		case 21:
			roomName = "Mansion: Computer Room";
			break;
		case 22:
			roomName = "Mansion: Basement Corridor";
			break;
		case 23:
			roomName = "Mansion: Pod Room";
			break;
		case 24:
			roomName = "On The Train";
			break;
		case 25:
			roomName = "The Tower";
			break;
		case 26:
			roomName = "Tower: Entryway";
			break;
		case 27:
			roomName = "Tower: Sorcerer's Loft";
			break;
		case 28:
			roomName = "Tower: Wardrobe";
			break;
		case 29:
			roomName = "Tower: Star Chamber";
			break;
		case 30:
			roomName = "Tower: Moon Chamber";
			break;
		case 31:
			roomName = "Tower: Wayward Stairs";
			break;
		case 32:
			roomName = "Station of Serenity";
			break;
		case 33:
			roomName = "Station of Calling";
			break;
		case 34:
			roomName = "Station of Awakening";
			break;
		case 35:
			roomName = "The Mysterial Train";
			break;
		case 36:
			roomName = "Tunnelway";
			break;
		case 37:
			roomName = "Underground Concourse";
			break;
		case 38:
			roomName = "Tower: Wayward Stairs";
			break;
		case 39:
			roomName = "Tower: Wayward Stairs";
			break;
		case 40:
			roomName = "Betwixt and Between";
			break;
		case 41:
			roomName = "The Old Mansion";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 3: // Destiny Island
		switch (roomID)
		{
		case 0:
			roomName = "Beach";
			break;
		case 1:
			roomName = "Main Island: Ocean's Road";
			break;
		case 2:
			roomName = "Main Island: Shore";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 4: // Hollow Bastion
		switch (roomID)
		{
		case 0:
			roomName = "Villain's Vale";
			break;
		case 1:
			roomName = "The Dark Depths";
			break;
		case 2:
			roomName = "The Great Maw";
			break;
		case 3:
			roomName = "Crystal Fissure";
			break;
		case 4:
			roomName = "Castle Gate";
			break;
		case 5:
			roomName = "Ansem's Study";
			break;
		case 6:
			roomName = "Postern";
			break;
		case 7:
			roomName = "Restoration Site";
			break;
		case 8:
			roomName = "Bailey";
			break;
		case 9:
			roomName = "Borough";
			break;
		case 10:
			roomName = "Marketplace";
			break;
		case 11:
			roomName = "Corridors";
			break;
		case 12:
			roomName = "Heartless Manufactory";
			break;
		case 13:
			roomName = "Merlin's House";
			break;
		case 14:
			roomName = "Castle Oblivion";
			break;
		case 15:
			roomName = "Ansem's Study";
			break;
		case 16:
			roomName = "Ravine Trail";
			break;
		case 17:
			roomName = "The Great Maw";
			break;
		case 18:
			roomName = "Restoration Site";
			break;
		case 19:
			roomName = "Bailey";
			break;
		case 20:
			roomName = "Corridors";
			break;
		case 21:
			roomName = "Cavern of Remembrance: Depths";
			break;
		case 22:
			roomName = "Cavern of Remembrance: Mining Area";
			break;
		case 23:
			roomName = "Cavern of Remembrance: Engine Chamber";
			break;
		case 24:
			roomName = "Cavern of Remembrance: Mineshaft";
			break;
		case 25:
			roomName = "Transport to Remembrance";
			break;
		case 26:
			roomName = "Garden of Assemblage";
			break;
		case 27:
			roomName = "Underground Facility";
			break;
		case 28:
			roomName = "Memory's Contortion";
			break;
		case 29:
			roomName = "The World of Nothing";
			break;
		case 30:
			roomName = "Hall of Empty Melodies";
			break;
		case 31:
			roomName = "Bridge";
			break;
		case 32:
			roomName = "The Old Mansion";
			break;
		case 33:
			roomName = "Station of Remembrance";
			break;
		case 34:
			roomName = "Destiny Island";
			break;
		case 35:
			roomName = "Addled Impasse";
			break;
		case 36:
			roomName = "Mansion: Basement Hall";
			break;
		case 37:
			roomName = "Havoc's Divide";
			break;
		case 38:
			roomName = "Station of Oblivion";
			break;
		case 39:
			roomName = "Station of Awakening";
			break;
		case 40:
			roomName = "Gathering Place";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 5: // Beast's Castle
		switch (roomID)
		{
		case 0:
			roomName = "Entrance Hall";
			break;
		case 1:
			roomName = "Parlor";
			break;
		case 2:
			roomName = "Belle's Room";
			break;
		case 3:
			roomName = "The Beast's Room";
			break;
		case 4:
			roomName = "Ballroom";
			break;
		case 5:
			roomName = "Ballroom";
			break;
		case 6:
			roomName = "Courtyard";
			break;
		case 7:
			roomName = "The East Wing";
			break;
		case 8:
			roomName = "The West Hall";
			break;
		case 9:
			roomName = "The West Wing";
			break;
		case 10:
			roomName = "Dungeon";
			break;
		case 11:
			roomName = "Undercroft";
			break;
		case 12:
			roomName = "Secret Passage";
			break;
		case 13:
			roomName = "Bridge";
			break;
		case 14:
			roomName = "Ballroom";
			break;
		case 15:
			roomName = "Bridge";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 6: // Olympus Coliseum
		switch (roomID)
		{
		case 0:
			roomName = "The Coliseum";
			break;
		case 1:
			roomName = "Coliseum Gates";
			break;
		case 2:
			roomName = "Coliseum Gates";
			break;
		case 3:
			roomName = "Underworld Entrance";
			break;
		case 4:
			roomName = "Coliseum Foyer";
			break;
		case 5:
			roomName = "Valley of the Dead";
			break;
		case 6:
			roomName = "Hades' Chamber";
			break;
		case 7:
			roomName = "Cave of the Dead: Entrance";
			break;
		case 8:
			roomName = "Well of Captivity";
			break;
		case 9:
			roomName = "The Underdrome";
			break;
		case 10:
			roomName = "Cave of the Dead: Inner Chamber";
			break;
		case 11:
			roomName = "Underworld Caverns: Entrance";
			break;
		case 12:
			roomName = "The Lock";
			break;
		case 13:
			roomName = "The Underdrome";
			break;
		case 14:
			roomName = "Coliseum Gates";
			break;
		case 15:
			roomName = "Cave of the Dead: Passage";
			break;
		case 16:
			roomName = "Underworld Caverns: The Lost Road";
			break;
		case 17:
			roomName = "Underworld Caverns: Atrium";
			break;
		case 18:
			roomName = "Coliseum Gates";
			break;
		case 19:
			roomName = "The Underdrome";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 7: // Agrabah
		switch (roomID)
		{
		case 0:
			roomName = "Agrabah";
			break;
		case 1:
			roomName = "Bazaar";
			break;
		case 2:
			roomName = "The Peddler's Shop";
			break;
		case 3:
			roomName = "The Palace";
			break;
		case 4:
			roomName = "Vault";
			break;
		case 5:
			roomName = "Above Agrabah";
			break;
		case 6:
			roomName = "Palace Walls";
			break;
		case 7:
			roomName = "The Cave of Wonders: Entrance";
			break;
		case 8:
			roomName = "There is no message!";
			break;
		case 9:
			roomName = "The Cave of Wonders: Stone Guardians";
			break;
		case 10:
			roomName = "The Cave of Wonders: Treasure Room";
			break;
		case 11:
			roomName = "Ruined Chamber";
			break;
		case 12:
			roomName = "The Cave of Wonders: Valley of Stone";
			break;
		case 13:
			roomName = "The Cave of Wonders: Chasm of Challenges";
			break;
		case 14:
			roomName = "Sandswept Ruins";
			break;
		case 15:
			roomName = "The Peddler's Shop";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 8: // The Land of Dragons
		switch (roomID)
		{
		case 0:
			roomName = "Bamboo Grove";
			break;
		case 1:
			roomName = "Encampment";
			break;
		case 2:
			roomName = "Checkpoint";
			break;
		case 3:
			roomName = "Mountain Trail";
			break;
		case 4:
			roomName = "Village";
			break;
		case 5:
			roomName = "Village Cave";
			break;
		case 6:
			roomName = "Ridge";
			break;
		case 7:
			roomName = "Summit";
			break;
		case 8:
			roomName = "Imperial Square";
			break;
		case 9:
			roomName = "Palace Gate";
			break;
		case 10:
			roomName = "Antechamber";
			break;
		case 11:
			roomName = "Throne Room";
			break;
		case 12:
			roomName = "Village";
			break;
		case 13:
			roomName = "Palace Gate";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 9: // 100 Acre Wood
		switch (roomID)
		{
		case 0:
			roomName = "The Hundred Acre Wood";
			break;
		case 1:
			roomName = "Starry Hill";
			break;
		case 2:
			roomName = "Pooh Bear's House";
			break;
		case 3:
			roomName = "Rabbit's House";
			break;
		case 4:
			roomName = "Piglet's House";
			break;
		case 5:
			roomName = "Kanga's House";
			break;
		case 6:
			roomName = "A Windsday Tale";
			break;
		case 7:
			roomName = "The Honey Hunt";
			break;
		case 8:
			roomName = "Blossom Valley";
			break;
		case 9:
			roomName = "The Spooky Cave";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 10: // Pride Land
		switch (roomID)
		{
		case 0:
			roomName = "Pride Rock";
			break;
		case 1:
			roomName = "Stone Hollow";
			break;
		case 2:
			roomName = "The King's Den";
			break;
		case 3:
			roomName = "Wildebeest Valley";
			break;
		case 4:
			roomName = "The Savannah";
			break;
		case 5:
			roomName = "Elephant Graveyard";
			break;
		case 6:
			roomName = "Gorge";
			break;
		case 7:
			roomName = "Wastelands";
			break;
		case 8:
			roomName = "Jungle";
			break;
		case 9:
			roomName = "Oasis";
			break;
		case 10:
			roomName = "Pride Rock";
			break;
		case 11:
			roomName = "Oasis";
			break;
		case 12:
			roomName = "Overlook";
			break;
		case 13:
			roomName = "Peak";
			break;
		case 14:
			roomName = "Scar's Darkness";
			break;
		case 15:
			roomName = "The Savannah";
			break;
		case 16:
			roomName = "Wildebeest Valley";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 11: // Atlantica
		switch (roomID)
		{
		case 0:
			roomName = "Triton's Throne";
			break;
		case 1:
			roomName = "Ariel's Grotto";
			break;
		case 2:
			roomName = "Undersea Courtyard";
			break;
		case 3:
			roomName = "Undersea Courtyard";
			break;
		case 4:
			roomName = "The Palace: Performance Hall";
			break;
		case 5:
			roomName = "Sunken Ship";
			break;
		case 6:
			roomName = "The Shore";
			break;
		case 7:
			roomName = "The Shore";
			break;
		case 8:
			roomName = "The Shore";
			break;
		case 9:
			roomName = "Wrath of the Sea";
			break;
		case 10:
			roomName = "Wedding Ship";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 12: // Disney Castle
		switch (roomID)
		{
		case 0:
			roomName = "Audience Chamber";
			break;
		case 1:
			roomName = "Library";
			break;
		case 2:
			roomName = "Colonnade";
			break;
		case 3:
			roomName = "Courtyard";
			break;
		case 4:
			roomName = "The Hall of the Cornerstone";
			break;
		case 5:
			roomName = "The Hall of the Cornerstone";
			break;
		case 6:
			roomName = "Gummi Hangar";
			break;
		case 7:
			roomName = "The Wilderness";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 13: // Timeless River
		switch (roomID)
		{
		case 0:
			roomName = "Cornerstone Hill";
			break;
		case 1:
			roomName = "Pier";
			break;
		case 2:
			roomName = "Waterway";
			break;
		case 3:
			roomName = "Wharf";
			break;
		case 4:
			roomName = "Lilliput";
			break;
		case 5:
			roomName = "Building Site";
			break;
		case 6:
			roomName = "Scene of the Fire";
			break;
		case 7:
			roomName = "Mickey's House";
			break;
		case 8:
			roomName = "Villain's Vale";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 14: // Halloween Town
		switch (roomID)
		{
		case 0:
			roomName = "Halloween Town Square";
			break;
		case 1:
			roomName = "Dr. Finklestein's Lab";
			break;
		case 2:
			roomName = "Graveayard";
			break;
		case 3:
			roomName = "Curly Hill";
			break;
		case 4:
			roomName = "Hinterlands";
			break;
		case 5:
			roomName = "Yuletide Hill";
			break;
		case 6:
			roomName = "Candy Cane Lane";
			break;
		case 7:
			roomName = "Christmas Tree Plaza";
			break;
		case 8:
			roomName = "Santa's House";
			break;
		case 9:
			roomName = "Toy Factory: Shipping and Receiving";
			break;
		case 10:
			roomName = "Toy Factory: The Wrapping Room";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 15: // World Map
		switch (roomID)
		{
		case 0:
			roomName = "World Map";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 16: // Port Royal
		switch (roomID)
		{
		case 0:
			roomName = "Rampart";
			break;
		case 1:
			roomName = "Harbor";
			break;
		case 2:
			roomName = "Town";
			break;
		case 3:
			roomName = "The Interceptor";
			break;
		case 4:
			roomName = "The Interceptor: Ship's Hold";
			break;
		case 5:
			roomName = "The Black Pearl";
			break;
		case 6:
			roomName = "The Black Pearl: Captain's Stateroom";
			break;
		case 7:
			roomName = "The Interceptor";
			break;
		case 8:
			roomName = "Isla de Muerta: Rock Face";
			break;
		case 9:
			roomName = "Isla de Muerta: Cave Mouth";
			break;
		case 10:
			roomName = "Isla de Muerta: Treasure Heap";
			break;
		case 11:
			roomName = "Ship Graveyard: The Interceptor's Hold";
			break;
		case 12:
			roomName = "Isla de Muerta: Powder Store";
			break;
		case 13:
			roomName = "Isla de Muerta: Moonlight Nook";
			break;
		case 14:
			roomName = "Ship Graveyard: Seadrift Keep";
			break;
		case 15:
			roomName = "Ship Graveyard: Seadrift Row";
			break;
		case 16:
			roomName = "Isla de Muerta: Rock Face";
			break;
		case 17:
			roomName = "Isla de Muerta: Treasure Heap";
			break;
		case 18:
			roomName = "The Black Pearl";
			break;
		case 19:
			roomName = "The Black Pearl";
			break;
		case 20:
			roomName = "The Black Pearl";
			break;
		case 21:
			roomName = "The Interceptor";
			break;
		case 22:
			roomName = "The Interceptor";
			break;
		case 23:
			roomName = "The Black Pearl: Captain's Stateroom";
			break;
		case 24:
			roomName = "Harbor";
			break;
		case 25:
			roomName = "Isla de Muerta: Rock Face";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 17: // Space Paranoids
		switch (roomID)
		{
		case 0:
			roomName = "Pit Cell";
			break;
		case 1:
			roomName = "Canyon";
			break;
		case 2:
			roomName = "Game Grid";
			break;
		case 3:
			roomName = "Dataspace";
			break;
		case 4:
			roomName = "I/O Tower: Hallway";
			break;
		case 5:
			roomName = "I/O Tower: Communications Room";
			break;
		case 6:
			roomName = "Simulation Hangar";
			break;
		case 7:
			roomName = "Solar Sailer Simulation";
			break;
		case 8:
			roomName = "Central Computer Mesa";
			break;
		case 9:
			roomName = "Central Computer Core";
			break;
		case 10:
			roomName = "Solar Sailer Simulation";
			break;
		case 11:
			roomName = "Solar Sailer Simulation";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	case 18: // The World That Never Was
		switch (roomID)
		{
		case 0:
			roomName = "Where Nothing Gathers";
			break;
		case 1:
			roomName = "Alley to Between";
			break;
		case 2:
			roomName = "Fragment Crossing";
			break;
		case 3:
			roomName = "Memory's Skyscraper";
			break;
		case 4:
			roomName = "The Brink of Despair";
			break;
		case 5:
			roomName = "The Soundless Prison";
			break;
		case 6:
			roomName = "Nothing's Call";
			break;
		case 7:
			roomName = "Crooked Ascension";
			break;
		case 8:
			roomName = "Crooked Ascension";
			break;
		case 9:
			roomName = "Twilight's View";
			break;
		case 10:
			roomName = "Hall of Empty Melodies";
			break;
		case 11:
			roomName = "Hall of Empty Melodies";
			break;
		case 12:
			roomName = "Naught's Skyway";
			break;
		case 13:
			roomName = "Proof of Existence";
			break;
		case 14:
			roomName = "Havoc's Divide";
			break;
		case 15:
			roomName = "Addled Impasse";
			break;
		case 16:
			roomName = "Naught's Approach";
			break;
		case 17:
			roomName = "Ruin and Creation's Passage";
			break;
		case 18:
			roomName = "The Altar of Naught";
			break;
		case 19:
			roomName = "Memory's Contortion";
			break;
		case 20:
			roomName = "The World of Nothing";
			break;
		case 21:
			roomName = "Station of Awakening";
			break;
		case 22:
			roomName = "The World of Nothing";
			break;
		case 23:
			roomName = "The World of Nothing";
			break;
		case 24:
			roomName = "The World of Nothing";
			break;
		case 25:
			roomName = "The World of Nothing";
			break;
		case 26:
			roomName = "The World of Nothing";
			break;
		case 27:
			roomName = "The World of Nothing";
			break;
		case 28:
			roomName = "The World of Nothing";
			break;
		case 29:
			roomName = "The World of Nothing";
			break;
		default:
			roomName = "???";
			break;
		}
		break;
	
	default:
		roomName = "???";
		break;
	}
}

void PuzzlePiece::InterpretUnknownUShort()
{
	int tempUnknown21Value = unknown21;
	int rem1;
	string tempUnknownText1 = "";
	while (tempUnknown21Value > 0)
	{
		rem1 = tempUnknown21Value % 16;
		if (rem1 > 9)
		{
			switch (rem1)
			{
			case 10:
				tempUnknownText1.append("A");
				break;
			case 11:
				tempUnknownText1.append("B");
				break;
			case 12:
				tempUnknownText1.append("C");
				break;
			case 13:
				tempUnknownText1.append("D");
				break;
			case 14:
				tempUnknownText1.append("E");
				break;
			case 15:
				tempUnknownText1.append("F");
				break;
			}
		}
		else
		{
			tempUnknownText1.append(std::to_string(rem1));
		}
		tempUnknown21Value = tempUnknown21Value / 16;
	}
	if (tempUnknownText1.length() < 2)
	{
		tempUnknownText1.append("0");
	}
	std::reverse(tempUnknownText1.begin(), tempUnknownText1.end());

	int tempUnknown22Value = unknown22;
	int rem2;
	string tempUnknownText2 = "";
	while (tempUnknown22Value > 0)
	{
		rem2 = tempUnknown22Value % 16;
		if (rem2 > 9)
		{
			switch (rem2)
			{
			case 10:
				tempUnknownText2.append("A");
				break;
			case 11:
				tempUnknownText2.append("B");
				break;
			case 12:
				tempUnknownText2.append("C");
				break;
			case 13:
				tempUnknownText2.append("D");
				break;
			case 14:
				tempUnknownText2.append("E");
				break;
			case 15:
				tempUnknownText2.append("F");
				break;
			}
		}
		else
		{
			tempUnknownText2.append(std::to_string(rem2));
		}
		tempUnknown22Value = tempUnknown22Value / 16;
	}
	if (tempUnknownText2.length() < 2) 
	{
		tempUnknownText2.append("0");
	}
	std::reverse(tempUnknownText2.begin(), tempUnknownText2.end());

	tempUnknownText1.append(tempUnknownText2);
	unknown2Hex.append(tempUnknownText1);
}

void PuzzlePiece::Print()
{
	cout << "Picture: " << std::hex << picture << " (" << pictureName << ")" << endl;
	cout << "Piece: " << piece << std::dec << endl;
	cout << "Display Text: " << displayTextHex << endl;
	cout << "World ID: " << std::hex << worldID << " (" << worldName << ")" << endl;
	cout << "Room ID: " << roomID << " (" << roomName << ")" << endl;
	cout << "World Piece ID: " << worldPieceID << endl;
	cout << "Unknown Byte: " << unknown1 << std::dec << endl;
	cout << "Unknown UShort: " << unknown2Hex << endl;
}

void PuzzlePiece::PrintNoUShort()
{
	cout << "Picture: " << std::hex << picture << " (" << pictureName << ")" << endl;;
	cout << "Piece: " << piece << endl;
	cout << "World ID: " << worldID << " (" << worldName << ")" << endl;
	cout << "Room ID: " << roomID << " (" << roomName << ")" << endl;
	cout << "World Piece ID: " << worldPieceID << endl;
	cout << "Unknown Byte: " << unknown1 << std::dec << endl;
}
