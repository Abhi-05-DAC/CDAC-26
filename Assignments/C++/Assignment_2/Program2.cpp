//#include <iostream>
//#include <string>
//
//using namespace std; // Re-Order Cost Function Overloading

//
//double reOrderCost(int qty, double unitPrice) // Integer Quantity
//{
//	return qty * unitPrice;
//}
//
//double reOrderCost(double qty, double unitPrice) // fractinal
//{
//	return qty * unitPrice;
//}
//
//double reOrderCost(int qty, double unitPrice, double taxRate)
//{
//	double cost = qty * unitPrice;
//	double tax = cost * taxRate / 100;
//
//	return cost * tax;
//}
//
//double applyDiscount(double price, double discountPercent = 10.0)
//{
//	double discount = price * discountPercent / 100;
//
//	return price - discount;
//}
//
//int main()
//{
//	int qty = 50;
//	double unitPrice = 250.00;
//
//	cout << "ReOrder Cost : " << reOrderCost (qty, unitPrice) << endl;
//
//
//
//	double weight = 20.5;
//	double priceperKG = 40.00;
//
//	cout << "ReOrder Cost : Rs. " << reOrderCost (weight, priceperKG) << endl;
//
//	qty = 10;
//	double taxunitPrice = 500.00;
//	double taxRate = 18;
//
//	cout << "ReOrder Cost With Tax : Rs. " << reOrderCost (qty, taxunitPrice , taxRate) << endl;
//
//	double price1 = 1000.00;
//
//	cout << "The Price After Default Discout : Rs. " << applyDiscount(price1) << endl;
//
//	double price2 = 1500.00;
//	double discount = 20;
//
//
//	cout << "The Price After 20 % Discout : Rs. " << applyDiscount(price2,discount) << endl;
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
