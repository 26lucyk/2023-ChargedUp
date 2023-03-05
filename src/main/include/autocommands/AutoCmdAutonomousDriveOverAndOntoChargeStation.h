// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandHelper.h>
#include <frc2/command/SequentialCommandGroup.h>

#include "autocommands/AutoCmdDriveOntoChargeStation.h"
#include "autocommands/AutoCmdDriveOverChargeStation.h"
#include "autocommands/AutoCmdBalanceOnChargeStation.h"
#include "autocommands/AutoCmdTimer.h"

// Subsystem includes
#include "subsystems/SubDriveTrain.h"

class AutoCmdAutonomousDriveOverAndOntoChargeStation
    : public frc2::CommandHelper<frc2::SequentialCommandGroup,
                                 AutoCmdAutonomousDriveOverAndOntoChargeStation> {
 public:
  AutoCmdAutonomousDriveOverAndOntoChargeStation(SubDriveTrain* subDriveTrain, frc::Timer* timer);
};
