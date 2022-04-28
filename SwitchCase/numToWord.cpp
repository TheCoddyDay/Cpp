#include <bits/stdc++.h>

int main()
{
	int num;
	int ones_digit = num % 10;
	int tens_digit = num / 10;

	std::cout << "Enter a two-digit number:\n";
	std::cin >> num;

	if ((num >= 20) && (num < 100))
	{
		switch (tens_digit)
		{
		case 2:
			std::cout << " twenty- ";
			break;
		case 3:
			std::cout << " thirty- ";
			break;
		case 4:
			std::cout << " forty- ";
			break;
		case 5:
			std::cout << " fifty- ";
			break;
		case 6:
			std::cout << " sixty- ";
			break;
		case 7:
			std::cout << " seventy- ";
			break;
		case 8:
			std::cout << " eighty- ";
			break;
		case 9:
			std::cout << " ninety- ";
			break;
		default:
			std::cout << " Error ";
		}

		switch (ones_digit)
		{
		case 0:
			std::cout << " ";
			break;
		case 1:
			std::cout << "one";
			break;
		case 2:
			std::cout << "two";
			break;
		case 3:
			std::cout << "three";
			break;
		case 4:
			std::cout << "four";
			break;
		case 5:
			std::cout << "five";
			break;
		case 6:
			std::cout << "six";
			break;
		case 7:
			std::cout << "seven";
			break;
		case 8:
			std::cout << "eight";
			break;
		case 9:
			std::cout << "nine";
			break;
		default:
			std::cout << " Error ";
		}
	}

	if ((num >= 10) && (num <= 19))
	{
		switch (num)
		{
		case 10:
			std::cout << "Ten";
			break;
		case 11:
			std::cout << "Eleven";
			break;
		case 12:
			std::cout << "Twelve";
			break;
		case 13:
			std::cout << "Thirteen";
			break;
		case 14:
			std::cout << "Fourteen";
			break;
		case 15:
			std::cout << "Fifteen";
			break;
		case 16:
			std::cout << "Sixteen";
			break;
		case 17:
			std::cout << "Seventeen";
			break;
		case 18:
			std::cout << "Eighteen";
			break;
		case 19:
			std::cout << "Nineteen";
			break;
		default:
			std::cout << " Error ";
		}
	}
	return 0;
}