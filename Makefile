.PHONY: bootstrap clean compile flash-left flash-right

bootstrap:
	sudo pacman -S --needed\
		git cmake make python libusb ctags\
		arm-none-eabi-binutils arm-none-eabi-gcc\
		arm-none-eabi-newlib dfu-util

clean:
	rm -rf ./Keyboards/linux-gnu.ERGO-{L,R}.gcc.make

compile:
	mkdir -p ./Keyboards/linux-gnu.ERGO-{L,R}.gcc.make
	cp ./layers/*.kll ./Keyboards/linux-gnu.ERGO-L.gcc.make
	cp ./layers/*.kll ./Keyboards/linux-gnu.ERGO-R.gcc.make
	cd ./Keyboards && ./ergodox.bash

flash-left:
	cd ./Keyboards/ERGO-L && sudo ./load

flash-right:
	cd ./Keyboards/ERGO-R && sudo ./load
