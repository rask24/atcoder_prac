gcc_options = -std=c++17

all: program

program: source.cpp
	g++ $(gcc_options) $< -o $@

ex: program
	./$<

e: program
	./$< 2>/dev/null

d_program: source.cpp
	g++ $(gcc_options) -D DEBUG $< -o $@

d: d_program
	./$<

in_program: generate_in.cpp
	g++ $(gcc_options) $< -o $@

in: in_program
	./$<

in.txt: in_program
	./$<

test: in.txt
	cat $< | make e

out: in.txt
	cat $< | make e


clean: program
	rm -rf program

archive: source.cpp
	cp $< archive/tmp.cpp
	./filename
config:
	g++ -v
	make -v

.PHONY: clean ex archive
