#include <iostream>

using namespace std;

template <typename T>
class Pair
{
	T x, y;

public:
	Pair(T m, T n) : x(m), y(n){};
	void show()
	{
		cout << "The pair is(" << x << "," << y << ")" << endl;
	}
};

template <typename X>
X total(X *data)
{
	X s = 0;
	while (*data)
		s += *data++;
	return s;
};

template <typename Y>
Y sumOfSquares(Y y[], int size)
{
	Y sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += y[i] * y[i];
	}
	return sum;
}

int main()
{
	// Pair<int> c1(21,55);
	// c1.show();
	// Pair<float> c2(21.7,85.4);
	// c2.show();

	// int x[]={2,4,6,8,0,12,14,16,18};
	// cout<<total(x)<<endl;

	int x[] = {1, 2, 3};
	int ret = sumOfSquares(x, 3);
	cout << "sumOfSquares: " << ret << endl;
	return 0;
}
