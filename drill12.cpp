#include "./GUI/Simple_window.h"
#include "Prog1/week2_6/GUI/Graph.h"
#include <string>
#include <iostream>

using namespace Graph_lib;


int main(){

    try{

    Point t1 {100, 100};

    Simple_window win {t1, 640, 400, "My window"};

    win.wait_for_button();

    //12.7.3
    Axis xa {Axis::x, Point{20,300}, 280, 10, "x axis"};
    win.attach(xa);
    win.set_label("Axis");
    win.wait_for_button();

    Axis ya {Axis::y, Point {20,200}, 280, 10, "y axis"};
    ya.set_color(Color::cyan);

    win.attach(ya);
    win.set_label("y axis");
    win.wait_for_button();
    
    Function sine {sin, 0 ,100, Point{20,150}, 1000, 50, 50};
    win.attach(sine);
    win.set_label("Sine Function");
    win.wait_for_button();
    
    Polygon poly;
    poly.add(Point{300,200});
    poly.add(Point{350,100});
    poly.add(Point{400,200});

    poly.set_color(Color::red);
    poly.set_style(Line_style::dash);
    win.attach(poly);
    win.set_label("Polygon");
    win.wait_for_button();
    
    Rectangle r {Point{200,200}, 100, 50};
    win.attach(r);

    poly_rect.add(Point{100,50});
    poly_rect.add(Point{200,50});
    poly_rect.add(Point{200,100});
    poly_rect.add(Point{50,75});

    win.attach(poly_rect);

    win.set_label("Draw rectangle");
    win.wait_for_button();
    }
        catch(exception& e) { //általános exception
            cerr << "exception: "  << e.what()<< '\n';
            return 1;   
        
    } catch (...) { //egyéb exception
            cerr << "error\n";
            return 2;
    }

}
