class Solution {
public:
    bool isValid(string s) {
        stack<char> strstack;
	char c, pc;

	try
	{
		for(int i=0;i<s.size(); i++)
		{
			c = s.at(i);
			if (c =='(' || c == '{' || c == '[')
				strstack.push(c);

			if (c ==')' || c == '}' || c == ']')
			{
				if (strstack.empty())
					return false;

				pc = strstack.top();
				strstack.pop();

				if ( (c == ')') && (pc == '(' ) )
					continue;
				else if ( (c == '}') && (pc == '{' ) )
					continue;
				else if ( (c == ']') && (pc == '[' ) )
					continue;
				else
					return false;
			}

		}
        if (!strstack.empty())
			return false;
		
	}
	catch (exception& e)
	{
		cerr << "exception caught: " << e.what() << '\n';
		return false;
	}
	return true;
        
    }
};