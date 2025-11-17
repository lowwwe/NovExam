// Name: Peter Lowe
// Login: 
// Date: 
// Approx time taken: 
//----------------------------------------------------------------------------------
// 
// ---------------------------------------------------------------------------------
// Known Bugs: 


#include <iostream> 
#include <iomanip>

float calTotalCost(int t_child, int t_adult, int t_senior);

int main()
{
	std::cout << "November Lab exam 2025" << std::endl;
	calTotalCost(3,3,3);
	system("Pause");
	return 0;
}


/// <summary>
/// calcultate total cost and discount 3% per 6 adults max 30%
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
	if (t_adult > 61)
	{
		discountRate = DISCOUNT_RATE_INC * 10.0f;
	}
	else
	{
		discountRate = DISCOUNT_RATE_INC * (t_adult / 6);
	}
	discount = t_adult * ADULT_COST * discountRate;
	std::cout << "You are entitled to a discount of $" << std::fixed << std::setprecision(2) << discount << std::endl;
	total = t_adult * ADULT_COST *( 1 - discountRate) + t_child * CHILD_COST + t_senior * SENIOR_COST;

	return total;
}
