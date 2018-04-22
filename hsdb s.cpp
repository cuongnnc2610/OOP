#include <iostream>

using namespace std;

class Point
{
	int xCoordinate, yCoordinate;
	public:
		void SetPoint(int x, int y)
		{
			xCoordinate = x;
			yCoordinate = y;
		}
		
		void OffsetPoint(int x, int y)
		{
			xCoordinate += x;
			yCoordinate += y;
		}
		
		void setXCoordinate(int x)
		{
			xCoordinate = x;
		}
		
		int getXCoordinate()
		{
			return xCoordinate;
		}
};

int main()
{
	Point point;
	point.SetPoint(10, 20);
	point.OffsetPoint(2, 2);
	point.setXCoordinate(10);
	cout << point.getXCoordinate();
	return 0;
}


	
