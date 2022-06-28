#include "userinter.h"
#include  "modlib.h"

using namespace std;

int menu() {

	int x;
	int n;
	cout << endl;
	cout << "Enter the ring module: ";
	cin >> n;

	int* zRing = new int[n];
	int** darr = new int* [2];

	for (int i = 0; i < 2; i++) {
		darr[i] = new int[n];
	}

	int** rootDarr = new int* [n];
	for (int i = 0; i < n; i++) {
		rootDarr[i] = new int[n];
	}

	
	
	printMenu();
	
	do {
		do {
			
			cin >> x;
			if (x < 0 || x>16) {
				cout << "Wrong input please choose a valid option" << endl;
				cout << endl;
				cout << endl;
			}
		} while (x < 0 || x>16);
		cout << endl;
		switch (x) {
		case 1:

			if (zRing[1] == 1) {
				for (int i = 0; i < n; i++) {
					cout << zRing[i] << "\t";
				}
				cout << endl;
			}
			else {
				zadachaEdno(zRing, n);
				for (int i = 0; i < n; i++) {
					cout << zRing[i] << "\t";
				}
				cout << endl;
			}
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;

		case 2:
			if (zRing[1]!=1 ) {
				
				zadachaEdno(zRing, n);
			}
			zadachaDve(zRing, n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 3:
			if (zRing[1] != 1) {

				zadachaEdno(zRing, n);
			}
			zadachaTri(zRing, n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 4:
			if (zRing[1] != 1) {

				zadachaEdno(zRing, n);
			}
			zadachaChetri(zRing, n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 5:

			if (darr[0][1] == 1) {
				for (int i = 0; i < 2; i++) {
					for (int j = 0; j < n; j++) {
						cout << darr[i][j] << "\t";
					}
					cout << endl;
				}
			}
			else {
				if (zRing[1] != 1) {

					zadachaEdno(zRing, n);
				}
				zadachaPet(darr, zRing, n);
				for (int i = 0; i < 2; i++) {
					for (int j = 0; j < n; j++) {
						cout << darr[i][j] << "\t";
					}
					cout << endl;
				}
			}
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 6:
			
			if (darr[0][1] != 1) {
				if (zRing[1] != 1) {
					zadachaEdno(zRing, n);
				}
				zadachaPet(darr, zRing, n);
			}
			zadachaShest(darr, n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 7:
			int w;
			do {
				std::cout << "Enter the element you want to check: ";
				std::cin >> w;

				if (w<0 || w>n - 1) {
					std::cout << "Wrong input please enter a valid element: ";
					std::cin >> w;
				}
			} while (w<0 || w>n - 1);
			/*if (w % 2 == 0 || n%2==0) {
				if (w != 2 || n%2==0) {
					cout << "Element " << w<<" and  elelement "<<n<<" arent simple numbers so "<<w<< " doesnt have a reciprocal element w " << endl;
					cout << endl;
					cout << endl;
					cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
					cout << "Your input-->";
					break;
				}
			}*/

			zadachaSedem(w, n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 8:
			if (darr[0][1] != 1) {
				if (zRing[1] != 1) {
					zadachaEdno(zRing, n);
				}
				zadachaPet(darr, zRing, n);
			}
			zadachaOsem(darr, n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 9:
			if (zRing[1] != 1) {

				zadachaEdno(zRing, n);
			}
			zadachaDevet(zRing, n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 10:
			if (zRing[1] != 1) {

				zadachaEdno(zRing, n);
			}
			int s, m;
			do {

				std::cout << "Enter the base number: ";
				std::cin >> s;

				if (s<zRing[1] || s>zRing[n - 1]) {
					std::cout << "Wrong input \n";
				}
			} while (s<zRing[1] || s>zRing[n - 1]);

			do {
				std::cout << "Enter the gradation number: ";
				std::cin >> m;
				if (m < 0) {
					std::cout << "Wrong input \n";
				}
			} while (m < 0);
			zadachaDeset(zRing, n,m,s);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 11:
			
			if (n % 2 == 0) {
				if (n != 2) {
					std::cout << "Z-ring cant have primitive roots \n";
					cout << endl;
					cout << endl;
					cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
					cout << "Your input-->";

					break;
				}

			}

			zadachaEdinadeset(rootDarr, n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 12:
			
			if (n % 2 == 0) {
				if (n != 2) {
					std::cout << "Z-ring cant have primitive roots \n";
					cout << endl;
					cout << endl;
					cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
					cout << "Your input-->";

					break;
				}

			}

			zadachaDvanadeset(rootDarr, n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 13:
			if (zRing[1] != 1) {

				zadachaEdno(zRing, n);
			}
			zadachaTrinadeset(zRing, n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 14:

			zadachaChetirinadeset(n);
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;
		case 15:

			
				delete[] zRing;
				zRing = NULL;
				
				for (int i = 0; i < 2; i++) {
					delete[] darr[i];
				}
					
					delete[] darr;
					darr = nullptr;
				
				
					for (int i = 0; i < n; i++) {
						delete[] rootDarr[i];
					}
					delete[] rootDarr;
					rootDarr = nullptr;
				
			

			do {
				std::cout << "Enter the new ring module: ";
				std::cin >> n;
				if (n < 1) {
					cout << "Wrong input \n";
				}
			} while (n < 1);

			zRing = new int[n];
			
			darr = new int* [2];
			for (int i = 0; i < 2; i++) {
				darr[i] = new int[n];
			}

			rootDarr = new int* [n];
			for (int i = 0; i < n; i++) {
				rootDarr[i] = new int[n];
			}
			
			
			cout << endl;
			cout << endl;
			cout << "Choose an option from the menu or press 16 to print the menu again " << endl;
			cout << "Your input-->";
			break;

		case 16:
			printMenu();
			break;
		}
	}while (x != 0);



	delete[]zRing;
	zRing = NULL;
	for (int i = 0; i < 2; i++) {
		delete[]darr[i];
	}
	delete[]darr;
	darr = nullptr;
	
	for (int i = 0; i < n; i++) {
		delete[]rootDarr[i];
	}
	rootDarr = nullptr;

	return 0;
}



void printMenu() {
	
		
			cout << "Choose an option:" << endl;
			cout << "1- Fill an array with Z-ring" << endl;
			cout << "2- Find the sums of the elements in Z-ring" << endl;
			cout << "3- Fint the -devision of the elements in Z-ring" << endl;
			cout << "4- Find the multiplication of the elements in Z-ring" << endl;
			cout << "5- Create a 2d array with the reciprocal elemtns in Z-ring" << endl;
			cout << "6- Find the reciprocal element of a element you have chosen" << endl;
			cout << "7- Find the reciprocal element of a element you have chosen using Bezu method" << endl;
			cout << "8- Find the / devision if possible of the elements in Z-ring" << endl;
			cout << "9- Find the gradation of a number and power you have chosen using method I" << endl;
			cout << "10- Find the gradation of a number and power you have chosen using method II" << endl;
			cout << "11- Check if an number you have chosen is a primitive root to Z-ring" << endl;
			cout << "12- Find all primitive roots of Z-ring" << endl;
			cout << "13- Find the discrete logarithm of an element you have chosen from Z-ring if it is possible" << endl;
			cout << "14- Find if a residual ring is a residual field" << endl;
			cout << "15- Create a new array" << endl;
			cout << "16- Print menu" << endl;
			cout << "Press 0 to exit program" << endl;

			cout << "Your input->";

}