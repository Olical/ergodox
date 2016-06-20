.PHONY: bootstrap clean compile flast-left flash-right

bootstrap:
	sudo pacman -S --needed\
		git cmake make python libusb ctags\
		arm-none-eabi-binutils arm-none-eabi-gcc\
		arm-none-eabi-newlib dfu-util

clean:
	rm -rf ./Keyboards/build

compile:
	mkdir -p ./Keyboards/build
	cp ./layers/*.kll ./Keyboards/build
	cd ./Keyboards && ./infinity.bash

flash-left:
	@echo noop

flash-right:
	@echo noop
