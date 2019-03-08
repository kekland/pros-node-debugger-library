#include "main.h"

using namespace okapi;
namespace debugger
{

class Debugger
{
public:
  std::string id;
};

class MotorDebugger : public Debugger
{
public:
  MotorDebugger(std::string iid, okapi::Motor imotor);
  std::shared_ptr<okapi::AbstractMotor> motor;
  std::string generateLog();
};
} // namespace debugger