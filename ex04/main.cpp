/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:17:03 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/09 20:43:22 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

/*
Reads one line at a time from input file into "line" until EOF.
Writes into output file, replacing s1 with s2. 
- Finds each s1 in line, and rebuilds string with s2 instead.
- Writes modified line in new file. 
*/
void duplicateAndReplaceString(std::ifstream &readFileStream, std::ofstream &writeFileStream, std::string s1, std::string s2)
{
	std::string line;

	while (std::getline(readFileStream, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) // s1 wurde gefunden
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		if (readFileStream.eof())
			writeFileStream << line;
		else
			writeFileStream << line << std::endl;
	}
}

/*
1. Takes three parameters: filename, two strings (s1 & s2)
2. Open the file <filename> with ifstream (input file stream) to read from file
3. Create new file for replacement with ofstream (out file stream) to write in file
3. FT duplicateAndReplaceString: Copy content of original file into a new file <filename>.replace
   replacing every occurence of s1 with s2
*/
int main (int argc, char **argv)
{
	std::string filename, newFile, s1, s2;
	
	if (argc != 4)
		return 1;

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	std::ifstream readFileStream(filename);
	if (!readFileStream) 
    {
		std::cerr << "Error: Unable to open input file " << filename << std::endl;
        return (1);
    }

	newFile = filename + ".replace";
	std::ofstream writeFileStream(newFile);
	if (!writeFileStream) 
    {
		readFileStream.close();
		std::cerr << "Error: Unable to create file " << newFile << std::endl;
        return (1);
    }
	
	duplicateAndReplaceString(readFileStream, writeFileStream, s1, s2);
	readFileStream.close();
	writeFileStream.close();
	return 0;
}
