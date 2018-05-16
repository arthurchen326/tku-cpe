#include <iostream>

using namespace std;

class Rect{
	public:
		int height;
		int width;
		Rect(int, int);
		int perimeter();
};

Rect::Rect(int h, int w):height(h), width(w){	
}

int Rect::perimeter(){
	return 2 * height + 2 * width;
}

int main(){
	int height, width, perimeter;
	Rect *rect;
	cout<<"Enter height and width: ";
	cin>>height>>width;
	rect = new Rect(height, width);
	perimeter = rect -> perimeter();
	cout<<"perimeter = "<<perimeter;
}
