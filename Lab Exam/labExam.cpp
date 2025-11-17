// Name: Peter Lowe
// Login: 
// Date: 17/11/25
// Approx time taken: 
//----------------------------------------------------------------------------------
// program to calculate ticket prices including discount
// ---------------------------------------------------------------------------------
// Known Bugs: 
// time estimzate 120 min 15:43



#include <iostream> 
#include <iomanip>

float calTotalCost(int t_child, int t_adult, int t_senior);


int main()
{
	int  adultNo = 0;// no of adult tickets
	int childNo = 0;// No. of child tickets
	int seniorNo = 0; // no. of Senior tickets
	float totalCost = 0.0f; // total cost after discount
	std::cout << "November Lab exam 2025" << std::endl;
	std::cout << std::fixed;

	std::cout << "How many child concert tickets do you want ? ";
	std::cin >> childNo;
	std::cout << "How many adult concert tickets do you want ? ";
	std::cin >> adultNo;
	std::cout << "How many senior tickets do you want ? ";
	std::cin >> seniorNo;
	if (childNo < 0 || adultNo < 0 || seniorNo < 0)
	{
		std::cout << "Error - you cannot have negative numbers." << std::endl;
	}
	else if ((childNo + adultNo + seniorNo) == 0)
	{
		std::cout << "Error - You must buy at least one ticket. " << std::endl;
	}
	else if ((childNo + adultNo + seniorNo) > 110)
	{
		std::cout << "Error - the maximum number of tickets you can buy is 110." << std::endl;
	}
	else
	{
		totalCost = calTotalCost(childNo, adultNo, seniorNo);
		std::cout << "The total cost of your tickets is $" << std::setprecision(2) << totalCost << std::endl;
	}

	system("Pause");
	return 0;
}

float calTotalCost(int t_child, int t_adult, int t_senior)
{
	return 10.333333333f;
}
