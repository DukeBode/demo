//#include<iostream>
//using namespace std;
//
//int a[] = { 1,3,5,7,9 };
//int &index(int);//声明函数返回一个整数类型的引用
//
//int mian()
//{
//	index(2) = 25;//将函数调用放在赋值运算符的左边，等价于将a[2]赋值为25
//	cout << index(2);//等价于输出数组元素a[2]的值
//	return 0;
//}
//
//int &index(int i)
//{
//	return a[i];//定义函数返回一个整数类型的引用，等价于返回数组元素a[i]
//}