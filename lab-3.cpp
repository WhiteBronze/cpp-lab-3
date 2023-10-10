#include <iostream> 




using namespace std;



int n;
long m[32];


long long func_recur( int i, long group_1, long group_2) {
	if (i < n) {
		long first = func_recur( i + 1,  group_1 + m[i], group_2) , second = func_recur( i + 1,  group_1, group_2 + m[i]);
		return min(first, second);

	}


	else

		return abs(group_1 - group_2);

}



int main() {

	cin >> n;


	for (int i = 0; i < n; i++) {
		long a;

		cin >> a;

		m[i] = a;

	}




	cout << (func_recur(0, 0, 0));

	return 1;
}
