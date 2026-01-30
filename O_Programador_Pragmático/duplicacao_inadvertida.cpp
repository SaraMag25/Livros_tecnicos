class Line {
public:
    Point start;
    Point end;
    double length() {return start.distanceTo(end)};
};