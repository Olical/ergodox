.PHONY: bootstrap

bootstrap:
	git clone git@github.com:kiibohd/kll.git compiler

compile:
	compiler/kll.py\
		layers/0.kll\
		--partial layers/1.kll\
		--backend kiibohd\
		--templates\
			compiler/templates/kiibohdKeymap.h\
			compiler/templates/kiibohdDefs.h\
		--outputs\
			out/generatedKeymap.h\
			out/kll_defs.h
