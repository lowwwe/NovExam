// Name: Peter Lowe
// Login: 
// Date: 17/11/25
// Approx time taken: 
//----------------------------------------------------------------------------------
// program to calculate ticket prices including discount
// ---------------------------------------------------------------------------------
// Known Bugs: 
// time estimzate 120 min 15:43
// actual   61 minutes 16:45



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
	if (childNo < 0 || adultNo < 0 || seniorNo < 0) // check for negative Nos
	{
		std::cout << "Error - you cannot have negative numbers." << std::endl;
	}
	else if ((childNo + adultNo + seniorNo) == 0) // check no tickets
	{
		std::cout << "Error - You must buy at least one ticket. " << std::endl;
	}
	else if ((childNo + adultNo + seniorNo) > 110)
	{
		std::cout << "Error - the maximum number of tickets you can buy is 110." << std::endl;
	}
	else
	{
		totalCost = calTotalCost(childNo, adultNo, seniorNo); //get total cost 
		std::cout << "The total cost of your tickets is $" << std::setprecision(2) << totalCost << std::endl;
	}
	std::system("Pause");
	return 0;
}



/// <summary>
/// calculate total cost and discount 3% per 6 adults max 30%
/// </summary>
/// <param name="t_child">No of child tickets</param>
/// <param name="t_adult">no of adult tickets</param>
/// <param name="t_senior">no of senior tickets</param>
/// <returns>total cost after discount</returns>
float calTotalCost(int t_child, int t_adult, int t_senior)
{
	const float ADULT_COST = 27.0f; // price of adult ticket
	const float CHILD_COST = ADULT_COST * 0.5f; // CHILD half price
	const float SENIOR_COST = (ADULT_COST / 3.0f) * 2.0f; // Senior cost two thirds
	const float DISCOUNT_RATE_INC = 0.03f; // discount rate increment



	float total = 0.0f; // total cost
	float discount = 0.0f;// discount amount
	float discountRate = 0.0f;// discount rate
	if (t_adult > 61) // max discount of 30%
	{
		discountRate = DISCOUNT_RATE_INC * 10.0f;
	}
	else
	{
		discountRate = DISCOUNT_RATE_INC * (t_adult / 6); // integer division
	}
	discount = t_adult * ADULT_COST * discountRate;
	std::cout << "You are entitled to a discount of $" << std::fixed << std::setprecision(2) << discount << std::endl;
	total = t_adult * ADULT_COST *( 1 - discountRate) + t_child * CHILD_COST + t_senior * SENIOR_COST;

	return total;

}
