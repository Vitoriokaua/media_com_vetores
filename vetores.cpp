#include <iostream>
#include <string>

using namespace std;
int main() {
	float Notas[5];
	float media, soma{ 0.0 };
	string Nomealuno;

	cout << "digite o nome do aluno: ";
	cin >> Nomealuno;

	for (int i = 0; i <= 4; i++)
	{
		cout << "\ndigite a nota: ";
		cin >> Notas[i];
		soma = soma + Notas[i];
}
	media = soma / 5;

	cout << "a media das notas e: " << media << endl;







}

