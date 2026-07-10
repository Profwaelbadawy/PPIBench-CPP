#pragma once
#include "types.hpp"
#include <string>
#include <vector>
namespace ppibench {
std::vector<CaseRecord> load_cases_csv(const std::string& path, const std::string& split_filter = "all", std::size_t max_cases = 0);
void write_results_csv(const std::string& path, const std::vector<OperationResult>& results);
}
