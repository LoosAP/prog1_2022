#include "GUI/Graph.h"
#include "GUI/Simple_window.h"
#include "GUI/Window.h"

using namespace Graph_lib;

/*g++ drill13.cpp GUI/Graph.cpp GUI/Window.cpp GUI/GUI.cpp GUI/Simple_window.cpp -o drill13 `fltk-config --ldflags --use-images`
*/
int main(){
try{

	Point t1{300, 50};
	Simple_window win {t1, 1000, 800, "Window"};
	win.wait_for_button();
	
	
	Lines grid;
	int x_size = 800;
	int y_size = 800;
	
	for(int i = 100; i <= x_size; i += 100){
		grid.add(Point(i, 0), Point(i, y_size));
		grid.add(Point(0, i), Point(x_size, i));
	}
	win.attach(grid);
	win.set_label("Lines");
	win.wait_for_button();

	Vector_ref<Rectangle> v;
	for(int i = 0; i <= 800; i += 100){
		v.push_back(new Rectangle{Point(i, i), 100, 100});
		v[v.size()-1].set_fill_color(Color::red);
		win.attach(v[v.size()-1]);
	}
	win.set_label("Red rectangles");
	win.wait_for_button();
	
	
	Vector_ref<Image> v2;
	for(int i = 0; i < 401; i += 200){
		v2.push_back(new Image{Point{i+200, i}, "GUI/badge.jpg"});
		v2[v2.size()-1].set_mask(Point(100, 100), 200, 200);
		win.attach(v2[v2.size()-1]);}
	win.set_label("Images");
	win.wait_for_button();
	
	
	while(true){
		for(int i = 0; i < 701; i += 100){
			for(int j = 0; j < 701; j += 100){
				Image ii{Point{j, i}, "GUI/badge.jpg"};
				ii.set_mask(Point(150, 150), 100, 100);
				win.attach(ii);
				win.set_label("Moving image");
				win.wait_for_button();
			}
		}
	}

}
catch(exception& e){
	cerr << "Exception: " << e.what() << '\n';
	return 1;
}
catch(...){
	cerr << "Error" << '\n';
	return 2;
}

}