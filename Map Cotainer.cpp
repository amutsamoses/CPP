#include<iostream>
#include<string>
#include<map>
#include <iomanip>

struct Point3D{
        double x;
        double y;
        double z;
        Point3D(): x(0), y(0), z(0){}
        Point3D(double x, double y, double z): x(x), y(y), z(z){}
        /* Copy constructor 
     * -> Implement redundant copy constructor for logging purposes and 
     * detect when copy happens. 
     */
        Point3D(const Point3D& p){      
                std::cerr << " I was copied" << std::endl;
                this->x = p.x;
                this->y = p.y;
                this->z = p.z;
        }
        ~Point3D() = default;
};

std::ostream& operator<< (std::ostream& os, const Point3D& p){
        os << std::setprecision(3) << std::fixed;
        return os << "Point3D{"
                          << "x = "  << p.x
                          << ",y = " << p.y
                          << ", z = "<< p.z
                          << "}";
}

int main(){ 
        auto locations = std::map<std::string, Point3D>();
        locations["point1"] = Point3D(2.0, 3.0, 5.0);
        locations["pointX"] = Point3D(12.0, 5.0, -5.0);
        locations["pointM"] =  {121.0, 4.0, -15.0};
        locations["Origin"] = {}; // Point32{} or Point3D()

        // Invokes copy constructor
        std::cerr << "  <== Before inserting" << "\n";
        locations.insert(std::pair<std::string, Point3D>("PointO1", Point3D(0.0, 0.0, 0.0)));
        std::cerr << "  <== After inserting" << "\n";

        // operator[] doesn't throw exception 
        std::cout << "point1 = " << locations["point1"] << "\n";
        std::cout << "pointX = " << locations.at("pointX") << "\n";
        std::cout << "pointM = " << locations.at("pointM") << "\n";

        // Safer and uses exception 
        try {
                std::cout << "pointY = " << locations.at("pointY") << "\n";
        } catch(const std::out_of_range& ex){
                std::cout << "Error - not found element pointY. MSG = " << ex.what() << "\n";
        }

        if(auto it = locations.find("pointX"); it != locations.end())
                std::cout << " [INFO]= => Location pointX found =  " << it->second << "\n";

        if(locations.find("pointMAS") == locations.end())
                std::cout << " [ERROR] ==> Location pointMAS  not found" << "\n";

        std::cout << "Key-Value pairs " << "\n";
        std::cout << "-------------------------" << "\n";
        for (const auto& x: locations)
                std::cout << x.first << " : " << x.second << "\n";
        std::cout << '\n';

        return 0;
}