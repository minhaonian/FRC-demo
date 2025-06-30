

// #include <frc/TimedRobot.h>
// #include <frc/Joystick.h>
// #include <rev/SparkMax.h>  
// #include "myFunction.h"

// class Robot : public frc::TimedRobot {
//  public:
//   void RobotInit() override {
//     // 可以在這裡做初始化
//   }

//   void TeleopPeriodic() override {
//     // 讀取搖桿Y軸（通常是第1軸），控制馬達
//     double speed = m_joystick.GetY();  // 一般推前是負數，推後是正數
//     m_motor.Set(speed);  // 設置馬達輸出
//   }

//  private:
//   frc::Joystick m_joystick{0}; // 0號搖桿
//   rev::spark::SparkMax m_motor{15, rev::spark::SparkLowLevel::MotorType::kBrushless}; // 15號CAN ID，無刷馬達
// };

// #ifndef RUNNING_FRC_TESTS
// int main() { return frc::StartRobot<Robot>(); }
// #endif