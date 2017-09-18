// Name: Talha Siddiqui
// Date: 12/7/16
// Program: Final
// Summary: This program is a slot machine game

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <ctime>
#include <sstream>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;


ofstream ofs("siddiqui_final.txt");
//******************
//Global Variables**
//******************

string one = " _____     _ _             _____ _     _     _ _             _ ";
string two = "|_   _|   | | |           /  ___(_)   | |   | (_)           (_)";
string three = "  | | __ _| | |__   __ _  \\ `--. _  __| | __| |_  __ _ _   _ _ ";
string four = "  | |/ _` | | '_ \\ / _` |  `--. \\ |/ _` |/ _` | |/ _` | | | | |";
string five = "  | | (_| | | | | | (_| | /\\__/ / | (_| | (_| | | (_| | |_| | |";
string six = "  \\_/\\__,_|_|_| |_|\\__,_| \\____/|_|\\__,_|\\__,_|_|\\__, |\\__,_|_|";
string sevenn = "                                                    | |        ";
string eight = "                                                    |_|        ";

string nine = " _____ _____ _____   _____  _____    ___  __        _____  _____  __  ";
string ten = "/  __ \\_   _/  ___| / __  \\|  ___|  /   |/  |      |  _  ||  _  |/  | ";
string eleven = "| /  \\/ | | \\ `--.  `' / /'|___ \\  / /| |`| |______| |/' || |/' |`| | ";
string twelve = "| |     | |  `--. \\   / /      \\ \\/ /_| | | |______|  /| ||  /| | | | ";
string thirteen = "| \\__/\\_| |_/\\__/ / ./ /___/\\__/ /\\___  |_| |_     \\ |_/ /\\ |_/ /_| |_";
string fourteen = " \\____/\\___/\\____/  \\_____/\\____/     |_/\\___/      \\___/  \\___/ \\___/";

string fifteen = " __   __      ____    ____     ____    ____ ";
string sixteen = "/  | /  |    / /  |  / ___|   / /  |  / ___|";
string seventeen = "`| | `| |   / /`| | / /___   / /`| | / /___ ";
string eighteen = " | |  | |  / /  | | | ___ \\ / /  | | | ___ \\";
string ninteen = "_| |__| |_/ /  _| |_| \\_/ |/ /  _| |_| \\_/ |";
string twenty = "\\___/\\___/_/   \\___/\\_____/_/   \\___/\\_____/";

string twentyone = "______ _             _ ";
string twentytwo = "|  ___(_)           | |";
string twentythree = "| |_   _ _ __   __ _| |";
string twentyfour = "|  _| | | '_ \\ / _` | |";
string twentyfive = "| |   | | | | | (_| | |";
string twentysix = "\\_|   |_|_| |_|\\__,_|_|";

string title1 = " _____ _     _     _ _             _   _____ _       _    ___  ___           _     _            ";
string title2 = "/  ___(_)   | |   | (_)           (_) /  ___| |     | |   |  \\/  |          | |   (_)           ";
string title3 = "\\ `--. _  __| | __| |_  __ _ _   _ _  \\ `--.| | ___ | |_  | .  . | __ _  ___| |__  _ _ __   ___ ";
string title4 = " `--. \\ |/ _` |/ _` | |/ _` | | | | |  `--. \\ |/ _ \\| __| | |\\/| |/ _` |/ __| '_ \\| | '_ \\ / _ \\";
string title5 = "/\\__/ / | (_| | (_| | | (_| | |_| | | /\\__/ / | (_) | |_  | |  | | (_| | (__| | | | | | | |  __/";
string title6 = "\\____/|_|\\__,_|\\__,_|_|\\__, |\\__,_|_| \\____/|_|\\___/ \\__| \\_|  |_/\\__,_|\\___|_| |_|_|_| |_|\\___|";
string title7 = "                          | |                                                                   ";
string title8 = "                          |_|                                                                   ";

string g1 = " _____                 _ _                ";
string g2 = "|  __ \\               | | |               ";
string g3 = "| |  \\/ ___   ___   __| | |__  _   _  ___ ";
string g4 = "| | __ / _ \\ / _ \\ / _` | '_ \\| | | |/ _ \\";
string g5 = "| |_\\ \\ (_) | (_) | (_| | |_) | |_| |  __/";
string g6 = " \\____/\\___/ \\___/ \\__,_|_.__/ \\__, |\\___|";
string g7 = "                                __/ |     ";
string g8 = "                               |___/      ";

string name = "Talha Siddiqui ";
string date = " 10/19/16 ";
string course = " CIS 2542-001 ";
string title = "Slot Machine ";
string lab = " final";
string footer = "This program simulates a slot machine";
string EOM = "EOF Message ";
string space = " ";
string colon = ": ";
string comma = ", ";
string money = "$";
string percent = "%";
string backslashn = "\n";
string Error = "Error Message!";
string Invalid = "Invalid Entry - Valid Numbers are 1-4: ";
string Invalid1 = "Invalid Entry - Valid Numbers are 1-2";
string Invalid3 = "Invalid Entry - Valid Numbers are 1-3";
string Invalid26 = "Invalid Entry - Valid Numbers are 1-26";
string InvalidDouble = "Invalid Entry - You Already Used That Number";
string rules = "RULES";
string rule1 = "1. Money:";
string rule1a = "a. Wallet Range: ($25 - $10000)";
string rule1b = "b. Bet Range: ($25 - $300)";
string rule1c = "c. Can add more money to your wallet: ($1 - $5000)";
string rule2 = "2. Five Winning Lines";
string rule3 = "3. Winning Rules:";
string rule3a = "a. 1 Line - Win 100%";
string rule3b = "b. 3 Lines - Win Double";
string rule3c = "c. 5 Lines - Win Triple";
string rule4 = "4. Minumum Amount You Can Bet:";
string rule4a = "a. 1 Line - $25";
string rule4b = "b. 3 Lines - $50";
string rule4c = "c. 5 Lines - $100";
string sayWallet = "WALLET";
string addMoney = "1. Add Money";
string addMoneyQuit = "2. Quit";
string cashWallet = "Cash in Wallet: $";
string cashStart = "Cash Started With: $";
string cashEnd = "Cash Ended With: $";
string howMuch = "How much money would you like to add? ($1 - $5000 No Change): ";
string Bar = "|----------------------------------------------------------------------------------|";
string Pipe = "|";
string goodbye = "GOODBYE";
string stats = "Game Stats: ";
string stats1 = "Games Played: ";
string stats2 = "Games Won: ";
string stats3 = "Games Lost: ";
string stats4 = "Win/Loss: ";
string stats5 = "Money Won: ";
string stats6 = "Money Lost: ";
string stats7 = "Cash Out: ";
string amountBet = "Amount Bet: $";
string linesWon = "Lines Won: ";
string congrats = "Congrats! You Win!!";
string sorry = "Sorry. Better Luck Next Time";
string howManyLines = "How many lines would you like to play?";
string oneLine = "1. One Line";
string threeLines = "2. Three Lines";
string fiveLines = "3. Five Lines";
string howMuchBetLine1 = "How much would you like to bet on each line? (Your bet must be between $25 - $100 No Change)";
string howMuchBetLine3 = "How much would you like to bet on each line? (Your bet must be between $50 - $200 No Change)";
string howMuchBetLine5 = "How much would you like to bet on each line? (Your bet must be between $100 - $300 No Change)";
string wrongBetLine1 = "Your bet must be between $25 - $100 (No Change)";
string wrongBetLine3 = "Your bet must be between $50 - $200 (No Change)";
string wrongBetLine5 = "Your bet must be between $100 - $300 (No Change)";
string notEnoughToBet = "You do not have enough money to bet that much";
string betRange = "You must add between $1 - $5000 (No Change)";
string walletRange = "Your wallet must have a minimum of $25 and a maximum of $10000";
int leftSlot = 0;
int middleSlot = 0;
int rightSlot = 0;
string *leftColumn[6];
string *middleColumn[6];
string *rightColumn[6];
string slotsMenu[19];
string cherry[6];
string seven[6];
string diamond[6];
string bolt[6];
string shoe[6];
string bag[6];
string club[6];
int boost = 0;
int tempTop1, tempTop2, tempTop3;
int tempMid1, tempMid2, tempMid3;
int tempBot1, tempBot2, tempBot3;
string boxTop = "|================================================|\n";
int MENU = 2;
int i = 0;
int count = 0;
int choice;
double wallet = 500;
double wallet2 = 0;
double q;
int optWallet;
int m, ansMenu, n, b;
string strInput = "";
int winGame1, winGame2, winGame3;
bool loopCheck;
int numberResult;
int bet1, bet2, bet3;
int temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
int line;
int matchCount1 = 0;
int matchCount2 = 0;
int matchCount3 = 0;
double gamesPlayed = 0;
double gamesWon = 0;


//************************************
//THIS IS MY FIRST CONCEPT - A CLASS**
//************************************
class MyClass
{
protected:

	string menu1 = "Select One of the Following Options";
	string menu2 = "1. Display the Rules";
	string menu3 = "2. Wallet";
	string menu4 = "3. Play the Game";

private:
	string menu5 = "4. Quit";

	//**************************************
	//THIS IS MY SECOND CONCEPT - A FRIEND**
	//**************************************
	friend string myFn();
};

//******************************************
//Friend Function that has access to class**
//******************************************
string myFn()
{
	MyClass  myObj;
	
	myObj.menu1;
	myObj.menu2;
	myObj.menu3;
	myObj.menu4;
	myObj.menu5;

	cout << myObj.menu1 << endl << myObj.menu2 << endl << myObj.menu3 << endl << myObj.menu4;
	cout << endl << myObj.menu5 << endl;
	return backslashn;
}

void displaySlotMachine()
{
	cout << title1 << endl << title2 << endl << title3 << endl << title4 << endl << title5 << endl << title6 << endl << title7 << endl << title8 << endl;
}
//**************************************
// Function Used to display Game Board**
//**************************************
void fillShapeArrays()
{
	leftColumn[0] = cherry;
	leftColumn[1] = seven;
	leftColumn[2] = diamond;
	leftColumn[3] = bolt;
	leftColumn[4] = bag;
	leftColumn[5] = club;

	middleColumn[0] = cherry;
	middleColumn[1] = seven;
	middleColumn[2] = diamond;
	middleColumn[3] = bolt;
	middleColumn[4] = bag;
	middleColumn[5] = club;

	rightColumn[0] = cherry;
	rightColumn[1] = seven;
	rightColumn[2] = diamond;
	rightColumn[3] = bolt;
	rightColumn[4] = bag;
	rightColumn[5] = club;

	cherry[0] = "|        //(__)|";
	cherry[1] = "|       //     |";
	cherry[2] = "|   ___//\\\\_   |";
	cherry[3] = "|  /()  \\() \\  |";
	cherry[4] = "| |      |   | |";
	cherry[5] = "|  \\____/___/  |";

	seven[0] = "|   ________   |";
	seven[1] = "|  |_____   |  |";
	seven[2] = "|        / /   |";
	seven[3] = "|       / /    |";
	seven[4] = "|      / /     |";
	seven[5] = "|     /_/      |";

	diamond[0] = "|    ______    |";
	diamond[1] = "|   /_/__\\_\\   |";
	diamond[2] = "|   \\ \\  / /   |";
	diamond[3] = "|    \\ \\/ /    |";
	diamond[4] = "|     \\  /     |";
	diamond[5] = "|      \\/      |";

	bolt[0] = "|    _____     |";
	bolt[1] = "|   /__  /     |";
	bolt[2] = "|     / /__    |";
	bolt[3] = "|    /__  /    |";
	bolt[4] = "|      | /     |";
	bolt[5] = "|      |/      |";

	bag[0] = "|  \\\\\\||||///  |";
	bag[1] = "|   ========   |";
	bag[2] = "|  /  _||_  \\  |";
	bag[3] = "| |  (_||_   | |";
	bag[4] = "| |   _||_)  | |";
	bag[5] = "|  \\___||___/  |";


	club[0] = "|      .-.     |";
	club[1] = "|  .-.(   ).-. |";
	club[2] = "| (           )|";
	club[3] = "|  `--`| |`--` |";
	club[4] = "|      | |     |";
	club[5] = "|     /___\\    |";
}

//****************************************
//Function used in Displaying Game Board**
//****************************************
void printBars(string left[], string middle[], string right[], int line, int row)
{
	if (line == 0 && row == 1)
		cout << boxTop;
	cout << Pipe << left[line] << middle[line] << right[line] << Pipe;
	cout << slotsMenu[(6 * row) + (line + 1) - 6] << endl;
	if (line < 5)
		printBars(left, middle, right, line + 1, row);
	if (line == 5)
		cout << boxTop;
}

//****************************************
//Function Used in Displaying Game Board**
//****************************************
int nextSlot(int slot)
{
	if (slot < 5)
		return slot + 1;
	if (slot == 5)
		return 0;
	if (slot >= 6)
		return 1;
	return 0;
}

//*********************************
//*Function for output Game Stats**
//*********************************
void outputToTextFile()
{
	ofs << Pipe << stats << setw(71) << Pipe << endl;
	ofs << Pipe << stats1 << setw(68) << right << gamesPlayed << Pipe << endl;
	ofs << Pipe << stats2 << setw(71) << right << gamesWon << Pipe << endl;
	ofs << Pipe << stats3 << setw(70) << right << (gamesPlayed - gamesWon) << Pipe << endl;
	ofs << Pipe << stats4 << setw(71) << right << setprecision(2) << fixed << ((gamesWon / gamesPlayed) * 100) << percent << Pipe << endl;
	if (wallet > 999)
	{
		ofs << Pipe << stats7 << setw(65) << right << money << wallet << Pipe << endl;
	}
	else if (wallet > 99)
	{
		ofs << Pipe << stats7 << setw(66) << right << money << wallet << Pipe << endl;
	}
	else if (wallet > 9)
	{
		ofs << Pipe << stats7 << setw(67) << right << money << wallet << Pipe << endl;
	}

	
}

//********************************
//*Function for Input Validation**
//********************************
void betterInputValidation()
{
	do
	{
		getline(cin, strInput);
		char check[10] = { '0','1','2','3','4','5','6','7','8','9' };
		long long int length = strInput.size();
		int verify = 0;
		loopCheck = true;
		for (int count = 0; count < length; count++)
		{
			for (int numeral = 0; numeral <= 9; numeral++)
			{
				if (strInput[count] == check[numeral])
				{
					verify++;
				}
			}
		}
		if (verify != length)
		{
			cout << Error << endl;
			loopCheck = false;
		}
		else
		{
			stringstream myStream(strInput);
			if ((myStream >> choice))
				break;
			else
			{

			}
		}

	} while (loopCheck != true);
}

//************************************************
// Function Shows how much individual Won Line 1**
//************************************************
void displayifWon1()
{
	cout << endl;
	cout << cashStart << wallet << endl;
	wallet = wallet - bet1;
	cout << amountBet << bet1 << endl;
	cout << linesWon << matchCount1 << endl;
	if (matchCount1 > 0)
	{
		cout << congrats << endl;
		wallet = wallet + (2 * bet1);
		gamesPlayed++;
		gamesWon++;
	}
	else
	{
		cout << sorry << endl;
		gamesPlayed++;
	}
	cout << endl;
	cout << cashEnd << wallet << endl;
}

//************************************************
// Function Shows how much individual Won Line 3**
//************************************************
void displayifWon2()
{
	int moneyLost;
	cout << endl;
	cout << cashStart << wallet << endl;
	wallet = wallet - (bet2 * 3);
	cout << amountBet << bet2 << endl;
	cout << linesWon << matchCount2 << endl;
	if (matchCount2 > 0)
	{
		cout << congrats << endl;
		wallet = wallet + (bet2 * matchCount2) + (bet2 * 2 * matchCount2);
		gamesPlayed++;
		gamesWon++;
	}
	else
	{
		cout << sorry << endl;
		gamesPlayed++;
	}
	cout << endl;
	cout << cashEnd << wallet << endl;
}

//************************************************
// Function Shows how much individual Won Line 5**
//************************************************
void displayifWon3()
{
	int moneyLost;
	cout << endl;
	cout << cashStart << wallet << endl;
	wallet = wallet - (bet3 * 5);
	cout << amountBet << bet3 << endl;
	cout << linesWon << matchCount3 << endl;
	if (matchCount3 > 0)
	{
		cout << congrats << endl;
		wallet = wallet + (bet3 * matchCount3) + (bet3 * 3 * matchCount3);
		gamesPlayed++;
		gamesWon++;
	}
	else
	{
		cout << sorry << endl;
		gamesPlayed++;
	}
	cout << endl;
	cout << cashEnd << wallet << endl;
}

//**************************
//CHECK MATCHES FOR LINE 1**
//**************************
void checkForMatches1(int tempMid1, int tempMid2, int tempMid3)
{

	if (tempMid1 == tempMid2 && tempMid1 == tempMid3)
	{
		matchCount1++;
	}
	if (tempMid1 == tempMid2 && tempMid3 == 5)
	{
		matchCount1++;
	}
	if (tempMid1 == tempMid3 && tempMid2 == 5)
	{
		matchCount1++;
	}
	if (tempMid1 == 5 && tempMid2 == tempMid3)
	{
		matchCount1++;
	}
	if (tempMid1 == 5 && tempMid2 == 5)
	{
		matchCount1++;
	}
	if (tempMid3 == 5 && tempMid2 == 5)
	{
		matchCount1++;
	}
	if (tempMid1 == 5 && tempMid3 == 5)
	{
		matchCount1++;
	}


	displayifWon1();
	matchCount1 = 0;
}

//**************************
//CHECK MATCHES FOR LINE 3**
//**************************
void checkForMatches2(int tempTop1, int tempTop2, int tempTop3, int tempMid1, int tempMid2, int tempMid3, int tempBot1, int tempBot2, int tempBot3)
{
	if (tempMid1 == tempMid2 && tempMid1 == tempMid3)
	{
		matchCount2++;
	}
	if (tempMid1 == tempMid2 && tempMid3 == 5)
	{
		matchCount2++;
	}
	if (tempMid1 == tempMid3 && tempMid2 == 5)
	{
		matchCount2++;
	}
	if (tempMid1 == 5 && tempMid2 == tempMid3)
	{
		matchCount2++;
	}
	if (tempMid1 == 5 && tempMid2 == 5)
	{
		matchCount2++;
	}
	if (tempMid3 == 5 && tempMid2 == 5)
	{
		matchCount2++;
	}
	if (tempMid1 == 5 && tempMid3 == 5)
	{
		matchCount2++;
	}


	if (tempTop1 == tempTop2 && tempTop1 == tempTop3)
	{
		matchCount2++;
	}
	if (tempTop1 == tempTop2 && tempTop3 == 5)
	{
		matchCount2++;
	}
	if (tempTop1 == tempTop3 && tempTop2 == 5)
	{
		matchCount2++;
	}
	if (tempTop1 == 5 && tempTop2 == tempTop3)
	{
		matchCount2++;
	}
	if (tempTop1 == 5 && tempTop2 == 5)
	{
		matchCount2++;
	}
	if (tempTop3 == 5 && tempTop2 == 5)
	{
		matchCount2++;
	}
	if (tempTop1 == 5 && tempTop3 == 5)
	{
		matchCount2++;
	}



	if (tempBot1 == tempBot2 && tempBot1 == tempBot3)
	{
		matchCount2++;
	}
	if (tempBot1 == tempBot2 && tempBot3 == 5)
	{
		matchCount2++;
	}
	if (tempBot1 == tempBot3 && tempBot2 == 5)
	{
		matchCount2++;
	}
	if (tempBot1 == 5 && tempBot2 == tempBot3)
	{
		matchCount2++;
	}
	if (tempBot1 == 5 && tempBot2 == 5)
	{
		matchCount2++;
	}
	if (tempBot3 == 5 && tempBot2 == 5)
	{
		matchCount2++;
	}
	if (tempBot1 == 5 && tempBot3 == 5)
	{
		matchCount2++;
	}
	displayifWon2();
	matchCount2 = 0;
}

//**************************
//CHECK MATCHES FOR LINE 5**
//**************************
void checkForMatches3(int tempTop1, int tempTop2, int tempTop3, int tempMid1, int tempMid2, int tempMid3, int tempBot1, int tempBot2, int tempBot3)
{
	if (tempMid1 == tempMid2 && tempMid1 == tempMid3)
	{
		matchCount3++;
	}
	if (tempMid1 == tempMid2 && tempMid3 == 5)
	{
		matchCount3++;
	}
	if (tempMid1 == tempMid3 && tempMid2 == 5)
	{
		matchCount3++;
	}
	if (tempMid1 == 5 && tempMid2 == tempMid3)
	{
		matchCount3++;
	}
	if (tempMid1 == 5 && tempMid2 == 5)
	{
		matchCount3++;
	}
	if (tempMid3 == 5 && tempMid2 == 5)
	{
		matchCount3++;
	}
	if (tempMid1 == 5 && tempMid3 == 5)
	{
		matchCount3++;
	}


	if (tempTop1 == tempTop2 && tempTop1 == tempTop3)
	{
		matchCount3++;
	}
	if (tempTop1 == tempTop2 && tempTop3 == 5)
	{
		matchCount3++;
	}
	if (tempTop1 == tempTop3 && tempTop2 == 5)
	{
		matchCount3++;
	}
	if (tempTop1 == 5 && tempTop2 == tempTop3)
	{
		matchCount3++;
	}
	if (tempTop1 == 5 && tempTop2 == 5)
	{
		matchCount3++;
	}
	if (tempTop3 == 5 && tempTop2 == 5)
	{
		matchCount3++;
	}
	if (tempTop1 == 5 && tempTop3 == 5)
	{
		matchCount3++;
	}



	if (tempBot1 == tempBot2 && tempBot1 == tempBot3)
	{
		matchCount3++;
	}
	if (tempBot1 == tempBot2 && tempBot3 == 5)
	{
		matchCount3++;
	}
	if (tempBot1 == tempBot3 && tempBot2 == 5)
	{
		matchCount3++;
	}
	if (tempBot1 == 5 && tempBot2 == tempBot3)
	{
		matchCount3++;
	}
	if (tempBot1 == 5 && tempBot2 == 5)
	{
		matchCount3++;
	}
	if (tempBot3 == 5 && tempBot2 == 5)
	{
		matchCount3++;
	}
	if (tempBot1 == 5 && tempBot3 == 5)
	{
		matchCount3++;
	}
	

	if (tempTop1 == tempMid2 && tempTop1 == tempBot3)
	{
		matchCount3++;
	}
	if (tempTop1 == tempMid2 && tempBot3 == 5)
	{
		matchCount3++;
	}
	if (tempTop1 == tempBot3 && tempMid2 == 5)
	{
		matchCount3++;
	}
	if (tempTop1 == 5 && tempMid2 == tempBot3)
	{
		matchCount3++;
	}
	if (tempTop1 == 5 && tempMid2 == 5)
	{
		matchCount3++;
	}
	if (tempBot3 == 5 && tempMid2 == 5)
	{
		matchCount3++;
	}
	if (tempTop1 == 5 && tempBot3 == 5)
	{
		matchCount3++;
	}


	if (tempTop3 == tempMid2 && tempTop3 == tempBot1)
	{
		matchCount3++;
	}
	if (tempTop3 == tempMid2 && tempBot1 == 5)
	{
		matchCount3++;
	}
	if (tempTop3 == tempBot1 && tempMid2 == 5)
	{
		matchCount3++;
	}
	if (tempTop3 == 5 && tempMid2 == tempBot1)
	{
		matchCount3++;
	}
	if (tempTop3 == 5 && tempMid2 == 5)
	{
		matchCount3++;
	}
	if (tempBot1 == 5 && tempMid2 == 5)
	{
		matchCount3++;
	}
	if (tempTop3 == 5 && tempBot1 == 5)
	{
		matchCount3++;
	}	
	displayifWon3();
	matchCount3 = 0;
}


//***************************
//Input Validation for Bet1**
//***************************
void inputValidationBet1()
{
	do
	{
		getline(cin, strInput);
		char check[10] = { '0','1','2','3','4','5','6','7','8','9' };
		long long int length = strInput.size();
		int verify = 0;
		loopCheck = true;
		for (int count = 0; count < length; count++)
		{
			for (int numeral = 0; numeral <= 9; numeral++)
			{
				if (strInput[count] == check[numeral])
				{
					verify++;
				}
			}
		}
		if (verify != length)
		{
			cout << Error << endl;
			loopCheck = false;
		}
		else
		{
			stringstream myStream(strInput);
			if ((myStream >> bet1))
				break;
			else
			{

			}
		}

	} while (loopCheck != true);
}

//***************************
//Input Validation for Bet2**
//***************************
void inputValidationBet2()
{
	do
	{
		getline(cin, strInput);
		char check[10] = { '0','1','2','3','4','5','6','7','8','9' };
		long long int length = strInput.size();
		int verify = 0;
		loopCheck = true;
		for (int count = 0; count < length; count++)
		{
			for (int numeral = 0; numeral <= 9; numeral++)
			{
				if (strInput[count] == check[numeral])
				{
					verify++;
				}
			}
		}
		if (verify != length)
		{
			cout << Error << endl;
			loopCheck = false;
		}
		else
		{
			stringstream myStream(strInput);
			if ((myStream >> bet2))
				break;
			else
			{

			}
		}

	} while (loopCheck != true);
}

//***************************
//Input Validation for Bet3**
//***************************
void inputValidationBet3()
{
	do
	{
		getline(cin, strInput);
		char check[10] = { '0','1','2','3','4','5','6','7','8','9' };
		long long int length = strInput.size();
		int verify = 0;
		loopCheck = true;
		for (int count = 0; count < length; count++)
		{
			for (int numeral = 0; numeral <= 9; numeral++)
			{
				if (strInput[count] == check[numeral])
				{
					verify++;
				}
			}
		}
		if (verify != length)
		{
			cout << Error << endl;
			loopCheck = false;
		}
		else
		{
			stringstream myStream(strInput);
			if ((myStream >> bet3))
				break;
			else
			{

			}
		}

	} while (loopCheck != true);
}
//*****************************
//Input Validation For Wallet**
//*****************************
void inputValidationMoney()
{
	do
	{
		getline(cin, strInput);
		char check[10] = { '0','1','2','3','4','5','6','7','8','9' };
		long long int length = strInput.size();
		int verify = 0;
		loopCheck = true;
		for (int count = 0; count < length; count++)
		{
			for (int numeral = 0; numeral <= 9; numeral++)
			{
				if (strInput[count] == check[numeral])
				{
					verify++;
				}
			}
		}
		if (verify != length)
		{
			cout << Error << endl;
			loopCheck = false;
		}
		else
		{
			stringstream myStream(strInput);
			if ((myStream >> wallet2))
				break;
			else
			{

			}
		}

	} while (loopCheck != true);

}
//*****************
//Header function**
//*****************
void hdr()
{
	ofs << Bar << endl;
	ofs << left << Pipe << name << date << course << lab << setw(38) << right << Pipe << endl;
	ofs << Bar << endl;
}
//*****************
//Footer function**
//*****************
void ftr()
{
	ofs << Bar << endl;
	ofs << Pipe << footer << setw(46) << right << Pipe << endl;
	ofs << Bar << endl;
}
//**************
//EOF function**
//**************
void eof()
{
	ofs << Pipe << EOM << name << date << course << title << lab << setw(13) << right << Pipe << endl;
	ofs << Bar << endl;
}

//**********************
//Displays Last Screen**
//**********************
void displayGoodbye()
{
	cout << g1 << endl << g2 << endl << g3 << endl << g4 << endl << g5 << endl << g6 << endl << g7 << endl << g8 << endl;
}



//**********************
//Display first Screen**
//**********************
void displayScreen()
{
	cout << one << endl << two << endl << three << endl << four << endl << five << endl << six << endl << sevenn << endl << eight << endl;
	cout << endl;
	cout << nine << endl << ten << endl << eleven << endl << twelve << endl << thirteen << endl << fourteen << endl;
	cout << endl;
	cout << fifteen << endl << sixteen << endl << seventeen << endl << eighteen << endl << ninteen << endl << twenty << endl;
	cout << endl;
	cout << twentyone << endl << twentytwo << endl << twentythree << endl << twentyfour << endl << twentyfive << endl << twentysix;
	cout << endl;
	system("pause");
	system("cls");
}

//***************
//Display Rules**
//***************
void displayRules()
{
	cout << rules << colon << endl;
	cout << rule1 << endl;
	cout << rule1a << endl;
	cout << rule1b << endl;
	cout << rule1c << endl << endl;
	cout << rule2 << endl << endl;
	cout << rule3 << endl;
	cout << rule3a << endl;
	cout << rule3b << endl;
	cout << rule3c << endl << endl;
	cout << rule4 << endl;
	cout << rule4a << endl;
	cout << rule4b << endl;
	cout << rule4c << endl;
}


//***************************************
//*Function for displaying wallet screen*
//***************************************
void displayWallet()
{
	n = 1;
	while (n > 0)
	{
		cout << sayWallet << endl << cashWallet << wallet << endl << addMoney << endl << addMoneyQuit << endl << endl;
		betterInputValidation();
		while (choice > 2 || choice < 1)
		{
			cout << Error << endl << Invalid1 << endl;
			betterInputValidation();
		}
		system("cls");
		if (choice == 1 || choice == 2)
		{
			switch (choice)
			{
			case 1:
				cout << cashWallet << wallet << endl;
				cout << howMuch << endl;
				inputValidationMoney();
				while (wallet2 < 1 || wallet2 > 5000)
				{
					cout << Error << endl;
					cout << betRange << endl;
					inputValidationMoney();
				}
				while ((wallet + wallet2) > 10000)
				{
					cout << Error << endl;
					cout << walletRange << endl;
					inputValidationMoney();
				}
				wallet = wallet + wallet2;
				system("cls");
				break;
			case 2:
				n = -1;
				break;
			}
		}
	}

}

//*******************************
//Function Shows the Game Board**
//*******************************
void showSlotMachine(int lines)
{
	unsigned seed = time(0);
	srand(seed);
	fillShapeArrays();
	if (boost == 9)
	{
		leftSlot = 0;
		middleSlot = 0;
		rightSlot = 0;
		boost = 0;
	}
	else
	{
		leftSlot = rand() % 6;
		middleSlot = rand() % 6;
		rightSlot = rand() % 6;
	}
	system("CLS");
	printBars(leftColumn[leftSlot], middleColumn[middleSlot], rightColumn[rightSlot], 0, 1);
	tempTop1 = leftSlot;
	tempTop2 = middleSlot;
	tempTop3 = rightSlot;
	printBars(leftColumn[nextSlot(leftSlot)], middleColumn[nextSlot(middleSlot)], rightColumn[nextSlot(rightSlot)], 0, 2);
	tempMid1 = nextSlot(leftSlot);
	tempMid2 = nextSlot(middleSlot);
	tempMid3 = nextSlot(rightSlot);
	printBars(leftColumn[nextSlot(leftSlot + 1)], middleColumn[nextSlot(middleSlot + 1)], rightColumn[nextSlot(rightSlot + 1)], 0, 3);
	tempBot1 = nextSlot(leftSlot + 1);
	tempBot2 = nextSlot(middleSlot + 1);
	tempBot3 = nextSlot(rightSlot + 1);
	
	if (lines == 1)
	{
		checkForMatches1(tempMid1, tempMid2, tempMid3);
	}
	if (lines == 3)
	{
		checkForMatches2(tempTop1, tempTop2, tempTop3, tempMid1, tempMid2, tempMid3, tempBot1, tempBot2, tempBot3);
	}
	if (lines == 5)
	{
		checkForMatches3(tempTop1, tempTop2, tempTop3, tempMid1, tempMid2, tempMid3, tempBot1, tempBot2, tempBot3);
	}

}
//*******************************
//Function sets up slot machine**
//*******************************
void playGame()
{
	cout << howManyLines << endl;
	cout << oneLine << endl;
	cout << threeLines << endl;
	cout << fiveLines << endl;
	betterInputValidation();
	while (choice < 1 || choice > 3)
	{
		cout << Error << endl;
		cout << Invalid3 << endl;
		betterInputValidation();
	}
	system("cls");
	if (choice == 1 || choice == 2 || choice == 3)
	{
		switch (choice)
		{
		case 1:
			cout << cashWallet << wallet << endl;
			cout << howMuchBetLine1 << endl;
			inputValidationBet1();
			while (bet1 < 25 || bet1 > 100)
			{
				cout << wrongBetLine1 << endl;
				inputValidationBet1();
			}
			while (bet1 > wallet)
			{
				cout << Error << endl;
				cout << notEnoughToBet << endl;
				cout << howMuch << space;
				inputValidationMoney();
				wallet = wallet + wallet2;
			}
			system("cls");
			showSlotMachine(1);
			system("pause");
			break;


		case 2:
			cout << cashWallet << wallet << endl;
			cout << howMuchBetLine3 << endl;
			inputValidationBet2();
			while (bet2 < 50 || bet2 > 200)
			{
				cout << wrongBetLine3 << endl;
				inputValidationBet2();
			}
			while ((bet2 * 3) > wallet)
			{
				cout << Error << endl;
				cout << notEnoughToBet << endl;
				cout << howMuch << space;
				inputValidationMoney();
				wallet = wallet + wallet2;
			}
			system("cls");
			showSlotMachine(3);
			system("pause");
			break;


		case 3:
			cout << cashWallet << wallet << endl;
			cout << howMuchBetLine5 << endl;
			inputValidationBet3();
			while (bet3 < 100 || bet3 > 300)
			{
				cout << wrongBetLine5 << endl;
				inputValidationBet3();
			}
			while ((bet3 * 5) > wallet)
			{
				cout << Error << endl;
				cout << notEnoughToBet << endl;
				cout << howMuch << space;
				inputValidationMoney();
				wallet = wallet + wallet2;
			}
			system("cls");
			showSlotMachine(5);
			system("pause");
			break;
		}
	}
}


//***********
//Operation**
//***********
void operation()
{
	MENU = 2;
	while (MENU > 1)
	{
		displaySlotMachine();
		myFn();
		betterInputValidation();
		while (choice < 1 || choice > 4)
		{
			cout << Error << endl << Invalid << endl;
			betterInputValidation();
		}
		system("cls");
		if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
		{
			switch (choice)
			{
			case 1:
				displayRules();
				system("pause");
				system("cls");
				break;

			case 2:
				displayWallet();
				system("cls");
				break;

			case 3:
				playGame();
				system("cls");
				break;

			case 4:
				MENU = MENU - 1000;
				displayGoodbye();
				system("pause");
				break;
			}
		}
	}
}

//******
//Main**
//******
int main()
{
	hdr();
	displayScreen();
	operation();
	outputToTextFile();
	ftr();
	eof();
	ofs.close();
	return 0;
}