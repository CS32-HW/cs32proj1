#ifndef History_h
#define History_h

class History
{
public:
	History(int nRows, int nCols);
	~History();
	bool record(int r, int c);
	void display() const;
private:
	int m_nRows;
	int m_nCols;
	int **m_history;
};

#endif // History_h
