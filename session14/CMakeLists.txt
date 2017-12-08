cmake_minimum_required(VERSION 3.8)
project(session14)

set(CMAKE_CXX_STANDARD 11)

set(ACCOUNT_SRC main.cpp Account.cpp)
add_executable(account ${ACCOUNT_SRC})


set(PRIME_SOURCE prime.cpp)
add_executable(prime ${PRIME_SOURCE})