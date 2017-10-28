////C++语言对结构体类型进行了扩充，不仅仅可以含有不同类型的数据，而且还可以有函数。
//#include<iostream>
//using namespace std;
//
//struct Complex {
//	//数据成员
//	double real;//实部
//	double imag;//虚部
//	//成员函数：为了访问这些成员函数，必须先定义该结构体类型的变量，然后像访问结构体中的数据一样进行访问。
//	void init(double r, double i) {
//		real = r;
//		imag = i;
//	}
//	double abscomplex() {
//		double t;
//		t = real*real + imag*imag;
//		return sqrt(t);
//	}
//};
//
//int main()
//{
//	Complex A;
//	A.init(1.1,2.2);
//	cout << "复数的绝对值：" << A.abscomplex();
//	return 0;
//}