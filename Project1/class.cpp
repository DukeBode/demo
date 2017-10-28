////类：用户自定义的抽象的数据类型，代表了一批对象的共性和特性。
//#include<iostream>
//using namespace std;
////用关键字class取代结构体的struct
////类的声明，以分号结尾
//class Complex {
//	//数据成员：可以是任何数据类型，但是不能用自动（auto）、寄存器(register）或外部（extern）进行说明。
//private://声明以下部分为私有的
//	double real;//实部
//	double imag;//虚部
//	//成员函数：为了访问这些成员函数，必须先定义该结构体类型的变量，然后像访问结构体中的数据一样进行访问。
//public://公有成员
//	void init(double r, double i) {
//		real = r;
//		imag = i;
//	}
//	double abscomplex() {
//		double t;
//		t = real*real + imag*imag;
//		return sqrt(t);
//	}
//protected://保护成员
//	//保护成员可以由本类的成员函数访问，也可以由本类的派生类的成员函数访问，而类外的任何访问都是非法的。
//};
//
//int main()
//{
//	Complex A;
//	//C++为了保护类中数据安全，将类中的成员分为两类：私有成员（用private声明）和公有成员（用public声明）。
//	//私有成员只能被类内的成员函数访问，公有成员既可被类内成员访问，也可以被类外的对象访问。
//	//默认情况下，结构体中的成员是公有的，类中的成员是私有的。
//	A.init(1.1,2.2);
//	cout << "复数的绝对值：" << A.abscomplex();
//	return 0;
//}