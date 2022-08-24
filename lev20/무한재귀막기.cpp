#include <iostream>
using namespace std;

int vect[6];

void run(int level)
{
	cout << vect[level] << " ";
	if (level == 5) return;
	run(level + 1);
	cout << vect[level] << " ";
}

int main()
{
	for (int i = 0; i < 6; i++) {
		cin >> vect[i];
	}

	run(0);
	return 0;
}