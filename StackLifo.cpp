#include <iostream>
#include <stack>

using namespace std;

void print_stack(stack<int> s)
{
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}

int pop_and_return(stack<int>& s)
{
	int value = s.top();
	s.pop();
	return value;
}

int push_rand(stack<int>& s)
{
	int value = rand() % 100;
	s.push(value);
	return value;
}

int main()
{
	srand(time(NULL));

	stack<int> s;

	for (int i = 0; i < 10; i++)
	{
		push_rand(s);
	}

	cout << "Stack has value: "; print_stack(s);
	cout << "Popped value: " << pop_and_return(s) << endl;
	cout << "Popped value: " << pop_and_return(s) << endl;
	cout << "Stack has value: "; print_stack(s);

	cout << endl << "Pushed value: " << push_rand(s) << endl;
	cout << "Pushed value: " << push_rand(s) << endl;

	cout << "Stack has value: "; print_stack(s);
	cout << "Popped value: " << pop_and_return(s) << endl;
	cout << "Popped value: " << pop_and_return(s) << endl;
	cout << "Stack has value: "; print_stack(s);

	return 0;
}