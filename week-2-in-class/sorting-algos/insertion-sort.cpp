#include <iostream>
#include <vector>

using namespace std;

vector<int> getNumbersInput()
{
	vector<int> numbers{};
	int currentNumber;

	do
	{
		cin >> currentNumber;
		numbers.push_back(currentNumber);
	} while (cin.peek() == ' ');

	return numbers;
}

void insertionSort(vector<int> &numbers)
{
	for (uint currentIndex = 1; currentIndex < numbers.size(); currentIndex++)
	{
		int currentNumber = numbers[currentIndex];
		int j = currentIndex - 1;
		while (j >= 0 && currentNumber < numbers[j])
		{
			numbers[j + 1] = numbers[j];
			j--;
		}

		numbers[j + 1] = currentNumber;
	}
}

int main()
{
	vector<int> numbers = getNumbersInput();
	insertionSort(numbers);
	for (uint i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	return 0;
}