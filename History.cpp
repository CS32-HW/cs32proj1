#include <iostream>
#include "History.h"
#include "globals.h"

History::History(int nRows, int nCols)
{
	// create 2d array of ints
	m_history = new int*[nRows];
	for (int i = 0; i < nRows; i++)
		m_history[i] = new int[nCols]();

	// store dimensions
	m_nRows = nRows;
	m_nCols = nCols;
}

History::~History()
{
	for (int i = 0; i < m_nRows; i++)
		delete [] m_history[i];
	delete [] m_history;
}

bool History::record(int r, int c)
{
	if (r > m_nRows || c > m_nCols)
		return false;

	m_history[r-1][c-1]++;
	return true;
}

void History::display() const
{
	clearScreen();
	for (int i = 0; i < m_nRows; i++) {
		for (int j = 0; j < m_nCols; j++) {
			unsigned char c;

			if (m_history[i][j] <= 0) 
				c = '.';
			else if (m_history[i][j] <= 26)
				c = '@' + m_history[i][j];
			else
				c = 'Z';

			std::cout << c;
		}
		std::cout << std::endl;
	}
}
