#include <iostream>
using namespace std;
int main() {
	const float frame_color_cost = 0.10, regular_frame_cost = 0.15, fancy_frame_cost = 0.25,
		carbord_cost = 0.02, glass_cost = 0.07, crown_cost = 0.35;
	int length = 0, width = 0, frame = 0, picture_perimeter = 0, total_cost = 0, color = 0, cardboard = 0,
		glass = 0, crown = 0, no_crown = 0;

	cout << "enter the length of picture  :" << endl;
	cin >> length;
	cout << "enter the width of picture  :" << endl;
	cin >> width;
	//rectangular perimeter formula p=2(l+w)
	picture_perimeter = 2 * (length + width);
	//calculation for color
	cout << "enter the color which you want ('0' for white and '1'for other):" << endl;
	cin >> color;
	if (color == 0) {
		cout << "* you choice white color to color the frame ";
		total_cost = total_cost + frame_color_cost * picture_perimeter;
	}
	else if (color == 1) {
		cout << "* you choice other color to color the frame ";
		total_cost = total_cost + frame_color_cost * picture_perimeter;
	}
	else {
		cout << "* you don't want to paint the frame ";
	}
	cout << endl;
	//calculation for framae
	cout << "enter '1' for fancy else any number for regular  :" << endl;
	cin >> frame;

	if (frame == 1) {
		cout << "* you choice fancy frame  ";
		total_cost = total_cost + fancy_frame_cost * picture_perimeter;
	}
	else {
		cout << "* you choice regular frame ";
		total_cost = total_cost + regular_frame_cost * picture_perimeter;
	}
	cout << endl;
	cout << "enter '1' for putting cardboard behind picture else any number for not :" << endl;
	cin >> cardboard;
	if (cardboard == 1) {
		total_cost = total_cost + carbord_cost * picture_perimeter;
	}
	else {
		cout << "* you don't want to put any cardboard ";
	}
	cout << endl;
	cout << "enter '1' for putting glass on the top of picture else any number for not :" << endl;
	cin >> glass;
	if (glass == 1) {
		total_cost = total_cost + glass_cost * picture_perimeter;
	}
	else {
		cout << "* you don't want to put any glass ";
	}
	cout << endl;
	cout << "enter '1' for putting crown else any number for not :" << endl;
	cin >> crown;
	if (crown == 1) {
		cout << "* enter the number of crown :";
		cin >> no_crown;
		total_cost = total_cost + crown_cost * no_crown;
	}
	else {
		cout << "* you don't want to put any crown ";
	}
	cout << endl;
	cout << "the total cost after seleting the style :" << total_cost << "$";
	return 0;
}
