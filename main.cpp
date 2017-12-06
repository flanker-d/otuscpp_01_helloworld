#include "lib.h"
#include <spdlog/spdlog.h>
#include <iostream>

int main(int argc, char** argv)
{
  auto logger = spdlog::stdout_logger_mt("console");
  logger->info("version {} was started", version());

  std::cout << "Hello, World!" << std::endl;

  return 0;
}
