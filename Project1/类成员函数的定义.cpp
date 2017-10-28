////成员函数的定义
//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//
//	return 0;
//}
////第一种：类外定义，成员函数定义在类外，定义成普通函数
////不仅可以减少类体的长度，而且有助于把类的接口和类的实现细节相分离，隐藏了执行的细节
////在类外定义成员函数时，必须在成员函数名之前缀上类名，在类名和函数名之间应加上作用域运算符“::”
////在类声明中，成员函数的原型的参数表中可以只说明它们的类型
////在类外定义成员函数时，必须说明参数表中参数的类型，还必须指出其参数名
//class pointL {
//public:
//	void setpoint(int, int);
//	int getx();
//	int gety();
//private:
//	int x, y;
//
//};
//
//void pointL::setpoint(int a, int b)
//{
//	x = a;
//	y = b;
//}
//
//int pointL::getx()
//{
//	return x;
//}
//
//int pointL::gety()
//{
//	return y;
//}
////第二种：隐式定义，隐式定义成内联函数。
////这种定义内联函数的方法没有使用关键字inline进行声明，直接将成员函数定义在类的内部。
////内联成员函数的函数体代码也会在编译时被插入每一个调用它的地方。
////这种做法减少调用函数的开销，提高执行效率，但是却增加了编译后代码的长度。
////只有箱单简短的成员函数才定义为内联函数。
//class Point2 {
//public:
//	void setpoint(int a, int b) {
//		x = a;
//		y = b;
//	}
//	int getx() {
//		return x;
//	}
//
//	int gety() {
//		return y;
//	}
//private:
//	int x, y;
//};
////第三种：显示定义，
////为了书写清晰，在类声明中只给出成员函数的原型，而将成员函数的定义放在类的外部。
////在类内函数原型前或类外定义成员函数前冠以关键字inline，显示地说明这是一个内联函数。
////可以在声明函数原型和定义函数时同时写inline，也可以在其中一处声明inline，都能按内联函数处理。
////使用inline定义内联函数时，必须将类的声明和内联函数的定义都放在同一文件中（或同一头文夹中），否则编译时无法进行代码置换。
//class Point3 {
//public:
//	inline void setpoint(int, int);
//	inline int getx();
//	inline int gety();
//private:
//	int x, y;
//};
//
//inline void Point3::setpoint(int a, int b)
//{
//	x = a;
//	y = b;
//}
//
//inline int Point3::getx()
//{
//	return x;
//}
//
//inline int Point3::gety()
//{
//	return y;
//}
