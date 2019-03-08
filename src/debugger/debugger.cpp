#include "main.h"

using namespace debugger;

debugger::MotorDebugger::MotorDebugger(std::string iid, okapi::Motor imotor)
{
  printf("MotorDebugger::MotorDebugger");
  id = iid;
  motor = std::make_shared<okapi::Motor>(imotor);
  printf("MotorDebugger::MotorDebugger end");
};

std::string debugger::MotorDebugger::generateLog()
{
  std::string data = "{\"type\": \"motor\", \"id\": \"";
  data += id;
  data += "\", \"params\": {";

  std::vector<std::pair<std::string, std::string>> params;
  params.push_back(std::make_pair("actualVelocity", std::to_string(motor->getActualVelocity())));
  params.push_back(std::make_pair("brakeMode", std::to_string(static_cast<int>(motor->getBrakeMode()))));
  params.push_back(std::make_pair("currentDraw", std::to_string(motor->getCurrentDraw())));
  params.push_back(std::make_pair("currentLimit", std::to_string(motor->getCurrentLimit())));
  params.push_back(std::make_pair("direction", std::to_string(motor->getDirection())));
  params.push_back(std::make_pair("efficiency", std::to_string(motor->getEfficiency())));
  params.push_back(std::make_pair("encoderUnits", std::to_string(static_cast<int>(motor->getEncoderUnits()))));
  params.push_back(std::make_pair("faults", std::to_string(motor->getFaults())));
  params.push_back(std::make_pair("flags", std::to_string(motor->getFlags())));
  params.push_back(std::make_pair("gearing", std::to_string(static_cast<int>(motor->getGearing()))));
  params.push_back(std::make_pair("position", std::to_string(motor->getPosition())));
  params.push_back(std::make_pair("power", std::to_string(motor->getPower())));
  params.push_back(std::make_pair("targetPosition", std::to_string(motor->getTargetPosition())));
  params.push_back(std::make_pair("targetVelocity", std::to_string(motor->getTargetVelocity())));
  params.push_back(std::make_pair("temperature", std::to_string(motor->getTemperature())));
  params.push_back(std::make_pair("torque", std::to_string(motor->getTorque())));
  params.push_back(std::make_pair("voltage", std::to_string(motor->getVoltage())));
  params.push_back(std::make_pair("zeroPositionFlag", std::to_string(motor->getZeroPositionFlag())));

  std::vector<std::pair<std::string, std::string>>::iterator it;
  for (it = params.begin(); it != params.end(); it++)
  {
    data += "\"";
    data += (*it).first;
    data += "\": \"";
    data += (*it).second;
    data += "\"";
    data += ",";
  }
  data.erase(data.length() - 1);
  data += "}}\n";
  return data;
}