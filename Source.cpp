#include "Header.h"
void main()
{
    short key;
	bool q;
	
	do
	{CompositeUnit* house = new CompositeUnit;
		system("cls");
		cout << "What kind of house would you like to build?\n\n1 - Simple \n2 - Disco \n3 - Elite" << endl<<endl;
		cin >> key;
		switch (key)
		{
		case 1:
		{
			system("cls");
			house->addUnit(create_SimpleHouse());
			cout << "Simple house consists of: " << endl<<endl;
			house->getUnit();
			delete house;
			}
			break;
		
		case 2:
		{
			system("cls");
			house->addUnit(create_DiscoHouse());
			cout << "Disco house consists of: " << endl<<endl;
			house->getUnit();
			delete house;
		}
		break;

		case 3:
		{
			system("cls");
			house->addUnit(create_EliteHouse());
			cout << "Elite house consists of: " << endl<<endl;
			house->getUnit();
			delete house;
		}
		 break;
			default:
			cout << "Error" << endl;
			break;
		}
		cout << "\nPress 1 to continue, press 0 to break\n";
		cin >> q;
	} while (q);
		


    
}
