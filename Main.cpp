//Шаблон
#include <iostream>


#if 3 < 10
#define PI 3.14
#define MSG "Hello, world"
#endif


#define forever while (true)
#define begin {
#define end }
#define sum(a, b) (a + b)
#define crtarr(t, n, s) t * n = new t[s]

#define crtmx(t, n, s1, s2) t ** n = new t* [s1];\


#if 1 == 2
void hi() {
	std::cout << "Hello!";
}
#elif 2 == 2
void hi() {
	std::cout << "Wow!\n";
}
#else 
void hi() {
	std::cout << "Bye!";
}
#endif

#ifdef sum 
const int k = 10;
#else
const int k = 11;
#error "Ошибка! sum должно существовать."
#endif 

#define print(v) std::cout << #v << " = " << v <<'\n';
#define show(a, b) a ## b


int main() begin
	setlocale(LC_ALL, "Russian");
		int n = 1, m = 2;
		int xy = 10;

		std::cout << show(x, y) << '\n';


		print(n);
		print(m);

		hi();
		//#ifndef sum - добавляет часть текста в файл cpp ( ifdef и ifndef)
		//Константы процессора ( применяются не очень часто )
		/*std::cout << "PI = " << PI << '\n';
		std::cout << MSG << '\n';*/


//#undef PI                  // освобождение переменной ( не можем использовать PI после этой строчки

		//std::cout << PI; // ошибка так как OI освобрждено из за undef ( по сути удалили переменную )
		//Создание програмных конструкций
		/*n = 0;
		forever begin
			std::cout << "."; //если мы не с чем не сравниваем выражение мы его сравниваем с 0;
			n++;
			if (n >= 5)
			break;
			end
				std::cout << "\n\n";*/


		//Макросы
		/*std::cout << sum(5, 5.6) << '\n'; // 10.6
		crtarr(int, px, 5);
		px[0] = 1;
		delete[]px;


		crtmx(int, mat, 5, 4);
		for (int y = 0; y < 5; y++) {
			for (int x = 0; x < 4; x++) {
				mat[y][x] = y * x + 1;
					std::cout << mat[y][x] << '\t';
			}
			std::cout << '\n';
		}*/




		//Встроенные объекты препроцессора 

		std::cout << __LINE__ << '\n'; // вывод строки

		std::cout << __FILE__ << '\n'; // выводит путь к файлу, откуда проект вызывается



		std::cout << "Дата сборки проекта:\n";
		std::cout << __DATE__ << '\n'; // возможность получить дату ( дата сборки проекта ) 


		//deaf gard если объекта PH, мы его создаем, когда создаем второй раз,
		// P H не создается, зацикленности нет, файл создается
		//( вопрос на экзамене )
		//#ifndef _F_H_ ( def guard - добавляются только в cpp файлы )
		//#define _F_H_
		//#include "p.h"
		//#endif
	return 0;
end

