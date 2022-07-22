#include <iostream>
#include <string>
#include<unordered_map>


using namespace std; 

string convert_to_camel_case(string text)
{
	for (int i = 0; i < text.size(); i++)
	{
	char next = i + 1;
		
		if (text[i] == '-')
		{
			text[next] = toupper(text[next]);
			text.erase(text.begin() + i);
		}
	}
	return text;
}

string reverse_string(string  str)
{
	unordered_map <string, int> words;
	string curr; 
	for (int i = 0 ; i< str.size(); i++)
	{
		if (str[i] != ' ')
		{
			curr.push_back(str[i]);
		}
		else
		{
			words.insert(make_pair(curr, curr.size()));
			curr.clear();
		}
	}
	string final; 
	unordered_map<string, int>::iterator it;
	for (it = words.begin(); it != words.end(); it++)
	{
		if (it->second >= 5)
		{
			it->first.
		}
		for (int i = 0; i < it->first.size(); i++)
		{
		final.push_back(it->first[i]);
		}
		final.push_back(' ');
	}
	return final;
}

string reverse_string2(string & str)
{
	int start = 0;
	int end; 
	for (int i= 0 ; i < str.size(); i++)
	{
		if (i == str.size() -1)
		{
			int j = start;
			int end2 = end;
			for (j; j <= (end + start) / 2; j++)
			{
				swap(str[j], str[end2]);
				end2--;
			}
		}

		if (str[i] == ' ')
		{
			end = i - 1;

			if (end - (start - 1) >= 5)
			{
				int j = start;
				int end2 = end;
				for (j; j <= (end + start) /2; j++)
				{
					swap(str[j], str[end2]);
					end2--;
				}
				start = i + 1;
			}
			else
			{
				end = i + 1;
				start = end;
			}
		}
	}
	return str;
}

int watermelon ()
{
	double weight; 
    cin>> weight;
    if(weight == 2) cout<< "NO";
    else if(floor(weight/2.0) == weight/2.0 )
	{
		cout<< "YES";
		return 1;	
	} 
    else 
	{
		cout<<"NO";
		return 0;
	}

}

void main()
{
	system("pause");
}