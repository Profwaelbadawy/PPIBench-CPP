#pragma once
#include <boost/geometry.hpp>
#include <boost/geometry/geometries/point_xy.hpp>
#include <boost/geometry/geometries/polygon.hpp>
#include <boost/geometry/geometries/multi_polygon.hpp>
#include <string>
namespace ppibench { namespace bg=boost::geometry; using Point=bg::model::d2::point_xy<double>; using Polygon=bg::model::polygon<Point>; using MultiPolygon=bg::model::multi_polygon<Polygon>; Polygon parse_polygon_wkt(const std::string&); std::string to_wkt(const MultiPolygon&); double total_area(const MultiPolygon&); bool all_valid(const MultiPolygon&); }
