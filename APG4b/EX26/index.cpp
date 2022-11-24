#include <bits/stdc++.h>
using namespace std;

map<string, int> intTable;
map<string, vector<int>> vectorTable;

int resolve_namespace(char variable) {
	if(isdigit(variable)) {
		return (int)variable;
	} else {
		string key(1, variable);
		return intTable.at(key);
	}
}


void int_command(vector<string> statement) {
	stack<char> operands;
	stack<char> opecodes;
	for (int i = 0; i < statement.size(); i++) {
		cout << statement.at(i) << " ";
	}

	cout << endl;
	for (int i = 0; i < statement.size(); i++) {
		string _segment = statement.at(i);
		char segment = *_segment.c_str();

		if (isdigit(segment)) {
			operands.push(segment);
		} else if(segment == '+' || segment == '-' || segment == '=') {
			opecodes.push(segment);
		} else if(segment == ';') {
			continue;
		} else {
			operands.push(segment);
		}
	}
	
	while (opecodes.size() != 0) {
		char opecode = opecodes.top();
		opecodes.pop();
		if (opecode == '+') {
			int operand1 = resolve_namespace(operands.top());
			operands.pop();
			int operand2 = resolve_namespace(operands.top());
			operands.pop();
			int result = operand2 + operand1;
			operands.push((char)result);
		}
		
		if (opecode == '-') {
			int operand1 = resolve_namespace(operands.top());
			operands.pop();
			int operand2 = resolve_namespace(operands.top());
			operands.pop();
			int result = operand2 - operand1;
			operands.push((char)result);
		}

		if (opecode == '=') {
			int operand1 = resolve_namespace(operands.top());
			operands.pop();
			char operand2 = operands.top();
			string key(1, operand2);
			intTable[key] = operand1;
		}
	}
	return;
}

void print_int_command(vector<string> statement) {
	stack<char> operands;
	stack<char> opecodes;
	for (int i = 0; i < statement.size(); i++) {
		cout << statement.at(i) << " ";
	}

	cout << endl;
	for (int i = 0; i < statement.size(); i++) {
		string _segment = statement.at(i);
		char segment = *_segment.c_str();

		if (isdigit(segment)) {
			operands.push(segment);
		} else if(segment == '+' || segment == '-') {
			opecodes.push(segment);
		} else if(segment == ';') {
			continue;
		} else {
			operands.push(segment);
		}
	}


	while (opecodes.size() != 0) {
		char opecode = opecodes.top();
		opecodes.pop();
		if (opecode == '+') {
			int operand1 = resolve_namespace(operands.top());
			operands.pop();
			int operand2 = resolve_namespace(operands.top());
			operands.pop();
			int result = operand2 + operand1;
			operands.push((char)result);
		}
		
		if (opecode == '-') {
			int operand1 = resolve_namespace(operands.top());
			operands.pop();
			int operand2 = resolve_namespace(operands.top());
			operands.pop();
			int result = operand2 - operand1;
			operands.push((char)result);
		}
	}

	cout << operands.top() << endl;
	return;
}

void vector_command(vector<string> statement) {

}

void print_vector_command(vector<string> statement) {

}

int main() {
	int N;
	cin >> N;
	vector<vector<string>> statements(N, vector<string>(0));
	for (int i = 0; i < N; i++) {
		vector<string> statement;
		string segment;
		while (segment != ";") {
			cin >> segment;
			statement.push_back(segment);
		}

		statements.at(i) = statement;
	}

	for (int i = 0; i < statements.size(); i++) {
		string command = statements.at(i).at(0);
		statements.at(i).erase(statements.at(i).begin());

		if (command == "int") {
			int_command(statements.at(i));
		} else if (command == "print_int") {
			print_int_command(statements.at(i));
		} else if (command == "vec") {

		} else if (command == "print_vec") {

		}


	}
}

