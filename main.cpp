#include "diagnostic_msgs/DiagnosticStatus.h"

int main()
{
  int a = false ? diagnostic_msgs::DiagnosticStatus::OK : diagnostic_msgs::DiagnosticStatus::ERROR;
}
