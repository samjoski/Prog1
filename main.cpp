//main.cpp
const int NUMPLAYERS = 100;	//patched at 3:41 to 100 players
const int GOAL = 25;

void main() {
	int Players[NUMPLAYERS];
	Initialize(Players);
	
	while (true) {
		TakeTurn(Players);
		
		if (CheckWinner(Players))
			break;
	}
	
	DeclareWinner(Players);
	return;
}

void Initialize (int Players[]) {
	for (int i=0; i<NUMPLAYERS; i++) {
		Players[i] = 0;
	}
	return;
}

void TakeTurn (int Players[]) {
	for (int i=0; i<NUMPLAYERS; i++) {
		Players[i] += (rand() % 6) + 1;	//6 sided "dice"
	}
	return;
}

bool CheckWinner (int Players[]) {
	for (int i=0; i<NUMPLAYERS; i++) {
		if (Player[i] >= GOAL)
			return true;
	}
	return false;
}

void DeclareWinner (int Player[]) {
	cout << "Winners:" < endl;
	for (int i=0; i<NUMPLAYERS; i++) {
		if (Player[i] >= GOAL)
			cout << "Player " << i << endl;
	}
	return;
}