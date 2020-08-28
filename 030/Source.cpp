#include <stdio.h>
int main() {
	char s;
	scanf_s("%c", &s);
	if (s == 'A') {
		printf("[80,100]");
	}
	else if (s == 'B') {
		printf("[70,80)");
	}
	else if (s == 'C') {
		printf("[60,70)");
	}
	else if (s == 'D') {
		printf("[50,60)");
	}
	else if (s == 'F') {
		printf("[0,50)");
	}

}