//main.cpp
const int NUMPLAYERS = 10;

void main() {
	int Players[NUMPLAYERS];
	Initialize(Players);
	
	while (true) {
		for (int i=0; i<NUMPLAYERS; i++) {
			TakeTurn(Players);
		}
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