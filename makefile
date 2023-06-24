compile:
	clang++ -o gen/jungle-game src/**.cpp -lSDL2 -lSDL2_image
run:
	gen/jungle-game