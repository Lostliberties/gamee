#include <iostream>

using namespace std;

int mainmenu();
void testmenu();
int game();



int menuchoice;

int main()
{
	do //my do while loop wont let me go into my functions
	{

		system("cls");

		mainmenu();

		switch (menuchoice)
		{

			
		case 1:

			system("cls"); 

			int game(); //after completing this how would i get it to go back to the main menu? without using a do while

			break;

		case 2:


			system("cls");

			void testmenu();

			break;

		case 3:

			system("cls");

			cout << "goodbye" << endl;

			return 0;

			break;

		}

	} while (menuchoice != 3);
	

	return 0;
}

int mainmenu()
{
	cout << "this is The Game\n" <<
		"1. play game.\n" <<
		"2. test game.\n" <<
		"3. quit game.\n" << endl;

	cin >> menuchoice;
	
	
	return menuchoice;
}

void testmenu()
{
	int menuoption;

	system("cls");

	cout << "welcome to the dev debugger\n";

	cout << "chose what you need to debug\n";

	cin >> menuoption;

	switch (menuoption)
	{
	case 1:
		system("cls");

		cout << "test random number" << endl;

		//cout << randomnumber() << endl;



	}

}

int game()
{

	int enter;

	system("cls");
	cout << "this is the game" << endl;

	cout << "type to continue" << endl;
	cin >> enter;






	return main();
}
