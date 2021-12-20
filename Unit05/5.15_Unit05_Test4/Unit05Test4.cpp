/*
 * Unit05Test4.cpp
 *
 *  Created on: 2019年10月31日
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
	Screen() = delete;

	~Screen() {
		std::cout << leave << std::endl;
	}

	int getHeight() const {
		return height;
	}

	int getWidth() const {
		return width;
	}

	static Screen* getInstance(int width = 640, int height = 480) {
		if (instance == nullptr) {
			instance = new Screen{width, height};
		}
		return instance;
	}

	void deleteInstance() {
		delete instance;
		instance = nullptr;
	}
};

Screen* Screen::instance = nullptr;

int main() {
  int width, height;
  Screen *screen1, *screen2;

  std::cin >> width >> height;

  screen1 = Screen::getInstance(width, height);
  screen2 = Screen::getInstance();
  if (screen1 != screen2 ) {
      std::cout << "two instances" << std::endl;
  }

  std::cout << screen2->getWidth() << ' ' << screen2->getHeight() << std::endl;
  screen2->deleteInstance();

  screen1 = Screen::getInstance(2 * width, 2 * height);
  std::cout << screen1->getWidth() << ' ' << screen1->getHeight() << std::endl;
  screen1->deleteInstance();

#ifdef DEBUG
  std::cin.get();
#endif
  return 0;
}
