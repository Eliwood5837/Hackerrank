class Box
{
private:
	int l, b, h;
public:
	int getLength()
	{
		return l;
	}
	int getBreadth()
	{
		return b;
	}
	int getHeight()
	{
		return h;
	}
	long long CalculateVolume()
	{
		return (long long)l*b*h;
	}
	Box()
	{
		//BoxesCreated++;
	}
	Box(int length, int breadth, int height)
	{
		l = length;
		b = breadth;
		h = height;

	}
	Box(Box& B)
	{
		l = B.getLength();
		b = B.getBreadth();
		h = B.getHeight();

	}
	~Box()
	{

	}
	bool operator<(Box &B)
	{
		int ll = B.getLength();
		int bb = B.getBreadth();
		int hh = B.getHeight();
		if (l < ll || (b < bb && l == ll) || (h < hh && b == bb && l == ll)) {
			return true;
		}
		else {
			return false;
		}
	}

};
ostream& operator<<(ostream& out, Box B)
{
	int l = B.getLength();
	int b = B.getBreadth();
	int h = B.getHeight();
	return out << l << ' ' << b << ' ' << h;
}