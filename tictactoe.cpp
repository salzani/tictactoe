#include <iostream>

#include <stdio.h>

#include <iomanip>

#include <locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");


	//variavel da escolha
	int choice;
	//variavel com o valor de cada campo
	string c1 = "1";
	string c2 = "2";
	string c3 = "3";
	string c4 = "4";
	string c5 = "5";
	string c6 = "6";
	string c7 = "7";
	string c8 = "8";
	string c9 = "9";
	string player1 = "X";
	string player2 = "O";
	int chosePlayer;
	//variavel do jgoador atual
	string curPlayer;

	cout << setw(7) << " \(**)/" << setw(7) << " \(**)/" << setw(7) << " \(**)/ \n";
	cout << endl;
	cout << endl;
	cout << "TicTacToe\n";
	cout << endl;
	cout << "Escolha qual jogador irá começar: \n";
	cout << "Jogador (1) -> press '1' \n";
	cout << "Jogador (2) -> press '2' \n";
	cout << endl;
	cout << endl;
	cout << "     **  " << endl;
	cout << "    *__*  " << endl;
	cout << "  *|    |*  " << endl;
	cout << " (_|    |_) " << endl;
	cout << "    *  *   " << endl;
	cout << "     )(   " << endl;
	cout << "   _|__|_ " << endl;
	cout << " _|______|_ " << endl;
	cout << "|__________|" << endl;
	cout << endl;
	cout << endl;




	cin >> chosePlayer;
	cout << endl;
	cout << endl;
	switch (chosePlayer)
	{
	case 1:
		curPlayer = player1;
		break;
	case 2:
		curPlayer = player2;
		break;
	default:
		break;
	}

	while (true)
	{
		//tabuleiro
		cout << "|" << setw(2) << c1 << setw(2) << "|" << setw(2) << c2 << setw(2) << "|" << setw(2) << c3 << setw(2) << "|\n";
		cout << "|" << setw(2) << c4 << setw(2) << "|" << setw(2) << c5 << setw(2) << "|" << setw(2) << c6 << setw(2) << "|\n";
		cout << "|" << setw(2) << c7 << setw(2) << "|" << setw(2) << c8 << setw(2) << "|" << setw(2) << c9 << setw(2) << "|\n";

		cout << "Escolha um campo para jogar\n";
		cin >> choice;

		//realocando cada campo com a escolha
		switch (choice)
		{
		case 1:
			if (c1 == "1") {
				c1 = curPlayer;
			}
			else {
				cout << "Casa ja escolhida! Jogue novamente\n\n";
				curPlayer = (curPlayer == player1) ? player2 : player1;
			}
			break;
		case 2:
			if (c2 == "2") {
				c2 = curPlayer;
			}
			else {
				cout << "Casa ja escolhida! Jogue novamente\n\n";
				curPlayer = (curPlayer == "X") ? "O" : "X";
			}
			break;
		case 3:
			if (c3 == "3") {
				c3 = curPlayer;
			}
			else {
				cout << "Casa ja escolhida! Jogue novamente\n\n";
				curPlayer = (curPlayer == "X") ? "O" : "X";
			}
			break;
		case 4:
			if (c4 == "4") {
				c4 = curPlayer;
			}
			else {
				cout << "Casa ja escolhida! Jogue novamente\n\n";
				curPlayer = (curPlayer == "X") ? "O" : "X";
			}
			break;
		case 5:
			if (c5 == "5") {
				c5 = curPlayer;
			}
			else {
				cout << "Casa ja escolhida! Jogue novamente\n\n";
				curPlayer = (curPlayer == "X") ? "O" : "X";
			}
			break;
		case 6:
			if (c6 == "6") {
				c6 = curPlayer;
			}
			else {
				cout << "Casa ja escolhida! Jogue novamente\n\n";
				curPlayer = (curPlayer == "X") ? "O" : "X";
			}
			break;
		case 7:
			if (c7 == "7") {
				c7 = curPlayer;
			}
			else {
				cout << "Casa ja escolhida! Jogue novamente\n\n";
				curPlayer = (curPlayer == "X") ? "O" : "X";
			}
			break;
		case 8:
			if (c8 == "8") {
				c8 = curPlayer;
			}
			else {
				cout << "Casa ja escolhida! Jogue novamente\n\n";
				curPlayer = (curPlayer == "X") ? "O" : "X";
			}
			break;
		case 9:
			if (c9 == "9") {
				c9 = curPlayer;
			}
			else {
				cout << "Casa ja escolhida! Jogue novamente\n\n";
				curPlayer = (curPlayer == "X") ? "O" : "X";
			}
			break;
		default:
			cout << "Escolha invalida\n";
			break;
		}

		//verificaÃ§Ãµes de ganhar ou empatar
		if (c1 == curPlayer && c2 == curPlayer && c3 == curPlayer) {
			cout << curPlayer << " GANHOU!!!!!!\n";
			cout << endl;
			cout << endl;
			cout << "     **  " << endl;
			cout << "    *__*  " << endl;
			cout << "  *|    |*  " << endl;
			cout << " (_|    |_) " << endl;
			cout << "    *  *   " << endl;
			cout << "     )(   " << endl;
			cout << "   _|__|_ " << endl;
			cout << " _|______|_ " << endl;
			cout << "|__________|" << endl;
			cout << endl;
			cout << endl;
			break;
		}
		else if (c4 == curPlayer && c5 == curPlayer && c6 == curPlayer) {
			cout << curPlayer << " GANHOU!!!!!!\n";
			cout << endl;
			cout << endl;
			cout << "     **  " << endl;
			cout << "    *__*  " << endl;
			cout << "  *|    |*  " << endl;
			cout << " (_|    |_) " << endl;
			cout << "    *  *   " << endl;
			cout << "     )(   " << endl;
			cout << "   _|__|_ " << endl;
			cout << " _|______|_ " << endl;
			cout << "|__________|" << endl;
			cout << endl;
			cout << endl;
			break;
		}
		else if (c7 == curPlayer && c8 == curPlayer && c9 == curPlayer) {
			cout << curPlayer << " GANHOU!!!!!!\n";
			cout << endl;
			cout << endl;
			cout << "     **  " << endl;
			cout << "    *__*  " << endl;
			cout << "  *|    |*  " << endl;
			cout << " (_|    |_) " << endl;
			cout << "    *  *   " << endl;
			cout << "     )(   " << endl;
			cout << "   _|__|_ " << endl;
			cout << " _|______|_ " << endl;
			cout << "|__________|" << endl;
			cout << endl;
			cout << endl;
			break;
		}
		else if (c1 == curPlayer && c4 == curPlayer && c7 == curPlayer) {
			cout << curPlayer << " GANHOU!!!!!!\n";
			cout << endl;
			cout << endl;
			cout << "     **  " << endl;
			cout << "    *__*  " << endl;
			cout << "  *|    |*  " << endl;
			cout << " (_|    |_) " << endl;
			cout << "    *  *   " << endl;
			cout << "     )(   " << endl;
			cout << "   _|__|_ " << endl;
			cout << " _|______|_ " << endl;
			cout << "|__________|" << endl;
			cout << endl;
			cout << endl;
			break;
		}
		else if (c2 == curPlayer && c5 == curPlayer && c8 == curPlayer) {
			cout << curPlayer << " GANHOU!!!!!!\n";
			cout << endl;
			cout << endl;
			cout << "     **  " << endl;
			cout << "    *__*  " << endl;
			cout << "  *|    |*  " << endl;
			cout << " (_|    |_) " << endl;
			cout << "    *  *   " << endl;
			cout << "     )(   " << endl;
			cout << "   _|__|_ " << endl;
			cout << " _|______|_ " << endl;
			cout << "|__________|" << endl;
			cout << endl;
			cout << endl;
			break;
		}
		else if (c3 == curPlayer && c6 == curPlayer && c9 == curPlayer) {
			cout << curPlayer << " GANHOU!!!!!!\n";
			cout << endl;
			cout << endl;
			cout << "     **  " << endl;
			cout << "    *__*  " << endl;
			cout << "  *|    |*  " << endl;
			cout << " (_|    |_) " << endl;
			cout << "    *  *   " << endl;
			cout << "     )(   " << endl;
			cout << "   _|__|_ " << endl;
			cout << " _|______|_ " << endl;
			cout << "|__________|" << endl;
			cout << endl;
			cout << endl;
			break;
		}
		else if (c1 == curPlayer && c5 == curPlayer && c9 == curPlayer) {
			cout << curPlayer << " GANHOU!!!!!!\n";
			cout << endl;
			cout << endl;
			cout << "     **  " << endl;
			cout << "    *__*  " << endl;
			cout << "  *|    |*  " << endl;
			cout << " (_|    |_) " << endl;
			cout << "    *  *   " << endl;
			cout << "     )(   " << endl;
			cout << "   _|__|_ " << endl;
			cout << " _|______|_ " << endl;
			cout << "|__________|" << endl;
			cout << endl;
			cout << endl;
			break;
		}
		else if (c3 == curPlayer && c5 == curPlayer && c7 == curPlayer) {
			cout << curPlayer << " GANHOU!!!!!!\n";
			cout << endl;
			cout << endl;
			cout << "     **  " << endl;
			cout << "    *__*  " << endl;
			cout << "  *|    |*  " << endl;
			cout << " (_|    |_) " << endl;
			cout << "    *  *   " << endl;
			cout << "     )(   " << endl;
			cout << "   _|__|_ " << endl;
			cout << " _|______|_ " << endl;
			cout << "|__________|" << endl;
			cout << endl;
			cout << endl;
			break;
		}

		else {
			curPlayer = (curPlayer == player1) ? player2 : player1;
		}

		if (c1 != "1" && c2 != "2" && c3 != "3" && c4 != "4" && c5 != "5" && c6 != "6" && c7 != "7" && c8 != "8" && c9 != "9") {
			printf("Empate, saia e recomeçe.");

			return 0;
		}


	}

}