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

	std::cout << "Pick a letter from A to I or R to Z" << std::endl; // change this line each iteration
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

	if (letter == 'd' || letter == 'D') // written by Pavlo
	{
		if (region == 1)
		{
			std::cout << "There are no Ds in Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Denmark" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Djibouti" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ds in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Dominica, Dominican Republic" << std::endl;
		}
	}

	if (letter == 'e' || letter == 'E') // written by Pavlo
	{
		if (region == 1)
		{
			std::cout << "Ecuador, El Salvador" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Estonia" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Egypt, Equatorial Guinea, Eritrea, Ethiopia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "East Timor (Timor-Leste)" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Es in rest of the world" << std::endl;
		}
	}

	if (letter == 'f' || letter == 'F') // written by Pavlo
	{
		if (region == 1)
		{
			std::cout << "Falkland Islands, French Guiana" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Faroe Islands, Finland, France" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Fs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "French Southern Territories" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Fiji, French Polynesia" << std::endl;
		}
	}

	if (letter == 'g' || letter == 'G') // written by Pavlo
	{
		if (region == 1)
		{
			std::cout << "Greenland, Guatemala, Guyana" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Germany, Gibraltar, Greece" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Gabon, The Gambia, Ghana, Guinea, Guinea-Bissau" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Georgia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Grenada, Guadeloupe, Guam" << std::endl;
		}
	}

	if (letter == 'h' || letter == 'H') // written by Pavlo
	{
		if (region == 1)
		{
			std::cout << "Honduras" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Holy See, Hungary" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Hs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Hong Kong" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Haiti" << std::endl;
		}
	}

	if (letter == 'i' || letter == 'I') // written by Pavlo
	{
		if (region == 1)
		{
			std::cout << "There are no Is in Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Iceland, Ireland, Italy" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Ivory Coast" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "India, Indonesia, Iran, Iraq, Israel" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Is in rest of the world" << std::endl;
		}
	}

	if (letter == 'r' || letter == 'R') // Written By Ciaran Kinsella
	{
		if (region == 1)
		{
			std::cout << "No Rs is Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Romania, Russian Federation" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Reunion Island, Rwanda" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "No Rs is asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "No Rs in rest of world" << std::endl;
		}

	}

	if (letter == 's' || letter == 'S') // Written By Ciaran Kinsella
	{
		if (region == 1)
		{
			std::cout << "Suriname" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "San Marino, Serbia, Slovakia, Slovenia, Spain, Sweden, Switzerland" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Sao Tome and Principe, Senegal, Seychelles, Sierra Leone, Somalia, South Africa, South Sudan, Sudan,Swaziland" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Saudi Arabia, Singapore, Sri Lanka, Syria" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Saint Kitts and Nevis, Saint Lucia, Saint Vincent and the Grenadines, Samoa, Solomon Islands" << std::endl;
		}

	}

	if (letter == 't' || letter == 'T') // Written By Ciaran Kinsella
	{
		if (region == 1)
		{
			std::cout << "Trinidad and Tobago" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Turkey" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Tanzania, Togo, Tunisia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Taiwan, Tajikistan, Thailand, Tibet, Timor-Leste, Turkmenistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Tokelau, Tonga, Turkmenistan, Tuvalu" << std::endl;
		}

	}
	if (letter == 'u' || letter == 'U') // Written By Ciaran Kinsella
	{
		if (region == 1)
		{
			std::cout << "United States, Uruguay " << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Ukraine, United Kingdom" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Uganda" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "United Arab Emirates, Uzbekistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "No Us in the rest of the world" << std::endl;
		}

	}
	if (letter == 'v' || letter == 'V') // Written By Ciaran Kinsella
	{
		if (region == 1)
		{
			std::cout << "Venezuela, Virgin Islands (U.S.)" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Vatican City State" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu, Virgin Islands (British)" << std::endl;
		}

	}

	if (letter == 'w' || letter == 'W') // Written By Ciaran Kinsella
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws is Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands" << std::endl;
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