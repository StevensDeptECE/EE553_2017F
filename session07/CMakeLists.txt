cmake_minimum_required(VERSION 3.8)
project(session07)

set(CMAKE_CXX_STANDARD 11)

set(ACCOUNT main.cpp Account.cpp Account.h Bank.h)
add_executable(account ${ACCOUNT})

set(BITMAP testBitmap.cpp .idea/Bitmap.h floodfill.cpp)
add_executable(account ${BITMAP})