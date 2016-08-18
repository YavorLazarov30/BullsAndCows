#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <sstream>


using namespace std;
class Player{
public:
	string name;
	string cnumber;
	int number;
	Player(){

		cin >> name;

		cout << "***    ***      ***      ***     ***     ***    ***  " << endl;
		cout << "Hello " << name << " lets play!!!" << endl;
		cout << "***    ***      ***      ***      ***    ***     ***   " << endl;
	}
	int threeDigitNumberPlayer(int digit){
		int digit1 = digit % 10;
		int digit2 = digit % 100 / 10;
		int digit3 = digit / 100 % 10;
		while (digit1 == digit2 || digit3 == digit1 || digit2 == digit3){
			cout << "Bad Input " << name << "! Try again: ";
			cin >> digit;
			digit1 = digit % 10;
			digit2 = digit % 100 / 10;
			digit3 = digit / 100 % 10;
		}

		return digit;
	}
	int fourDigitNumberPlayer(int digit){
		int digit1 = digit % 10;
		int digit2 = digit % 100 / 10;
		int digit3 = digit / 100 % 10;
		int digit4 = digit / 1000 % 10;
		while (digit1 == digit2 || digit3 == digit1 || digit2 == digit3 || digit4 == digit1
			|| digit4 == digit2 || digit4 == digit3){
			cout << "Bad Input " << name << "! Try again: ";
			cin >> digit;
			digit1 = digit % 10;
			digit2 = digit % 100 / 10;
			digit3 = digit / 100 % 10;
			digit4 = digit / 1000 % 10;

		}

		return digit;
	}
	int fiveDigitNumberPlayer(int digit){
		int digit1 = digit % 10;
		int digit2 = digit % 100 / 10;
		int digit3 = digit / 100 % 10;
		int digit4 = digit / 1000 % 10;
		int digit5 = digit / 10000 % 10;
		while (digit1 == digit2 || digit3 == digit1 || digit2 == digit3 || digit4 == digit1
			|| digit4 == digit2 || digit4 == digit3 || digit5 == digit1 || digit5 == digit2 ||
			digit5 == digit3 || digit5 == digit4){
			cout << "Bad Input " << name << "! Try again: ";
			cin >> digit;
			digit1 = digit % 10;
			digit2 = digit % 100 / 10;
			digit3 = digit / 100 % 10;
			digit4 = digit / 1000 % 10;
			digit5 = digit / 10000 % 10;
		}
		return digit;
	}
	int sixDigitNumberPlayer(int digit){
		int digit1 = digit % 10;
		int digit2 = digit % 100 / 10;
		int digit3 = digit / 100 % 10;
		int digit4 = digit / 1000 % 10;
		int digit5 = digit / 10000 % 10;
		int digit6 = digit / 100000 % 10;
		while (digit1 == digit2 || digit3 == digit1 || digit2 == digit3 || digit4 == digit1
			|| digit4 == digit2 || digit4 == digit3 || digit5 == digit1 || digit5 == digit2 ||
			digit5 == digit3 || digit5 == digit4 || digit6 == digit1 || digit6 == digit2 || digit6 == digit3 || digit6 == digit4
			|| digit6 == digit5){
			cout << "Bad Input " << name << "! Try again: ";
			cin >> digit;
			digit1 = digit % 10;
			digit2 = digit % 100 / 10;
			digit3 = digit / 100 % 10;
			digit4 = digit / 1000 % 10;
			digit5 = digit / 10000 % 10;
			digit6 = digit / 100000 % 10;
		}

		return digit;
	}
	void convertNumber(){
		ostringstream ss;
		ss << number;
		cnumber = ss.str();
	}

};
class Computer{
public:
	int size;
	int comp;
	string computer;

	string convertNumber3(){
		srand(time(NULL));
		comp = rand() % 900 + 100;
		int digit = comp;
		int digit1 = digit % 10;
		int digit2 = digit % 100 / 10;
		int digit3 = digit / 100 % 10;
		while (digit1 == digit2 || digit3 == digit1 || digit2 == digit3){
			//You can test the bad inputs with the code bellow.
			//			cout << "Bad Input! Computer will try again! " << endl;
			digit = rand() % 900 + 100;
			digit1 = digit % 10;
			digit2 = digit % 100 / 10;
			digit3 = digit / 100 % 10;
		}

		string temp;
		ostringstream ss;
		ss << digit;
		temp = ss.str();

		return temp;
	}
	string convertNumber4(){
		srand(time(NULL));
		comp = rand() % 9000 + 1000;
		int digit = comp;
		int digit1 = digit % 10;
		int digit2 = digit % 100 / 10;
		int digit3 = digit / 100 % 10;
		int digit4 = digit / 1000 % 10;
		while (digit1 == digit2 || digit3 == digit1 || digit2 == digit3 || digit4 == digit1
			|| digit4 == digit2 || digit4 == digit3){
			//You can test the bad inputs with the code bellow.
			//			cout << "Bad Input! Computer will try again! " << endl;
			digit = rand() % 9000 + 1000;
			digit1 = digit % 10;
			digit2 = digit % 100 / 10;
			digit3 = digit / 100 % 10;
			digit4 = digit / 1000 % 10;

		}

		string temp;
		ostringstream ss;
		ss << digit;
		temp = ss.str();
		return temp;
	}
	string convertNumber5(){
		srand(time(NULL));
		comp = rand() % 90000 + 10000;
		int digit = comp;
		int digit1 = digit % 10;
		int digit2 = digit % 100 / 10;
		int digit3 = digit / 100 % 10;
		int digit4 = digit / 1000 % 10;
		int digit5 = digit / 10000 % 10;
		while (digit1 == digit2 || digit3 == digit1 || digit2 == digit3 || digit4 == digit1
			|| digit4 == digit2 || digit4 == digit3 || digit5 == digit1 || digit5 == digit2 ||
			digit5 == digit3 || digit5 == digit4){
			//You can test the bad inputs with the code bellow.
			//			cout << "Bad Input! Computer will try again! " << endl;		
			digit = rand() % 90000 + 10000;
			digit1 = digit % 10;
			digit2 = digit % 100 / 10;
			digit3 = digit / 100 % 10;
			digit4 = digit / 1000 % 10;
			digit5 = digit / 10000 % 10;
		}

		string temp;
		ostringstream ss;
		ss << digit;
		temp = ss.str();

		return temp;
	}
	string convertNumber6(){
		srand(time(NULL));
		comp = rand() % 900000 + 100000;
		int digit = comp;

		int digit1 = digit % 10;
		int digit2 = digit % 100 / 10;
		int digit3 = digit / 100 % 10;
		int digit4 = digit / 1000 % 10;
		int digit5 = digit / 10000 % 10;
		int digit6 = digit / 100000 % 10;
		while (digit1 == digit2 || digit3 == digit1 || digit2 == digit3 || digit4 == digit1
			|| digit4 == digit2 || digit4 == digit3 || digit5 == digit1 || digit5 == digit2 ||
			digit5 == digit3 || digit5 == digit4 || digit6 == digit1 || digit6 == digit2 || digit6 == digit3 || digit6 == digit4
			|| digit6 == digit5){
			//You can test the bad inputs with the code bellow.
			//			cout << "Bad Input! Computer will try again! " << endl;
			digit = rand() % 900000 + 100000;
			digit1 = digit % 10;
			digit2 = digit % 100 / 10;
			digit3 = digit / 100 % 10;
			digit4 = digit / 1000 % 10;
			digit5 = digit / 10000 % 10;
			digit6 = digit / 100000 % 10;
		}
		ostringstream ss;
		ss << digit;
		string temp = ss.str();
		return temp;
	}
	Computer(){}
	Computer(int size){


		ostringstream ss;
		ss << comp;
		computer = ss.str();
		switch (size){
		case 3:

			computer = convertNumber3();
			break;
		case 4:
			computer = convertNumber4();
			break;
		case 5:
			computer = convertNumber5();
			break;
		case 6:
			computer = convertNumber6();
			break;
		}

	}
};

void main(){
	int bulls = 0;
	int cows = 0;
	int calfs = 0;
	int size;
	char inputs;
	string comp;
	string player;
	cout << "                                       BULLS AND COWS                                                    " << endl;
	cout << "========================================================================================" << endl;
	cout << "What's your name: ";
	Player p;
	Computer c;
	int control_game = 0;
	bool c_game = false;
	//Vectors for result containers. This will be used if the player want to see his turns;
	vector <string> results3;
	vector<string>results4;
	vector <string> results5;
	vector <string> results6;
	int gametype;
	int final_calculation = 0;;
	string level = " ";
	cout << "                           MENU                                        " << endl;
	cout << "===========================================================" << endl;
	cout << "1 for Beginner - 30 turns." << endl;
	cout << "2 for Intermediate - 22 turns. " << endl;
	cout << "3 for Expert - 12 turns." << endl;
	cout << "Your choice: ";
	cin >> gametype;
	int stupid = 3;
	int turns = 0;
	while ((gametype != 1 && gametype != 2 && gametype != 3) && stupid>1){
		stupid--;
		cout << p.name << ", I don't think that you are so stupid!" << endl;
		cout << "You have " << stupid << " chances to prove that! " << endl;
		cout << "Please insert 1, 2 or 3: ";
		cin >> gametype;
	}
	if (stupid > 1){
		switch (gametype){
		case 1:
			control_game += 30;
			level = " a Beginner. ";
			break;
		case 2:
			control_game += 22;
			level = "an Intermediate. ";
			break;
		case 3:
			control_game += 12;
			level = " an Expert. ";
			break;

		}

		cout << p.name << ", you are now " << level << endl;
		cout << endl << "Now choose the size of the number( Here also have differences in the difficulty). " << endl;
		cout << "3-super easy" << endl;
		cout << "4-easy " << endl;
		cout << "5-hard " << endl;
		cout << "6-very hard. " << endl;
		cout << "Your choice, " << p.name << ": ";
		cin >> size;

		switch (size){

		case 3:
			c.computer = c.convertNumber3();
			cout << p.name << ", you choosed to play with three digit number" << endl;
			cout << "===========================================================" << endl;

			cout << "Computer: My number is *** ,  Give me yours!" << endl;

			cout << p.name << ": ";
			cin >> p.number;
			p.number = p.threeDigitNumberPlayer(p.number);
			p.convertNumber();
			turns++;
			results3.push_back(p.cnumber);
			cout << endl << "Computer: Do you want to see your guesses y/n: ";
			cin >> inputs;
			switch (inputs){
			case 'y':
				cout << endl << "OK, " << p.name << " please check your inputs, below!" << endl << endl;
				cout << "Guess " << 1 << " :" << results3[0] << endl << endl;

				break;
			case 'n':
				cout << endl << "Computer: You don't want to see the result. OK! We can continue! " << endl;
				break;

			}
			while (bulls < 3 && control_game>1){
				
				for (int i = 0; i < size; i++){
					if (c.computer[i] == p.cnumber[i]){
						bulls++;
					}
				}
				for (int i = 0; i < size; i++){
					for (int j = 0; j < size; j++){
						if (c.computer[i] != p.cnumber[i]){
							if (c.computer[i] == p.cnumber[j]){
								cows++;
							}
						}
					}
				}
				calfs = size - (bulls + cows);
				if (bulls >= 3){
					cout << "You have enough bulls for exit" << endl;
					break;
				}
				cout << "Your result after the " << turns << " guess:";
				cout << endl << "=========================" << endl;
				cout << "|| Bulls: " << bulls << "          ||" << endl;
				cout << "|| Cows: " << cows << "            ||" << endl;
				cout << "|| Calfs: " << calfs << "          ||" << endl;
				cout << endl << "=========================" << endl;

				bulls = 0;
				cows = 0;
				calfs = 0;
				cout << "Computer: My number is ***, Give me yours! " << endl;
				cout << p.name << ": ";
				cin >> p.number;
				p.number = p.threeDigitNumberPlayer(p.number);
				p.convertNumber();
				results3.push_back(p.cnumber);
				
				turns++;
				if (turns==control_game){
					c_game = true;
					break;
				}
				cout << endl << "Do you want to see your guesses y/n: ";
				cin >> inputs;
				switch (inputs){
				case 'y':
					cout << "OK, " << p.name << ", please check your inputs below!" << endl << endl;
					for (int i = 0; i < results3.size(); i++){
						cout << "Guess " << i + 1 << " :" << results3[i] << endl;
					}
					break;
				case 'n':
					cout << endl << "Computer: You don't want to see the result.OK! We can continue! " << endl;
					break;
				}


			}
			break;
		case 4:
			c.computer = c.convertNumber4();
			cout << p.name << ", you choosed to play with four digit number" << endl;
			cout << "===========================================================" << endl;
			cout << " Computer: My number is ****, Give me yours!" << endl;
			cout << p.name << ": ";
			cin >> p.number;
			p.number = p.fourDigitNumberPlayer(p.number);
			p.convertNumber();
			results4.push_back(p.cnumber);
			cout << endl << "Computer: Do you want to see your guesses y/n: ";
			cin >> inputs;
			switch (inputs){
			case 'y':
				cout << endl << "OK, " << p.name << " please check your inputs, below!" << endl << endl;
				cout << "Guess " << 1 << " :" << results4[0] << endl << endl;

				break;
			case 'n':
				cout << endl << "Computer: You don't want to see the result. OK! We can continue! " << endl;
				break;

			}
			while (bulls < 4 && control_game>1){
				for (int i = 0; i < size; i++){
					if (c.computer[i] == p.cnumber[i]){
						bulls++;
					}
				}
				for (int i = 0; i < size; i++){
					for (int j = 0; j < size; j++){
						if (c.computer[i] != p.cnumber[i]){
							if (c.computer[i] == p.cnumber[j]){
								cows++;
							}
						}
					}
				}

				calfs = size - (bulls + cows);
				if (bulls >= 4){
					cout << "Computer: You have enough bulls for exit!" << endl;
					break;
				}
				cout << endl << "Computer:This is the result after your " << turns << " guess." << endl;
				cout << endl << "=========================" << endl;
				cout << "|| Bulls: " << bulls << "             ||" << endl;
				cout << "|| Cows: " << cows << "               ||" << endl;
				cout << "|| Calfs: " << calfs << "             ||" << endl;
				cout << endl << "=========================" << endl;
				bulls = 0;
				cows = 0;
				calfs = 0;

				cout << "Computer: My number is ****, Give me yours! " << endl;
				cout << p.name << ": ";
				cin >> p.number;
				turns++;
				if (turns == control_game){
					c_game = true;
					break;
				}
				p.number = p.fourDigitNumberPlayer(p.number);
				p.convertNumber();

				results4.push_back(p.cnumber);
				cout << endl << "Computer: Do you want to see your guesses y/n: ";
				cin >> inputs;
				switch (inputs){
				case 'y':
					cout << endl << "OK, " << p.name << " please check your inputs, below!" << endl << endl;
					for (int i = 0; i < results4.size(); i++){
						cout << "Guess " << i + 1 << " :" << results4[i] << endl << endl;
					}
					break;
				case 'n':
					cout << endl << "Computer: You don't want to see the result. OK! We can continue! " << endl;
					break;

				}


			}

			break;
		case 5:
			turns = 0;
			c.computer = c.convertNumber5();
			cout << p.name << ", you choosed to play with five  digit number" << endl;
			cout << "===========================================================" << endl;
			cout << " Computer: My number is *****, Give me yours! " << endl;
			cout << p.name << ": ";
			cin >> p.number;
			turns++;
			p.number = p.fiveDigitNumberPlayer(p.number);
			p.convertNumber();
			results5.push_back(p.cnumber);
			cout << endl << "Do you want to see your inputs y/n: ";
			cin >> inputs;
			switch (inputs){
			case 'y':
				cout << "OK, " << p.name << ", please check your inputs below!" << endl << endl;
				cout << "Guess " << 1 << " = " << results5[0];
				break;
			case 'n':
				cout << endl << "Computer: You don't want to see the result.OK! We can continue! " << endl;
				break;

			}
			while (bulls < 5 && control_game>0){
				if (control_game <= 0){
					c_game = true;
					break;
				}
				for (int i = 0; i < size; i++){
					if (c.computer[i] == p.cnumber[i]){
						bulls++;
					}
				}
				for (int i = 0; i < size; i++){
					for (int j = 0; j < size; j++){
						if (c.computer[i] != p.cnumber[i]){
							if (c.computer[i] == p.cnumber[j]){
								cows++;
							}
						}
					}
				}
				calfs = size - (bulls + cows);

				if (bulls >= 5){
					cout << "YESSS!!! You have enough bulls for exit" << endl;
					break;
				}
				cout << endl << endl << "Computer:This is the result after your " << turns << " guess." << endl;
				cout << endl << "=========================" << endl;
				cout << "|| Bulls: " << bulls << "          ||" << endl;
				cout << "|| Cows: " << cows << "            ||" << endl;
				cout << "|| Calfs: " << calfs << "          ||" << endl;
				cout << endl << "=========================" << endl << endl;
				bulls = 0;
				cows = 0;
				calfs = 0;


				cout << "Computer: My number is *****, Give me yours! " << endl;
				cout << p.name << ": ";
				cin >> p.number;
				turns++;
				if (turns == control_game){
					c_game = true;
					break;
				}
				p.number = p.fiveDigitNumberPlayer(p.number);
				p.convertNumber();
				results5.push_back(p.cnumber);
				cout << endl << "Computer: Do you want to see your inputs y/n: ";
				cin >> inputs;
				switch (inputs){
					cout << "OK, " << p.name << ", please check your inputs below!" << endl << endl;
				case 'y':
					for (int i = 0; i < results5.size(); i++){
						cout << " Guess " << i + 1 << " :" << results5[i] << endl << endl;
					}
					break;
				case 'n':
					cout << endl << "Computer: You don't want to see the result. We contunue! " << endl;
					break;

				}


			}

			break;
		case 6:
			turns = 0;
			c.computer = " ";
			c.computer = c.convertNumber6();
			cout << " Computer: " << p.name << ", you choosed to play with six digit number" << endl;
			cout << "===========================================================" << endl;
			cout << "Computer: My number is ******, Give me yours! " << endl;
			cout << p.name << ": ";
			cin >> p.number;
			turns++;
			p.number = p.sixDigitNumberPlayer(p.number);
			p.convertNumber();
			results6.push_back(p.cnumber);
			cout << endl << " Computer: " << p.name << ", do you want to see your inputs y/n: ";
			cin >> inputs;

			switch (inputs){
			case 'y':
				cout << "OK, " << p.name << ", please check your inputs below!" << endl << endl;
				for (int i = 0; i < results6.size(); i++){
					cout << "Guess " << i + 1 << " :" << results6[i] << endl;
				}
				break;
			case 'n':
				cout << endl << "You don't want to see the result. We contunue! " << endl;
				break;

			}

			
			while (bulls < 6 && control_game>1){
				if (control_game <= 0){
					c_game = true;
					break;
				}
				for (int i = 0; i < size; i++){
					if (c.computer[i] == p.cnumber[i]){
						bulls++;
					}
				}
				for (int i = 0; i < size; i++){
					for (int j = 0; j < size; j++){
						if (c.computer[i]!=p.cnumber[i]){
							if (c.computer[i] == p.cnumber[j]){
								cows++;
							}
						}
					}
				}
				if (bulls >= 6){
					cout << "You have enough bulls for exit" << endl;
					break;
				}
				calfs = size - (bulls + cows);
				cout << endl << "Computer:This is the result after your " << turns << " guess." << endl;
				cout << endl << "=========================" << endl;
				cout << "|| Bulls: " << bulls << "              ||" << endl;
				cout << "|| Cows: " << cows << "                ||" << endl;
				cout << "|| Calfs: " << calfs << "              ||" << endl;
				cout << endl << "=========================" << endl;
				bulls = 0;
				cows = 0;
				calfs = 0;
				cout << "Computer: My number is ******, Give me yours! " << endl;
				cout << p.name << ": ";
				cin >> p.number;
				turns++;
				if (turns == control_game){
					c_game = true;
					break;
				}
				p.number = p.sixDigitNumberPlayer(p.number);
				p.convertNumber();
				results6.push_back(p.cnumber);
				cout << endl << " Computer: " << p.name << ", do you want to see your inputs y/n: ";
				cin >> inputs;
				switch (inputs){
				case 'y':
					for (int i = 0; i < results6.size(); i++){
						cout << "Guess " << i + 1 << " :" << results6[i] << endl;
					}
					break;
				case 'n':
					cout << endl << "You don't want to see the result. We contunue! " << endl;
					break;

				}


			}

			break;
		}


		if (c_game){
			cout << "--------------" << endl;
			cout << "-    LOOSER   -" << endl;
			cout << "--------------" << endl<<endl;

			cout << "Computer: You loose the game after " << final_calculation << " turns. :( " << endl;
			cout << "Computer: My number was: "<<endl<<endl;

			cout << " * * * * " << endl;
			cout << " * " << c.computer << " *" << endl;
			cout << " * * * * " << endl;
		}
		else{
			cout << "--------------" << endl;
			cout << "-    WINNER   -" << endl;
			cout << "--------------" << endl<<endl;
			cout << " * * * * " << endl;
			cout << " * " << c.computer << " *" << endl;
			cout << " * * * * " << endl<<endl;
			cout << "WELL DONE, " << p.name;
			cout << "! You win the game after " << turns  << " tuns!" << endl;
			cout << "You WON the most beautiful SMILE on the Radio! CONGRATULATIONS! " << endl;
		}
	}
	else{
		cout << endl << p.name << ", I can't believe how stupid you are! THIS IS MADNESS! " << endl;
		cout << p.name << ": madness?!?  THISSSS ISSSSSSS  " << p.name << "!!!!!!!!!!!!!!" << endl;
	}
	cout << "Press any key for exit and Ctrl+F5 for start the game again! See you ! :) " << endl;
	system("pause>nul");
}
