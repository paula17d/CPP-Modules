/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:17:03 by pdrettas          #+#    #+#             */
/*   Updated: 2025/10/30 21:18:34 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

int main (int argc, char **argv)
{
	std::string filename, newFile, s1, s2;
	
	// step01
	if (argc != 4)
		return 1; // EXIT_FAILURE

	filename = argv[1]; // file123
	s1 = argv[2];
	s2 = argv[3];
	
	// step02.1
	std::ifstream readFileStream(filename); // ifstream = input file stream = ein rohr wovon man ein file lesen kann
	if (!readFileStream) 
    {
		std::cerr << "Error: Unable to open input file " << filename << std::endl;
        return (1);
    }
	
	// step02.2
	newFile = filename + ".replace"; // = file123.replace
	std::ofstream writeFileStream(newFile); // ofstream = out file stream = ein rohr worauf man schreibt
	if (!writeFileStream) 
    {
		std::cerr << "Error: Unable to create file " << newFile << std::endl;
        return (1);
    }

	// copy file into another file
	std::string line;
	while (std::getline(readFileStream, line))
	{
		// hier checken if s1 in line 
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) // s1 wurde gefunden
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		writeFileStream << line << std::endl;
	}

	return 0; // EXIT_SUCCESS
}

/*
step01:
--Create a program 
--that takes three parameters in the following order: a filename and
two strings, s1 and s2.

security check:
argc = 4

argv[0]=name of program
argv[1]=std::string filename
argv[2]=std::string s1
argv[3]=std::string s2

step02:
--It must open the file <filename> 

--and copy its content into a new file <filename>.replace, 
----file <filename>.replace erstellen
----copy filename into <filename>.replace 

replacing every occurrence of s1 with s2.

Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You must create and turn in your
own tests to ensure that your program works as expected.
*/
