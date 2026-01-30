class Line {
    private:
        bool changed;
        double length;
        Point start;
        Point end;
    public:
        void setStart(Point p) {start = p; changed = true; }
        void setEnd(Point p) {end = p; changed = true; }
        Point getStart(void) {return start; }
        Point getEnd(void) {return end;}
        double getLength(){
            if (changed) {
                length = start.distance(end);
                changed = false;
            }
            return length;
        }
};