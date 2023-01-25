# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/michaellippe/Local Storage/VIP Chip Team/Labs/Lab2/build/_deps/vcpkg-src"
  "/Users/michaellippe/Local Storage/VIP Chip Team/Labs/Lab2/build/_deps/vcpkg-build"
  "/Users/michaellippe/Local Storage/VIP Chip Team/Labs/Lab2/build/_deps/vcpkg-subbuild/vcpkg-populate-prefix"
  "/Users/michaellippe/Local Storage/VIP Chip Team/Labs/Lab2/build/_deps/vcpkg-subbuild/vcpkg-populate-prefix/tmp"
  "/Users/michaellippe/Local Storage/VIP Chip Team/Labs/Lab2/build/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp"
  "/Users/michaellippe/Local Storage/VIP Chip Team/Labs/Lab2/build/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src"
  "/Users/michaellippe/Local Storage/VIP Chip Team/Labs/Lab2/build/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/michaellippe/Local Storage/VIP Chip Team/Labs/Lab2/build/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/michaellippe/Local Storage/VIP Chip Team/Labs/Lab2/build/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
