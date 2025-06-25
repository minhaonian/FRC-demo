#include <frc/TimedRobot.h>
#include <rev/SparkMax.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override {
    m_motor.Set(0.1);
  }
 private:
  //rev::spark::SparkMax m_motor{1};
  rev::spark::SparkMax m_motor{15, rev::spark::SparkLowLevel::MotorType::kBrushless};
};

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif