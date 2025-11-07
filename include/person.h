#include <iostream>
#include <string>

namespace person {

	class Person {
		std::string name;

		public:
			Person(std::string n);

			bool has_name();

			std::string get_name();

			void greet();
	};
}
