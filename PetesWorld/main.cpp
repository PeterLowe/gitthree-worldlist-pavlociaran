// program to find countries in Pete's World
// date 08 November 2024
// author Pete Lowe
// Author Ciaran Kinsella
// Author Pavlo Konovchenko
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to C or Y to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}	
	if (letter == 'b' || letter == 'B') // written by Pavlo
	{
		if (region == 1)
		{
			std::cout << "Bahamas, Barbados, Belize, Bermuda, Bolivia Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bahrain, Arabian Peninsula, Bangladesh, Bhutan, Brunei Darussalam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Bs in rest of the world" << std::endl;
		}
	}
	if (letter == 'c' || letter == 'C') // written by Pavlo
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile, Colombia, Costa Rica" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Croatia, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Kinshasa, Brazzaville, Ivory Coast" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas Island, Cyprus" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cayman Islands, Cocos (Keeling) Islands, Cook Islands, Cuba" << std::endl;
		}
	}
	if (letter == 'y' || letter == 'Y') // Written By Ciaran Kinsella
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas" << std::endl; 
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen Arabian Peninsula" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ys in the rest of the world" << std::endl;
		}

	}
	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	
	return 1;
}