all: hello-cpp-world hello-c-world test

%: %.cc
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@

