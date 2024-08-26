cmake_minimum_required(VERSION 3.28)
project(COS214_P3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(COS214_P3 A_OpenField.cpp A_OpenField.h A_Riverbank.cpp A_Riverbank.h A_Woodland.cpp A_Woodland.h Ambush.cpp Ambush.h Artillery.cpp Artillery.h BattleStrategy.cpp BattleStrategy.h C_OpenField.cpp C_OpenField.h C_Riverbank.cpp C_Riverbank.h C_Woodland.cpp C_Woodland.h Cavalry.cpp Cavalry.h CMakeLists.txt DemoMain.cpp Flanking.cpp Flanking.h Fortification.cpp Fortification.h I_OpenField.cpp I_OpenField.h I_Riverbank.cpp I_Riverbank.h I_Woodland.cpp I_Woodland.h Infantry.cpp Infantry.h Legion.cpp Legion.h LegionFactory.cpp LegionFactory.h LegionUnit.cpp LegionUnit.h OpenFieldFactory.cpp OpenFieldFactory.h RiverbankFactory.cpp RiverbankFactory.h TacticalCommand.cpp TacticalCommand.h TacticalMemento.cpp TacticalMemento.h TacticalPlanner.cpp TacticalPlanner.h TestingMain.cpp UnitComponent.cpp UnitComponent.h WarArchives.cpp WarArchives.h WoodlandFactory.cpp WoodlandFactory.h)