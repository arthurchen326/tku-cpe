#include <iostream>

using namespace std;

class Rectangle{
	public:
		int height;
		int width;
		Rectangle(int,int);
		void draw();
};

Rectangle::Rectangle(int h, int w):height(h), width(w){
}

void Rectangle::draw(){
	for(int i=0;i<width;i++)
		cout<<"*";
	cout<<endl;
	for(int j=0;j<height-2;j++){
		cout<<"*";
		for(int k=0;k<width-2;k++)
			cout<<" ";
		cout<<"*"<<endl;
	}
	for(int i=0;i<width;i++)
		cout<<"*";
}

int main(){
	int height, width;
	Rectangle *rect;
	cout<<"Enter height: ";
	cin>>height;
	cout<<"Enter width: ";
	cin>>width;
	rect = new Rectangle(height, width);
	rect -> draw();
}
