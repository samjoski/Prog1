//main.cpp
const int NUMPLAYERS = 10;

void main() {
	int Players[NUMPLAYERS];
	Initialize(Players);
	
	while (true) {
		TakeTurn(Players);
		
		if (CheckWinner(Players) != -1)
			break;
	}
	
	DeclareWinner(Players);
	return
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