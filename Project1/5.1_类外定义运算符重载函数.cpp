////C++��ֻ�ܶ����е�������������أ��������û��Լ������µ������
////һ�����������ع���Ӧ����ԭ�еĹ��������ƣ��ҷ�������ϰ��
////ͨ������£���ֵ�������=��������ͬ�����֮����໥��ֵ����ϵͳ�ṩ�Ĳ�����������Ҫ���������������غ���
////
////���ط����ܣ�
////	���ܸı�������Ĳ�������ĸ���
////	���ܸı������ԭ�е����ȼ�
////	���ܸı������ԭ�еĽ������
////	���غ����Ĳ�������ȫ����C++��׼��������
////	��������غ�����������ͨ��������ĳ�Ա�����������Ԫ����
////	һ����ԣ�����������������������أ���=������
////
////�������ص��������
////	.		��Ա���������
////	.*		��Աָ����������
////	::		�����������
////	Sizeof	���������
////	?:		���������
////	**		����C++�����
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
//	total = operator+(com1, com2);//��ǰʽ�ȼ�
//	return 0;
//}