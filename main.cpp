#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string getBot()
{
	srand(time(0));

	string bot;

	int state = rand() % 3 + 1;

	switch (state)
	{
	case 1:
		bot = "Rock";
		break;
	case 2:
		bot = "Scissors";
		break;
	case 3:
		bot = "Paper";
		break;
	}
	return bot;
}

int result(string player, string bot)
{
	int _result = -2;

	if (player == "Rock")
	{
		if (bot == "Paper")
		{
			_result = -1;
		}
		else if (bot == "Scissors")
		{
			_result = 1;
		}
		else if (bot == "Rock")
		{
			_result = 0;
		}
	}
	else if (player == "Scissors")
	{
		if (bot == "Paper")
		{
			_result = 1;
		}
		else if (bot == "Rock")
		{
			_result = -1;
		}
		else if (bot == "Scissors")
		{
			_result = 0;
		}
	}
	else if (player == "Paper")
	{
		if (bot == "Rock")
		{
			_result = 1;
		}
		else if (bot == "Scissors")
		{
			_result = -1;
		}
		else if (bot == "Paper")
		{
			_result = 0;
		}
	}

	return _result;
}

int main()
{
	bool end = false;

	while (!end)
	{
		cout << "Enter Rock, Scissors or Paper: ";
		string player;
		cin >> player;

		string bot = getBot();

		cout << "Bot entered " << bot << endl;

		if (result(player, bot) == 1)
		{
			cout << "You win!\n";
			end = true;
		}
		else if (result(player, bot) == -1)
		{
			cout << "Looser!\n";
			end = true;
		}
		else if (result(player, bot) == 0)
		{
			cout << "Game ended in draws. Try again\n";
		}
		else
		{
			cout << "Wrong input\n";
		}
	}

	system("PAUSE");
	return 0;
}