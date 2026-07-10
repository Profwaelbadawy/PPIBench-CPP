#pragma once
#include <string>
#include <vector>
namespace ppibench {
struct CaseRecord { std::string case_id,split,case_class,wkt_p,wkt_q,difficulty_level; int vertices_p=0,vertices_q=0; };
struct OperationResult { std::string case_id,backend,status; double intersection_ms=0,union_ms=0,difference_ms=0,symmetric_difference_ms=0,total_ms=0; double intersection_area=0,union_area=0,difference_area=0,symmetric_difference_area=0; bool valid_intersection=false,valid_union=false,valid_difference=false,valid_symmetric_difference=false; };
struct BenchmarkOptions { std::string input_csv,output_csv,split_filter="all",output_wkt_csv; std::size_t max_cases=0; bool export_wkt=false; };
}
