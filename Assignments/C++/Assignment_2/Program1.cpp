//#include <iostream>
//#include <string>
//using namespace std;
//
//class Product			// Inventory Management System
//{
//private :
//	int productId;
//	string name;
//	double price;
//	int quantity;
//
//public :
//void acceptDetails()
//{
//	cout << "Enter the Product Id:" << endl;
//	cin >> productId;
//
//	cout << "Enter the Product name :" << endl;
//	cin >> name;
//
//	cout << "Enter the Product Price :" << endl;
//	cin >> price;
//
//	cout << "Enter the Product Quanity :" << endl;
//	cin >> quantity;
//}
//
//void displayDetails() const
//{
//	cout << productId << "				 " << name << " 				" << price << " 				" << quantity << " 				" << endl;
//}
//
//double totalValue() const
//{
//	return price * quantity;
//}
//
//bool isLowStock(int threshold) const
//{
//	return quantity < threshold;
//}
//
//string getName() const
//{
//	return name;
//}
//
//};
//
//int main()
//{
//	const int Size = 5;
//
//	Product products [Size];
//
//	cout << "===== ENTER PRODUCT DETAILS =====" << endl;
//
//	for(int i = 0; i < Size; i++)
//	{
//		cout << "\n Product " << i + 1 << endl;
//		products[i].acceptDetails();
//	}
//
//	 cout << "\n\n===== INVENTORY REPORT =====" << endl;
//
//	 cout << "ID" << "  " << "Name" << "  " << "Price" << "  " << "Qty" << "  " << "Total Value" << "  "<<endl;
//
//	 cout << "----------------------------------------------------------" << endl;
//
//	 for(int i =0; i < Size; i++)
//	 {
//		 products[i].displayDetails();
//	 }
//
//	 int highestIndex = 0;
//
//	 cout << "Hightest Value Product : " << products[highestIndex].getName() << "(RS. " << products[highestIndex].totalValue() << ")" << endl;
//
//	 int threshold;
//
//	 cout << "Enter the Stock Threshold :" << endl;
//	 cin >> threshold;
//
//	 cout << "Low Threshold : " << threshold << endl;
//
//	 bool found = false;
//
//	 for(int i = 0; i < Size; i++)
//	 {
//		 if(products[i].isLowStock(threshold))
//		 {
//			 if(found)
//			 {
//				 cout << ", "<< endl;
//			 }
//
//			 cout << products[i].getName();
//			 found = true;
//		 }
//	 }
//
//	 if(! found)
//	 {
//		 cout << "None !" << endl;
//	 }
//
//	 cout << endl;
//
//	 return 0;
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
