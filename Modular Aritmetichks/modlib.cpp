#include "modlib.h"
#include <math.h>
#include <cmath>
#include <chrono>





void zadachaEdno(int*arr, int n) {
	//fill an array with modules
	for (int i = 0; i < n; i++) {
		arr[i] = i;
	
	}


}


void zadachaDve(int* arr, int n) {
	//sumata ot elementite na Z ring
	/*int k = 0;
	while (k < n) {
		for (int i = 0; i < n; i++) {
			std::cout << arr[k] << " + " << arr[i] << " = " << (arr[i] + arr[k]) % n << "\n";


		}
		k++;
	}
	*/
	int m, k;
	do {
		std::cout << "Enter element 1: ";
		std::cin >> m;
		if (m<0 || m>n - 1) {
			std::cout << "Wrong input please enter a valid element \n";
		}
	} while (m<0 || m>n - 1);

	do {
		std::cout << "Enter element 2: ";
		std::cin >> k;
		if (k<0 || k>n - 1) {
			std::cout << "Wrong input please enter a valid element \n";
		}
	} while (k<0 || k>n - 1);

	std::cout << "\n";
	std::cout << arr[m] << " + " << arr[k] << " = " << (arr[m] + arr[k]) % n << "\n";
}

void zadachaTri(int* arr, int n) {
	//razlikata ot elementite na Z ring
	/*int k = 0;
	int negative;
	while (k < n) {
		for (int i = 0; i < n; i++) {
			negative = (arr[k] - arr[i]);

			if (negative < 0) {
				std::cout << arr[k] << " - " << arr[i] << " = " << negative +n << "\n";
			}
			else {
				std::cout << arr[k] << " - " << arr[i] << " = " << negative%n << "\n";
			}

		}
		k++;
	}*/
	int m, k;
	do {
		std::cout << "Enter element 1: ";
		std::cin >> m;
		if (m<0 || m>n - 1) {
			std::cout << "Wrong input please enter a valid element \n";
		}
	} while (m<0 || m>n - 1);

	do {
		std::cout << "Enter element 2: ";
		std::cin >> k;
		if (k<0 || k>n - 1) {
			std::cout << "Wrong input please enter a valid element \n";
		}
	} while (k<0 || k>n - 1);


	int result;
	result = arr[m] - arr[k];

	if (result < 0) {
		std::cout << "\n";
		std::cout << arr[m] << " - " << arr[k] << " = " << result + n << "\n";
	}
	else {
		std::cout << "\n";
		std::cout << arr[m] << " - " << arr[k] << " = " << result%n << "\n";
	}


}



void zadachaChetri(int* arr, int n) {
	//proizvedenieto ot elementite na Z ring
	/*int k = 0;
	while (k < n) {
		for (int i = 0; i < n; i++) {
			std::cout << arr[k] << " * " << arr[i] << " = " << (arr[i] * arr[k]) % n << "\n";


		}
		k++;
	}*/
	int m, k;
	do {
		std::cout << "Enter element 1: ";
		std::cin >> m;
		if (m<0 || m>n - 1) {
			std::cout << "Wrong input please enter a valid element \n";
		}
	} while (m<0 || m>n - 1);

	do {
		std::cout << "Enter element 2: ";
		std::cin >> k;
		if (k<0 || k>n - 1) {
			std::cout << "Wrong input please enter a valid element \n";
		}
	} while (k<0 || k>n - 1);

	std::cout << "\n";
	std::cout << arr[m] << " * " << arr[k] << " = " << (arr[m] * arr[k]) % n << "\n";
	

}


void zadachaPet(int** darr,int*arr, int m) {
	
	for (int i = 0; i < m; i++) {
		darr[1][i] = arr[i];
	}

	for (int i = 0; i < m; i++) {
		darr[0][i] = NULL;
	}

	int k = 2;
	int l = 2;
	darr[0][0] = -1;
	darr[0][1] = 1;

	while (k < m) {

		for (int i = 2; i < m; i++) {

			
			
				if (darr[0][i] == 0) {
					while (l < m) {

						if ((darr[1][i] * l) % m == 1) {
							
							darr[0][i] = darr[1][l];
							darr[0][l] = darr[1][i];

						}
						l++;
					}
				}

				if (darr[0][i] == 0) {
					darr[0][i] = -1;
				}
			l = 2;
		}

		k++;
	}
	

	std::cout << "\n";

}



void zadachaShest(int** darr,  int m) {

	auto start = std::chrono::high_resolution_clock::now();

	int n;
	std::cout << "Enter the element you want to check from Zring: ";
	std::cin >> n;
	int r;

	
		
	if (darr[0][n] != -1) {

		r = darr[0][n];
		std::cout << "\n";
		std::cout << "The reciprocal elemen of " << n << " is " << r << "\n";

	}
	else {
		std::cout << "\n";
		std::cout << "This element doesnt have a reciprocal element \n";
		
	}
	
	auto end = std::chrono::high_resolution_clock::now();
	
	std::cout << "\n";
	std::cout << "This function took ";
	std::chrono::duration<float> duration = end - start;
	std::cout << duration.count() << " s to finish \n";
	

}


void zadachaSedem(int m, int n) {

	auto start = std::chrono::high_resolution_clock::now();

	int a = m;
	int b = n;

	int colws = 1;
	int ta, tb,t;

	

	if (a < b) {
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;

	}

	ta = a;
	tb = b;

	while (tb != 0) {
		colws++;
		t = tb;
		tb = ta % tb;
		ta = t;
	}

	

	int** darr = new int* [4];
	for (int i = 0; i < 4; i++) {
		darr[i] = new int[colws];
	}


	ta = a;
	tb = b;

	darr[0][0] = a;
	darr[0][1] = b;
	darr[2][0] = darr[3][1] = 1;
	darr[3][0] = darr[2][1] = 0;
	darr[1][0] = 0;
	int k=2;
	while (tb != 0) {
		darr[0][k] = ta % tb;
		darr[1][k - 1] = ta / tb;
		t = tb;
		tb = ta % tb;
		ta = t;
		k++;
	}

	for (int i = 2; i < colws; i++) {
		darr[2][i] = darr[1][i - 1] * darr[2][i - 1] + darr[2][i - 2];
		darr[3][i] = darr[1][i - 1] * darr[3][i - 1] + darr[3][i - 2];
	}

	

	for (int i = 0; i < colws; i++) {
		if (darr[0][i] == 1) {
			std::cout << "\n";
			std::cout << darr[0][i] << " = " << (darr[2][i] ? pow(-1, i) * darr[2][i] : 0) << "*" << a;
			std::cout << (pow(-1, i + 1) > 0 ? "+" : "-");
			std::cout << darr[3][i] << "*" << b << "\n";

			std::cout << "Which means the reciprocal element of " << m << " is " << darr[3][i]<<"\n";

		}
	}


	auto end = std::chrono::high_resolution_clock::now();
	
	std::cout << "\n";
	std::cout << "This function took ";
	std::chrono::duration<float> duration = end - start;
	std::cout << duration.count() << " s to finish \n";


}




void zadachaOsem(int** arr, int n) {

	int result;
	int k = 1;

	int m, q;
	do {
		std::cout << "Enter element 1: ";
		std::cin >> m;
		if (m<0 || m>n - 1) {
			std::cout << "Wrong input please enter a valid element \n";
		}
	} while (m<0 || m>n - 1);

	do {
		std::cout << "Enter element 2: ";
		std::cin >> q;
		if (q<0 || q>n - 1) {
			std::cout << "Wrong input please enter a valid element \n";
		}
	} while (q<0 || q>n - 1);

	if (arr[0][q] != -1) {
		result = (arr[1][m] * arr[0][q]) % n;
		std::cout << "\n";
		std::cout << arr[1][m] << ":" << arr[1][q] << "=" << arr[1][m] << "*(1/" << arr[1][q] << ")=" << arr[1][m] << "*" << arr[0][q] << "=" << result << "\n";
	}
	else {
		result = -1;
		std::cout << "\n";
		std::cout << arr[1][m] << ":" << arr[1][q] << "=" << result << " ---> not possible \n";
	}


	/*while (k < n) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {

				if (arr[0][j] != -1) {
					result = (k * arr[0][j]) % n;
					std::cout << k << ":" << arr[1][j] << "=" << k << "*(1/" << arr[1][j] << ")=" << k << "*" << arr[0][j] << "=" << result << "\n";
				}
				else {
					result = -1;
					std::cout << k << ":" << arr[1][j] << "=" << result << " ---> not possible \n";
				}

			}
			k++;
		}
	}*/

}



void zadachaDevet(int* arr,int n) {

	auto start = std::chrono::high_resolution_clock::now();

	long long int l = 0, m, s, k = 1, result = 0;
	

	do {
		std::cout << "Enter the base number: ";
		std::cin >> m;
		if (m<arr[1] || m>arr[n-1]) {
			std::cout << "Wrong input \n";
		}
	} while (m<arr[1] || m>arr[n-1]);

	do {
		std::cout << "Enter the gradation number: ";
		std::cin >> s;
		if (s<0) {
			std::cout << "Wrong input \n";
		}
	} while (s < 0);


	if (m > 19) {
		result = m;
		while (result != 1 && s != k) {
			k++;
			result = m * result % n;
		}
		if (k != s) {
			std::cout << (int)pow(m, s % k) % n << "\n";
		}
		else {
			std::cout << result << "\n";
		}
	}

	if (m < 20) {
		for (int i = 1; i < n; i++) {

			l = pow(m, arr[i]);
			if (l % n == 1) {
				k = arr[i];
			}

			l = 0;

		}

		result = pow(m, s % k);

		result = result % n;
		std::cout << "\n";
		std::cout <<"The answear is --> "<< result << "\n";
	}


	auto end = std::chrono::high_resolution_clock::now();

	std::cout << "\n";
	std::cout << "This function took ";
	std::chrono::duration<float> duration = end - start;
	std::cout << duration.count() << " s to finish \n";

	

}

void zadachaDeset(int* arr, int n,int s,int m) {

	auto start = std::chrono::high_resolution_clock::now();

	long long int reverse = 0;
	long long int num = 0;

	while (s != 0) {

		if (s % 2 > 0) {
			num = num * 10 + 1;
		}
		if(s%2==0) {
			num = num * 10+2;
		}
		
		s = s / 2;

	}

	
	while (num != 0) {

		reverse = reverse * 10 + (num % 10);
		num /= 10;
	}

 
	int b = 0;
	long long int result=1;
	long long int z;
	long long int l=m;
	int h;
	int k = 1;
	
	int lol = pow(m, 2);
	lol = lol % n;
	int lmao = pow(m, 4);
	lmao = lmao % n;
	int y = 1;
	while (reverse != 0) {

		


		if (reverse % 10 == 1) {

			z = pow(2, b);
		
			while (l != 1 && z != k) {
				k++;
				l = m * l% n;
			}

			result = result * l;

			/*if (y % 2 == 0) {
				z = lol;
			}
			else {
				z = lmao;
			}

			result = result * z;*/


			/*z = pow(2, b);
			std::cout << z << "\n";

			

			l = pow(m, z);
			std::cout << l << "\n";

			h = l % n;
			result = result * h;
			*/
		}
		y++;
		b++;
		reverse /= 10;
	}

	
	std::cout << "\n";
	std::cout <<"The answear is ---> "<< result%n << "\n";


	auto end = std::chrono::high_resolution_clock::now();

	std::cout << "\n";
	std::cout << "This function took ";
	std::chrono::duration<float> duration = end - start;
	std::cout << duration.count() << " s to finish \n";


}





long long int powerF(int x, int n) {

	if (n < 0){
		return powerF(1 / x, -n);
	}
	else if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x % 1000000007;
	}
	
	long int t = powerF(x, n / 2);
	t = (t * t) % 1000000007;
	
	if(n%2==0){
		return t;
	}
	else {
		return ((x % 1000000007) * t) % 1000000007;
	}

}

void zadachaEdinadeset(int** darr,int n) {

	int m;
	std::cout << "Enter the element you want to check: ";
	std::cin >> m;

	


	for (int i = 0; i < n; i++) {
		darr[i][0] = 0;
	}
	for (int i = 0; i < n; i++) {
		darr[0][i] = 0;
	}

	int result;
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {

			result = zadachaDesetOP(n, j, i);
			darr[i][j] = result;


		}
	}

	int b = 2;
	bool lmao = true;
	for (int i = 1;  i < n; i++) {
		while (b < n) {
			if (darr[m][i] == darr[m][b]) {
				lmao = false;
				break;
			}
			b++;
		}
	}

	if (lmao == true) {
		std::cout << "\n";
		std::cout << m << " is a primitive root of Z-ring \n";
	}
	else {
		std::cout << "\n";
		std::cout << m << " is not a primitive root of Z-ring \n";
	}
}






void zadachaDvanadeset(int** darr, int n) {


	for (int i = 0; i < n; i++) {
		darr[i][0] = 0;
	}
	for (int i = 0; i < n; i++) {
		darr[0][i] = 0;
	}

	int result;
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {

			result = zadachaDesetOP(n, j, i);
			darr[i][j] = result;

		}
	}
	int b = 2;
	int u = 1;
	int lmao = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << darr[i][j] << "\t";
		}
		std::cout << "\n";
	}

	std::cout << "\n";
	std::cout << "Primitive roots of Z-ring are: ";

	for (int i = 1; i < n; i++) {
		while (b < n) {
		
			if (darr[u][1] == darr[u][b]) {
				lmao = 0;
				b++;
				break;
			}
			
			b++;
		}
		
		
		if (lmao == 1) {
			std::cout << u << " | ";
		}
		
		u++;
		lmao = 1;
		b = 2;
		
	}


}



void zadachaChetirinadeset(int n) {


	if (n % 2==0 && n!=2) {
		std::cout << "\n";
		std::cout << "Z" << n << " ring is not a residual field \n";
	}
	else {
		std::cout << "\n";
		std::cout << "Z" << n << " ring is  a residual field \n";
	}

}


void zadachaTrinadeset(int* arr, int n) {
	int s;
	int m;
	std::cout << "Enter the generator: ";
	std::cin >> s;
	do {
		std::cout << "Enter the element you want to check: ";
		std::cin >> m;

		if (m<arr[0] || m>arr[n - 1]) {
			std::cout << " Wrong input choose a valid element from Z-ring \n";
		}
	} while (m<arr[0] || m>arr[n - 1]);

	int result;
	result = pow(s, m);
	
	if (result >= arr[0] && result <= arr[n - 1]) {
		std::cout << "\n";
		std::cout << " The discrete logarithm is " << result << " \n";
	}
	else {
		std::cout << "\n";
		std::cout << " -1 \n";
	}


}




int zadachaDesetOP(int n, int j, int i) {



	

	long long int l = 0, m, s, k = 1, result = 0;

	m = i;
	s = j;

	
		result = m;
		while (result != 1 && s != k) {
			k++;
			result = m * result % n;
		}
		if (k != s) {
			result = (int)pow(m, s % k) % n;
			return result;
		}
		else {
			return result; 
		}
	

	/*if (m < 20) {
		for (int i = 1; i < n; i++) {

			l = pow(m, arr[i]);
			if (l % n == 1) {
				k = arr[i];
			}

			l = 0;

		}

		result = pow(m, s % k);

		result = result % n;
		std::cout << "\n";
		std::cout << "The answear is --> " << result << "\n";
	}
	*/

	

}