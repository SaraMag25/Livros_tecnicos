#include <iostream>
#include <cmath> 
struct Point {
    double x, y;
    double distance(const Point& p) {
        return std::sqrt(std::pow(x - p.x, 2) + std::pow(y - p.y, 2));
    }
};

class Line {
    private:
        bool changed;
        double length;
        Point start;
        Point end;

    public:
        Line() {
            changed = true; 
            start = {0, 0};
            end = {0, 0};
        }

        void setStart(Point p) { start = p; changed = true; }
        void setEnd(Point p)   { end = p; changed = true; }
        
        Point getStart(void) { return start; }
        Point getEnd(void)   { return end; }

        double getLength() {
            if (changed) {
                length = start.distance(end);
                changed = false; 
            }
            return length;
        }
};

int main() {
    Line l;
    l.setStart({0, 0});
    l.setEnd({3, 4});

    std::cout << l.getLength() << std::endl;
    return 0;
}