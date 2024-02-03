#include <iostream>
#include <vector>
#include <string>
#include <regex>

int main()
{
	std::string s1("when why which whom what where whose who how ");
	std::regex reg("^(w)(.*)");
	std::smatch matches;
	
	std::vector<std::string> vString = {"when", "why", "which", "whom", "what", "where", "whose", "who", "how"};

	for (int i = 0; i < vString.size(); i++)
	{
		if (std::regex_search(vString[i], matches, reg))
		{
			for (int i = 0; i < matches.size(); i++)
			{
				std::cout << matches[i] << ' ';
			}
			std::cout << '\n';
		}
	}

	return 0;
}