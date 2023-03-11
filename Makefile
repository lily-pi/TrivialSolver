main: $(SRC)
	@$(CC) $(SRC) $(CXXFLAGS) -o solver.out

CC=g++
SRC=solver.cpp
CXXFLAGS := -D_FORTIFY_SOURCE=2 -D_GLIBCXX_ASSERTIONS  -fstack-clash-protection  -fstack-protector-all -O2 -pipe -Wall -Werror

