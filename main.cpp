/* Copyright (C) 2020 Sai Manasa S
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Revision History:
 * Initial version: June 28, 2020
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void string_separator(string in_string)
{
	int i = 0, j = 0;
	vector<string> out_string_vect;
	char lower_case_alpha_arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 
		                           'g', 'h', 'i', 'j', 'k', 'l',
	                               'm', 'n', 'o', 'p', 'q', 'r',
	                               's', 't', 'u', 'v', 'w', 'x',
	                               'y', 'z'};

	char upper_case_alpha_arr[] = {'A', 'B', 'C', 'D', 'E', 'F',
		                           'G', 'H', 'I', 'J', 'K', 'L',
								   'M', 'N', 'O', 'P', 'Q', 'R',
								   'S', 'T', 'U', 'V', 'W', 'X',
	                               'Y', 'Z'};

	// Creating vectors from arrays
	vector<char> lower_case_alpha_vect;
    vector<char> upper_case_alpha_vect;
	string out_string;
    lower_case_alpha_vect.assign(lower_case_alpha_arr, lower_case_alpha_arr + 26);
    upper_case_alpha_vect.assign(upper_case_alpha_arr, upper_case_alpha_arr + 26);

	/*for(i = 0; i < lower_case_alpha_vect.size(); i++)
	{
		cout << lower_case_alpha_vect.at(i) << endl;
	}*/

	while(i < in_string.length())
	{
		for(j = 0, i = 0; j < upper_case_alpha_vect.size(), i < in_string.length(); j++, i++)
		{
			if (in_string[i] == upper_case_alpha_vect.at(j))
			{
				out_string.append(1, '\0');
				out_string_vect.emplace_back(out_string);
				cout << "Dbg1: Calling out_string_vect.emplace_back()\n" ;
				out_string.clear();
				char temp = lower_case_alpha_vect.at(j);
				out_string.append(1, temp);
				cout << "Dbg2: if part, out_string: " << out_string << endl;
				cout << "Dbg3: i: " << i << " " << "j: " << j << " " << endl;
			}
			else
			{
				out_string.append(1, in_string[i]);
				cout << "Dbg4: else part, out_string: " << out_string << endl;
				cout << "Dbg5: i: " << i << " " << "j: " << j << " " << endl;
			}
		}
		i++;
	}

    out_string.append(1, '\0');
	cout << "Dbg6: 2) Calling out_string_vect.emplace_back()\n";
	out_string_vect.emplace_back(out_string);

	// Print all the separated strings in lower case
	for(i = 0; i < out_string_vect.size(); i++)
	{
		cout<< "out_string_vect: " << out_string_vect[i] << endl;
	}

	//cout << "out_string: " << out_string << endl;

	// Not sure why this didn't work?!
	//vector<char> lower_case_alpha = {'a', 'b', 'c'};
	//vector<char> upper_case_alpha = {'A', 'B', 'C'};

	/*while (i <= in_string.length())
	{
	    if(out_string.at(i) == islower(out_string[i]))
	    {
			cout << out_string.at(i)
	    }
	    else
	    {
	    }
		i++;
	}*/

}

void main()
{
	//string_separator("abCab");
	string_separator("isValId");
	while(1);
}