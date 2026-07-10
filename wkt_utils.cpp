#include "wkt_utils.hpp"
#include <sstream>
#include <cmath>
#include <stdexcept>
namespace ppibench { Polygon parse_polygon_wkt(const std::string&s){Polygon p;try{bg::read_wkt(s,p);bg::correct(p);}catch(const std::exception&e){throw std::runtime_error(e.what());}return p;} std::string to_wkt(const MultiPolygon&g){std::ostringstream o;o<<bg::wkt(g);return o.str();} double total_area(const MultiPolygon&g){double a=0;for(auto&p:g)a+=std::abs(bg::area(p));return a;} bool all_valid(const MultiPolygon&g){for(auto&p:g){std::string why;if(!bg::is_valid(p,why))return false;}return true;} }
