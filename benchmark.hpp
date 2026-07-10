#pragma once
#include "types.hpp"
#include <string>
#include <vector>
namespace ppibench {
std::vector<OperationResult> run_benchmark(const std::vector<CaseRecord>& cases, bool export_wkt = false, const std::string& output_wkt_csv = "");
}
