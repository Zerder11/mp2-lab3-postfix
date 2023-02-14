// реализация пользовательского приложения
#include "arithmetic.h"
#include <string.h>



int main()
{
	string s = "Start";

	cout << "Solve infix equations by postfix solve method." << endl << endl;


	string infix;
	string expression;
	double res;

		for (size_t i = 0; i < 116; i++)
			cout << "_";
		cout << endl;
		cout << "Enter an arithmetic expression: ";
		cin >> expression;
		cout << expression << endl;

			TPostfix postfix(expression);
			cout << "Infix form: " << postfix.GetInfix() << endl;
			cout << "Postfix form: " << postfix.GetPostfix() << endl;
			res = postfix.Calculate(cin, cout);
			cout << "Result: " << res << endl;

	
}