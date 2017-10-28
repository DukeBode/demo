////用途：
////	将引用作为函数的参数。
//#include<iostream>
//using namespace std;
////例：指针变量作为函数参数
//void swap(int *m,int *n)
//{
//	int temp;
//	temp = *m;
//	*m = *n;
//	*n = temp;
//}
////例：引用作为函数参数
//void swap1(int &m, int &n)
//{
//	int temp;
//	temp = m;
//	m = n;
//	n = temp;
//}
//
//int main()
//{
//	int a = 5, b = 10;
//	cout << "a=" << a << " b=" << b << endl;
//	swap(&a, &b);
//	cout << "a=" << a << " b=" << b << endl;
//	swap1(a, b);//实参a和b是整型变量，可以通过引用来修改实参a和b的值
//	cout << "a=" << a << " b=" << b << endl;
//	return 0;
//}
