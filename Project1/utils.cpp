#include "utils.h"

namespace MyExcel {
	Vector::Vector(int n) :data(new string[n]), capacity(n), length(0) {}
	void Vector::push_back(string s) {
		if (capacity <= length) {
			string* temp = new string[capacity * 2];
			for (int i = 0;i < length;i++)
				temp[i] = data[i];
			delete[] data;
			data = temp;
			capacity *= 2;
		}
		data[length] = s;
		length++;
	}
	string Vector::operator[](int i) { return data[i]; }
	void Vector::remove(int x) {
		for (int i = x + 1;i < length;i++)
			data[i - 1] = data[i];
		length--;
	}
	int Vector::size() { return length; }
	Vector::~Vector() {
		if (data) {
			delete[] data;
		}
	}

	Stack::Stack() :start(NULL, "") { current = &start; }
	void Stack::push(string s) {
		Node* n = new Node(current, s);
		current = n;
	}
	string Stack::pop() {
		if (current == &start)return "";

		string s = current->s;
		Node* prev = current;
		current = current->prev;

		delete prev;
		return s;
	}

	string Stack::peek() { return current->s; }
	bool Stack::is_empty() {
		if (current == &start) return true;
		return false;
	}
	Stack::~Stack() {
		while (current != &start) {
			Node* prev = current;
			current = current->prev;
			delete prev;
		}
	}
	NumStack::NumStack() :start(NULL, 0) { current = &start; }
	void NumStack::push(double s) {
		Node* n = new Node(current, s);
		current = n;
	}
	double NumStack::pop() {
		if (current == &start) return 0;

		double s = current->s;
		Node* prev = current;
		current = current->prev;

		delete prev;
		return s;
	}
	double NumStack::peek() { return current->s; }
	bool NumStack::is_empty() {
		if (current == &start)return true;
		return false;
	}
	NumStack::~NumStack() {
		while(current != &start) {
			Node* prev = current;
			current = current->prev;
			delete prev;
		}
	}
	Cell::Cell(string data, int x, int y, Table* table) :data(data), x(x), y(y), table(table) {}

	string Cell::stringify() { return data; }
	int Cell::to_numeric() { return 0; }

	Table::Table(int max_row_size, int max_col_size) : max_row_size(max_row_size), max_col_size(max_col_size) {
		data_table = new Cell * *[max_row_size];
		for (int i = 0;i < max_row_size;i++) {
			data_table[i] = new Cell * [max_col_size];
			for (int j = 0;j < max_col_size;j++)
				data_table[i][j] = NULL;
		}
	}
	Table::~Table() {
		for (int i = 0;i < max_row_size;i++) {
			for (int j = 0;j < max_col_size;j++) {
				if (data_table[i][j]) delete data_table[i][j];
			}
		}
		for (int i = 0;i < max_row_size;i++) {
			delete[] data_table[i];
		}
		delete[] data_table;
	}
	void Table::reg_cell(Cell* c, int row, int col) {
		if (!(row < max_row_size && col < max_col_size)) return;

		if (data_table[row][col]) {
			delete data_table[row][col];
		}
		data_table[row][col] = c;
	}
	int Table::to_numeric(const string& s) {
		int col = s[0] - 'A';
		int row = atoi(s.c_str() + 1) - 1;

		if (row < max_row_size && col < max_col_size) {
			if (data_table[row][col]) {
				return data_table[row][col]->to_numeric();
			}
		}
		return 0;
	}
	string Table::stringify(const string& s) {
		int col = s[0] - 'A';
		int row = atoi(s.c_str() + 1) - 1;

		if (row < max_row_size && col < max_col_size) {
			if (data_table[row][col]) {
				return data_table[row][col]->stringify();
			}
		}
		return 0;
	}
	string Table::stringify(int row, int col) {
		if (row < max_row_size && col < max_col_size && data_table[row][col]) {
			return data_table[row][col]->stringify();
		}
		return "";
	}
	std::ostream& operator<<(std::ostream 0, Table& table) {
		o << table.print_table();
		return o;
	}
}
