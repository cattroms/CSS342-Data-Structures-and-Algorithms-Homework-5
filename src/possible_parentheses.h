#include <list>



// Private recursive helper in order to follow required signature in problem
// Modified version from the demo
void _possibleParenthesis(int pos, int n, int open, int close, std::list<std::string>& result) {
		
		static char str[100];

		if (close == n) {
			// Instead of printing the string, pushes the string to the given result list
			result.push_back(str);
			return;
		}

		if (open > close) {
			str[pos] = '}';
			_possibleParenthesis(pos + 1, n, open, close + 1, result);
		}

		if (open < n) {
			str[pos] = '{';
			_possibleParenthesis(pos + 1, n, open + 1, close, result);
		}
}

// n: size of the problem
// result: a list of string, each string represents a case of valid parentheses of size n
void possibleParenthesis(int n, std::list<std::string>& result) {

	if (n > 0) {
		_possibleParenthesis(0, n, 0, 0, result);
	}

}

