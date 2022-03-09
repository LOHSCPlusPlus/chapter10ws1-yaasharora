class Point{
    public:
        Point();
        //double getX();
        //double getY();
        //void setX(double xVal);
        //void setY(double yVal);
        void print();
        Point(double xVal, double yVal);
        double calcDistance(Point other);
    private:
        double x;
        double y;
};

