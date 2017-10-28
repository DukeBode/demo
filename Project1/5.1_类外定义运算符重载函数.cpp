////C++中只能对已有的运算符进行重载，不允许用户自己定义新的运算符
////一般来讲，重载功能应当与原有的功能相类似，且符合人们习惯
////通常情况下，赋值运算符“=”可用于同类对象之间的相互赋值，当系统提供的不能满足程序的要求是需需自行重载函数
////
////重载符不能：
////	不能改变运算符的操作对象的个数
////	不能改变运算符原有的优先级
////	不能改变运算符原有的结合特性
////	重载函数的参数不能全部是C++标准类型数据
////	运算符重载函数可以是普通函数、类的成员函数、类的友元函数
////	一般而言，用于类对象的运算符必须重载，“=”例外
////
////不可重载的运算符：
////	.		成员访问运算符
////	.*		成员指针访问运算符
////	::		作用域运算符
////	Sizeof	长度运算符
////	?:		条件运算符
////	**		不是C++运算符
//#include<iostream>
//using namespace std;
//
//class Complex
//{
//public:
//	double real, imag;
//	Complex(double, double);
//	~Complex();
//	
//private:
//
//};
//
//Complex::Complex(double r = 0, double i = 0)
//{
//	real = r;
//	imag = i;
//}
//
//Complex::~Complex()
//{
//}
//
//Complex operator+(Complex com1, Complex com2) {
//	Complex temp;
//	temp.real = com1.real + com2.real;
//	temp.imag = com1.imag + com2.imag;
//	return temp;
//}
//
//int main()
//{
//	Complex com1(1.1, 2.2), com2(3.3, 4.4), total;
//	total = com1 + com2;
//	total = operator+(com1, com2);//与前式等价
//	return 0;
//}