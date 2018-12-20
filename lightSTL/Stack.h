#pragma once
template<typename DATA>
class Stack
{
	int m_nSize;
	int m_Top;
	DATA *m_pData;
public:
	Stack(int nSize = 8): m_nSize(nSize), m_Top(0)
	{
		m_pData = new DATA[m_nSize];
	}
	~Stack()
	{
		delete[] m_pData;
	}
	int GetSize() const
	{
		return m_nSize;
	}
	int GetCount() const
	{
		return m_Top;
	}
	bool IsEmpty() const
	{
		return m_Top == 0;
	}
	bool IsFull() const
	{
		return m_Top == m_nSize;
	}
	void Push(const DATA &data);
	void Pop(DATA &data);
};

template<typename DATA>
void Stack<DATA>::Push(const DATA &data)
{
	m_pData[m_Top] = data;
	m_Top++;
}

template<typename DATA>
 void Stack<DATA>::Pop(DATA &data)
{
	 m_Top--;
	 data = m_pData[m_Top];
}

