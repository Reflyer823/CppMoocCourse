/*
 * Unit05Test3.cpp
 *
 *  Created on: 2019年10月30日
 *      Author: Reflyer
 */

#include <iostream>
#include <cstdlib>

class Screen {
private:
	int width, height;
	std::string enter{"enter screen"}, leave{"leave screen"};
	static Screen* instance;

	void exitWhenInvalidScreen(int width, int height) {
		if (width > 1000 || height > 1000 || width <= 0 || height <= 0) {
			std::cout << "invalid screen size";
			exit(0);
		}
	}

	Screen(int width, int height) : width{width}, height{height} {
		std::cout << enter << std::endl;
		exitWhenInvalidScreen(width, height);
	}
public:
//	Screen(int width, int height) : width{width}, height{height} {
//		std::cout << enter << std::endl;
//		exitWhenInvalidScreen(width, height);
//	}

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

	static Screen* getInstance(int width = 640, int height = 480) {
		if (instance == nullptr) {
			instance = new Screen{width, height};
		}
		return instance;
	}
};

Screen* Screen::instance = nullptr;

int main() {
  int width, height;
  Screen *screen1, *screen2;

  std::cin >> width >> height;

  screen1 = Screen::getInstance(width, height);
  screen2 = Screen::getInstance();

  std::cout << screen1->getWidth() << ' ' << screen1->getHeight() << std::endl;
  std::cout << screen2->getWidth() << ' ' << screen2->getHeight();

#ifdef DEBUG
  std::cin.get();
#endif
  return 0;
}
