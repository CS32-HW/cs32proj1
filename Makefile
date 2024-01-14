.PHONY: toot
toot:
	./g32 -o toot *.cpp

.PHONY: clean
clean:
	-rm toot
