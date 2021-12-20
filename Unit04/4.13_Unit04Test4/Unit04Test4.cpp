/*
 * Unit04Test4.cpp
 *
 *  Created on: 2019年10月30日
 *      Author: Reflyer
 */

#include <iostream>
#include <cstdlib>

class Screen {
private:
	int width, height;
	void exitWhenInvalidScreen(int width, int height) {
		if (width > 1000 || height > 1000 || width <= 0 || height <= 0) {
			std::cout << "invalid screen size";
			exit(-1);
		}
	}
public:
	Screen(int width, int height) : width{width}, height{height} {
		exitWhenInvalidScreen(width, height);
		std::cout << "screen" << std::endl;
	}

	Screen() : Screen(640, 480) {}

	int getHeight() const {
		return height;
	}

	void setHeight(int height) {
		exitWhenInvalidScreen(1, height);
		this->height = height;
	}

	int getWidth() const {
		return width;
	}

	void setWidth(int width) {
		exitWhenInvalidScreen(width, 1);
		this->width = width;
	}
};

int main() {
  int width, height;
  std::cin >> width >> height;
  Screen screen1 (width, height);
  Screen screen2;

  screen2.setWidth(800);
  screen2.setHeight(600);

  // 下面两行代码所输出的宽和高之间有一个空格字符分隔
  std::cout << screen1.getWidth() << ' ' << screen1.getHeight() << std::endl;
  std::cout << screen2.getWidth() << ' ' << screen2.getHeight();

  return 0;
}
