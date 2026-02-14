.PHONY: all run clean

all:
	$(MAKE) -C src

run: all
	cd src && ./solarsystem

clean:
	$(MAKE) -C src clean
