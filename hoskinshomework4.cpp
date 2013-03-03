//*********************************************************************
// HoskinsHomeworkWeek4
//*********************************************************************
// Homework Week 4: HoskinsSource.cpp
// Author: Kathryn Hoskins
// Class:  CSCI 222
// Project Number: Week 4 homework
// Description: Jellybean friend and overload lab
// Date: Feb 25, 2013

#include <iostream>
#include <string>
using namespace std;

class Jellybean
{
	
	friend Jellybean operator + (Jellybean, Jellybean);
	friend Jellybean operator - (Jellybean);
	friend Jellybean operator - (Jellybean, Jellybean);
	friend Jellybean operator / (Jellybean, Jellybean);
	friend Jellybean operator * (Jellybean, Jellybean);
	friend bool operator < (Jellybean, Jellybean);
	friend bool operator > (Jellybean, Jellybean);	
	friend bool operator == (Jellybean, Jellybean);
	friend ostream& operator << (ostream&, const Jellybean&);
	friend istream& operator >> (istream&, Jellybean&);
	
public:
	Jellybean();
	Jellybean(int);
	Jellybean(string, string, int);
	void output();
	
private:
	string flavor;
	string color;
	int quantity;
	
};

//-------------------- Default Constructor-----------------------------------------------
//  Jellybean Default Constructor
//
//  Purpose:  Initialize the member variables upon constructor creation.
//---------------------------------------------------------------------------------------
Jellybean::Jellybean()
{
	flavor = "null";
	quantity = 0;
}

//---------------------------  Constructor-----------------------------------------------
//  Jellybean Default Constructor
//
//  Purpose:  Initialize with int paramater
//
//  Parameters:
//	int (IN)    -- initial value of quantity
//
//---------------------------------------------------------------------------------------
Jellybean::Jellybean(int newquantity)
{
	flavor = "null";
	color = "null";
	quantity = newquantity;
}

//---------------------------  Constructor-----------------------------------------------
//  Jellybean Default Constructor
//
//  Purpose:  Initialize with 2 string and 1 int paramater
//
//  Parameters:
//  string (IN) -- initialize newFlavor
//	string (IN) -- initialize newcolor
//	int (IN)    -- initial value of quantity
//
//---------------------------------------------------------------------------------------
Jellybean::Jellybean(string newFlavor, string newcolor, int newquantity)
{
	flavor = newFlavor;
	color = newcolor;
	quantity = newquantity;
}

//-------------------- output --------------------------------------
//  Function output
//
//  Purpose:  To display the output (flavor, color, and quantity)
//
//  Parameters:
//	none (IN)
//
//  Returns:   -- none
//---------------------------------------------------------------------------------------
void Jellybean::output()
{
	cout << flavor << " " << color << " " << quantity << endl;
}

//-------------------- operator + overload-----------------------------------------------
//  Operator overload: to add to Ice Cream classes
//
//  Purpose:  to add to Ice Cream classes
//
//  Parameters:
//	Jellybean (IN)    -- first flavor of ice cream (flavor, color, and quantity)
//	Jellybean (IN)    -- 2nd flavor of ice cream (flavor, color, and quantity)
//
//  Returns:  sum of both classes
//---------------------------------------------------------------------------------------
Jellybean operator + (Jellybean jellybean1, Jellybean jellybean2)
{
	return Jellybean(	jellybean1.flavor + " plus " + jellybean2.flavor,
					 jellybean1.color + " plus " + jellybean2.color,
					  jellybean1.quantity + jellybean2.quantity);
}


//-------------------- operator - overload-----------------------------------------------
//  Operator overload: to subtract the Ice Cream classes
//
//  Purpose:  to subtract to Ice Cream classes
//
//  Parameters:
//	Jellybean (IN)    -- first flavor of ice cream (flavor, color, and quantity)
//	Jellybean (IN)    -- 2nd flavor of ice cream (flavor, color, and quantity)
//
//  Returns:  difference to two ice cream objects
//---------------------------------------------------------------------------------------

Jellybean operator - (Jellybean jellybeanNum1, Jellybean jellybeanNum2)
{
	return Jellybean(	jellybeanNum1.flavor + " minus " + jellybeanNum2.flavor, 
					 jellybeanNum1.color + " minus " + jellybeanNum2.color,
					  jellybeanNum1.quantity - jellybeanNum2.quantity);
}

//-------------------- operator - overload-----------------------------------------------
//  Operator overload: to negate the Ice Cream classes
//
//  Purpose:  to subtract to Ice Cream classes
//
//  Parameters:
//	Jellybean (IN)    -- flavor of ice cream (flavor, color, and quantity)
//
//  Returns: concatenates the word 'negative' in front of the flavor and color and makes quantity
//     	negative
//---------------------------------------------------------------------------------------

Jellybean operator - (Jellybean theNegativeJellybean)
{
	return Jellybean("negative " + theNegativeJellybean.flavor, "negative " + theNegativeJellybean.color, 
					 -theNegativeJellybean.quantity);
}


//-------------------- operator / overload-----------------------------------------------
//  Operator overload: to divide the Ice Cream classes
//
//  Purpose:  to divide to Ice Cream classes
//
//  Parameters:
//	Jellybean (IN)    -- 1st flavor of ice cream (flavor, color, and quantity)
//	Jellybean (IN)    -- 2nd flavor of ice cream (flavor, color, and quantity)
//
//  Returns: the product of the 1st flavor divided by the second flavor
//---------------------------------------------------------------------------------------
Jellybean operator / (Jellybean theFirstJellybean, Jellybean theSecondJellybean)
{
	return Jellybean(theFirstJellybean.flavor + " divided by " + theSecondJellybean.flavor, 
					 theFirstJellybean.color + " divided by " + theSecondJellybean.color,
					 theFirstJellybean.quantity / theSecondJellybean.quantity);
}

//-------------------- operator * overload-----------------------------------------------
//  Operator overload: to multiply the Ice Cream classes
//
//  Purpose:  to multiply to Ice Cream classes
//
//  Parameters:
//	Jellybean (IN)    -- 1st flavor of ice cream (flavor, color, and quantity)
//	Jellybean (IN)    -- 2nd flavor of ice cream (flavor, color, and quantity)
//
//  Returns: the product of the 1st flavor multiplied by the second flavor
//---------------------------------------------------------------------------------------
Jellybean operator * (Jellybean num1Jellybean, Jellybean num2Jellybean)
{
	return Jellybean(num1Jellybean.flavor + " multiplied by " + num2Jellybean.flavor, 
					 num1Jellybean.color + " multiplied by " + num2Jellybean.color,
					 num1Jellybean.quantity * num2Jellybean.quantity);
}

//-------------------- operator < overload-----------------------------------------------
//  Operator overload: to compare (<) the Ice Cream classes
//
//  Purpose:  to compare (<) to Ice Cream classes
//
//  Parameters:
//	Jellybean (IN)    -- 1st flavor of ice cream (quantity)
//	Jellybean (IN)    -- 2nd flavor of ice cream (quantity)
//
//  Returns: true if 1st jellybean quantity is less than the 2nd jellybean quantity
//---------------------------------------------------------------------------------------
bool operator < (Jellybean jellybeanCompare1, Jellybean jellybeanCompare2)
{
	return jellybeanCompare1.quantity < jellybeanCompare2.quantity;
}

//-------------------- operator > overload-----------------------------------------------
//  Operator overload: to compare (<) the Ice Cream classes
//
//  Purpose:  to compare (>) to Ice Cream classes
//
//  Parameters:
//	Jellybean (IN)    -- 1st flavor of ice cream (quantity)
//	Jellybean (IN)    -- 2nd flavor of ice cream (quantity)
//
//  Returns: true if 1st jellybean quantity is greater than the 2nd jellybean quantity
//---------------------------------------------------------------------------------------
bool operator > (Jellybean jellybeanCompare1, Jellybean jellybeanCompare2)
{
	return jellybeanCompare1.quantity > jellybeanCompare2.quantity;
}


//-------------------- operator == overload-----------------------------------------------
//  Operator overload: to compare (==) the Ice Cream classes
//
//  Purpose:  to compare (==) the Ice Cream classes
//
//  Parameters:
//	Jellybean (IN)    -- 1st flavor of ice cream (flavor, color, and quantity)
//	Jellybean (IN)    -- 2nd flavor of ice cream (flavor, color, and quantity)
//
//  Returns: returns true if all variables match exactly 
//---------------------------------------------------------------------------------------
bool operator == (Jellybean jellybeanIsEqual1, Jellybean jellybeanIsEqual2)
{
	return ((jellybeanIsEqual1.flavor == jellybeanIsEqual2.flavor)
			&& (jellybeanIsEqual1.color == jellybeanIsEqual2.color)
			&& (jellybeanIsEqual1.quantity == jellybeanIsEqual2.quantity));
}


//-------------------- operator << overload-----------------------------------------------
//  Operator overload: output the text of the Ice cream to the console io
//
//  Purpose:  output the text of the Ice cream to the console io
//
//  Parameters:
//	Jellybean (IN)    -- ostream
//	Jellybean (IN)    -- ice cream (flavor, color, and quantity)
//
//  Returns:  ostream
//---------------------------------------------------------------------------------------
ostream& operator << (ostream& outputStream, const Jellybean& jellybeanToPrint)
{
	cout << "--------------" << endl
	<< "Flavor: " << jellybeanToPrint.flavor << endl
	<< "Color: " << jellybeanToPrint.color << endl 
	<< "Quantity: " << jellybeanToPrint.quantity << endl
	<< "--------------" << endl;
	return outputStream;
}

//-------------------- operator >> overload-----------------------------------------------
//  Operator overload: 
//
//  Purpose:  Obtain from the user the flavor and number of quantity
//
//  Parameters:
//	Jellybean (IN)    -- istream
//	Jellybean (IN)    -- ice cream (flavor, color, and quantity)
//
//  Returns:  istream
//---------------------------------------------------------------------------------------

istream& operator >> (istream& inputStream, Jellybean& jellybeanFromUser)
{
	cout << "Please enter the flavor you want: ";
	cin >> jellybeanFromUser.flavor;
	
	cout << "Please enter the color you want: ";
	cin >> jellybeanFromUser.color;
	
	cout << "Please enter the amount of quantity you want: ";
	cin >> jellybeanFromUser.quantity;
	
	return inputStream;
}

//------------------------------------- main -------------------------------------------
//  Function: main
//
//  Purpose:  to test the friend and overload functions and classes
//
//  Parameters:
//	none (IN)
//
//  Returns:   --integer return code
//---------------------------------------------------------------------------------------
int main ()
{
	string beginning("beginning"), middle("middle"), end("end");
	
	cout << "The expected output is beginning middle end" << endl;
	cout << beginning << " " << middle << " " << end << endl;
	
	cout << "The expected output is beginningmiddleend" << endl;
	cout << beginning + middle + end << endl;
	
	int first(1), second(2), third(3);
	
	cout << "The expected output is 1 2 3" << endl;
	cout << first << " " << second << " " << third << endl;
	
	cout << "The expected output is 123" << endl;
	cout << first + second + third << endl;
	
	Jellybean bean1, bean2("blueberry", "blue", 20), bean3("strawberry", "red", 12), userBean;
	Jellybean bean4(14), bean5("banana", "yellow", 5), bean6("grass", "green", 7);
	
	//testing the + operator
	cout << "adding two jellybeans:" << endl;
	cout << "the expected output is blueberry plus strawberry, blue plus red, 32" << endl;
	bean1 = bean2 +bean3;
	cout << bean1;
	
	//testing the - (1 parm) operator
	cout << "making a jellybean negative:" << endl;
	cout << "the expected output is negative blueberry plus strawberry, negative blue plus red, -32" << endl;
	cout << -bean1;
	
	//testing the - (2 parm) operator
	cout << "subtracting two jellybeans:" << endl;
	cout << "the expected output is banana minus grass, yellow minus green, -2" << endl;
	bean1 = bean5 - bean6;
	cout << bean1;
	
	//testing the / operator
	cout << "dividing two jellybeans:" << endl;
	cout << "the expected output is blueberry divided by banana, blue divided by yellow, 4" << endl;
	bean1 = bean2 / bean5;
	cout << bean1;
	
	//testing the * operator
	cout << "multiplying two jellybeans:" << endl;
	cout << "the expected output is grass multiplied by null, green multiplied by null, 98" << endl;
	bean1 = bean6 * bean4;
	cout << bean1;
	
	//testing the < operator
	cout << "****************" << endl;
	cout << "comparing with < two jellybeans:" << endl;
	cout << "the expected output is true, that bean2 is less than bean1" << endl;
	cout << "bean2: " << endl << bean2;
	cout << "bean1: " << endl << bean1;
	if (bean2 < bean1) 
	{
		cout << "true" << endl;
	}
	else 
	{
		cout << "false" << endl;
	}
	cout << "--------------" << endl;
	
	//testing the > operator
	cout << "****************" << endl;
	cout << "comparing with > two jellybeans:" << endl;
	cout << "the expected output is false, that bean3 is not greater than bean2" << endl;
	cout << "bean3: " << endl << bean3;
	cout << "bean2: " << endl << bean2;
	if (bean3 > bean2) 
	{
		cout << "true" << endl;
	}
	else 
	{
		cout << "false" << endl;
	}
	cout << "--------------" << endl;
	cout << "****************" << endl;


	
	//testing the == operator

	
	//testing the << operator

	
	//testing the >> operator
	
	
	
	
	
	
	
	/*Jellybean flav1, flav2("cherry",5), flavSum(0), userFlav;
//	flavSum = flav1 + flav2;
	
	cout << "The expected output is null null 54" << endl;
	cout << flav1 + 54 << flav2 + flav1 << flavSum << endl;
	
	cout << "Adding 25, so the expected output is: null null 25" << endl;
	flavSum = flav1 + 25;
	cout << flavSum << endl;
	
	//INSERT YOUR TEST CODE HERE FOR TO DEMONSTRATE SUBTRACTION, NEGATION, AND CIN
	
	//testing for subtraction
	cout << "Subtracting flav1 from flav2, the expected output is: cherry without null 5" << endl;
	flavSum = flav2 - flav1;
	cout << flavSum << endl;
	
	//testing for negation
	cout <<"Making flavSum negative, the expected output is: negative cherry without null -5" << endl;
	flavSum = -flavSum;
	cout << flavSum << endl;
	
	//testing for cin
	cout <<"testing for cin" << endl;
	//cin >> userFlav;
	cout << userFlav;
	 
	 */
	system("pause");
	
	return 0;
}
//lab is to do operator -, and insertion stream
