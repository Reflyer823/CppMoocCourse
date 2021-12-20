/*
 * Vec2DTest.cpp
 *
 *  Created on: 2019年11月12日
 *      Author: Reflyer
 */

#include <iostream>
#include "Vec2D.h"

using std::cout;
using std::endl;
using std::cin;

int main() {
	// 创建向量对象
	Vec2D v1{3, 4}, v2{4, 5};

	// 向量转为字符串
	cout << "v1 = " << v1.toString() << endl;
	cout << "v2 = " << v2.toString() << endl;

	// 向量加法：向量+向量，向量+数
	Vec2D v3 = v1 + v2;
	Vec2D v4 = v1 + 3.4;
	cout << "v1 + v2 = " << v3.toString() << endl;
	cout << "v1 + 3.4 = " << v4.toString() << endl;

	// 向量减法，向量点积，向量数乘
	Vec2D v5 = v2 - v1;
	Vec2D v6 = v1 - 1.2;
	double v7 = v1 * v2;
	Vec2D v8 = 2.0 * v1;
	cout << "v2 - v1 = " << v5.toString() << endl;
	cout << "v1 - 1.2 = " << v6.toString() << endl;
	cout << "v1 .* v2 = " << v7 << endl;
	cout << "v1 * 2.0 = " << (v1 * 2.0).toString() << endl;
	cout << "2.0 * v1 = " << v8.toString() << endl;

	cout << "v1 += v2 = " << (v1 += v2).toString() << endl;
	cout << "v1 -= v2 = " << (v1 -= v2).toString() << endl;

	// 向量求负值
	Vec2D v9 = v1.negative();
	cout << "-v1 = " << (-v1).toString() << endl;

	// 向量自增/自减
	cout << "++v9 = " << (++v9).toString() << endl;
	cout << "--v2 = " << (--v2).toString() << endl;
	cout << "v9++ = " << (v9++).toString() << endl;
	cout << "v9 = " << v9.toString() << endl;

	// 读取或者修改向量元素
//	v1[0] = 5;
	cout << "v1.x_ = " << v1[0] << endl;
	cout << "v1.y_ = " << v1[1] << endl;

	// 向量的长度和角度
	cout << "v1 magnitude = " << v1.magnitude() << endl;
	cout << "*v1 = " << *v1 << endl;
	cout << "double(v1) = " << static_cast<double>(v1) << endl;
	cout << "v1 direction = " << v1.direction() << endl;

	// 比较两个向量
	cout << "v1 compare to v2 = " << v1.compareTo(v2) << endl;

	// 向量的流输出与输入
	cout << "Please input a Vec2D: ";
	Vec2D v;
	cin >> v;
	cout << v << endl;

	return 0;
}
