bin: main.cpp
	g++ $< -o $@

.PHONY: run clean
run:
	./bin
clean:
	rm bin