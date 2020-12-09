#include <iostream>
#include <math.h>
#include <locale.h>
#include <libintl.h>
#include "Calculadora.cpp"

#define _(STRING) gettext(STRING)

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	bindtextdomain("main", "po");
	textdomain("main");
	
	int choice;
	Calculator cal; // simple calculator object
	printf(_("Hola soy la calculadora"));
	printf(_("Enter 1 add 2 Numbers"));
	printf(_("\nEnter 2 Subtract 2 Numbers"));
	printf(_("\nEnter 3 Multiply 2 Numbers"));
	printf(_("\nEnter 4 Divide 2 Numbers"));
	printf(_("\nEnter 0 To Exit\n"));

	do {
		printf(_("Result:"));
		cin >> choice;

		switch (choice) {
		case 1:
			cal.get();
			printf(_("Result:"));
			cout << cal.add();
			break;

		}

	} while (choice >= 1 && choice <= 4);

printf(_("\nAdios\n"));
	return 0;

}
